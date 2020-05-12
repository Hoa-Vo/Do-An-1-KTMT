#include"QInt.h"
#include<conio.h>
#include<fstream>
#include<unordered_map>
#include<vector>
#include<string.h>
vector<int> position(string s);
vector<string> whichCase(string s);
int main(int argc, char* argv[]) {
	ifstream inFile(argv[1], ifstream::in);
	ofstream outFile(argv[2], ofstream::out);
	//ifstream inFile;
	//ofstream outFile;
	//inFile.open("QInt_input.txt");
	//outFile.open("QInt_output.txt");
	if (!inFile.is_open()) {
		cout << "Can't open file!!!" << endl;
		return 0;
	}
	vector<string> b;
	if (argv[3] == "1") {
		string s;
		while (!inFile.eof()) {
			getline(inFile, s);
			if (s[0] == '\n')
				s.erase(0, 1);
			b = whichCase(s);
			if (b.size() == 3) {//Nếu b=3 tức là đang đổi hệ
			//b[0] là hệ nhập vào
			//b[1] là hệ cần đổi thành
			//b[2] là số cần đổi
				//TH đặc biệt phép not
				if (b[1] == "~") {
					QInt x, y;
					ScanQInt(inFile, x, stoi(b[0]), b[2]);
					y = ~x;
					PrintQInt(outFile, y, stoi(b[0]));
					outFile << endl;
				}
				else {
					QInt x;
					ScanQInt(inFile, x, stoi(b[0]), b[2]);
					PrintQInt(outFile, x, stoi(b[1]));
					outFile << endl;
				}
			}
			if (b.size() == 4) {//Nếu b=4 tức là đang tính toán
				//b[0] là hệ nhập vào
				//b[1] là số thứ nhất
				//b[2] là toán tử
				//b[3] là số thứ hai
				QInt x, y, z;
				bool result;
				string command = b[2];
				ScanQInt(inFile, x, stoi(b[0]), b[1]);
				ScanQInt(inFile, y, stoi(b[0]), b[3]);
				int compare;
				if (command == "+")
					compare = 1;
				if (command == "-")
					compare = 2;
				if (command == "*")
					compare = 3;
				if (command == "/")
					compare = 4;
				if (command == ">")
					compare = 5;
				if (command == "<")
					compare = 6;
				if (command == "==")
					compare = 7;
				if (command == ">=")
					compare = 8;
				if (command == "<=")
					compare = 9;
				if (command == "&")
					compare = 10;
				if (command == "|")
					compare = 11;
				if (command == "^")
					compare = 12;
				if (command == "<<")
					compare = 13;
				if (command == ">>")
					compare = 14;
				if (command == "rol")
					compare = 15;
				if (command == "ror")
					compare = 16;
				switch (compare)
				{
				case(1): {
					z = x + y;
					break;
				}
				case(2): {
					z = x - y;
					break;
				}
				case(3): {
					z = x * y;
					break;
				}
				case(4): {
					z = x / y;
					break;
				}
				case 5: {
					result = x > y;
					break;
				}
				case 6: {
					result = x < y;
					break;
				}
				case 7: {
					result = x == y;
					break;
				}
				case 8: {
					result = x >= y;
					break;
				}
				case 9: {
					result = x <= y;
					break;
				}
				case 10: {
					result = x < y;
					break;
				}
				case 11: {
					z = x & y;
					break;
				}
				case 12: {
					z = x | y;
					break;
				}
				case 13: {
					z = x << stoi(b[3]);
					break;
				}
				case 14: {
					z = x >> stoi(b[3]);
					break;
				}
				case 15: {
					z = rol(x, stoi(b[3]));
					break;
				}
				case 16: {
					z = ror(x, stoi(b[3]));
					break;
				}
				default:
					break;
				}
				if (compare > 4 && compare < 11) {
					outFile << result << endl;
				}
				else {
					PrintQInt(outFile, z, stoi(b[0]));
					outFile << endl;
				}
			}
		}
	}
	cout << "Complete!!!";
	return 0;
}
//Tìm vị trí các khoảng trắng
vector<int> position(string s) {
	int count = 0, idx = 0;
	vector<int> a;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			count++;
			a.push_back(i);
		}
	}
	a.push_back(count);
	return a;
}
//Trả về trường hợp cần xử lý
vector<string> whichCase(string s) {
	vector<int> b = position(s);
	if (b[b.size() - 1] == 2) {
		vector<string> a;
		a.push_back(s.substr(0, b[0]));
		a.push_back(s.substr(b[0], b[1] - 1));
		a.push_back(s.substr(b[1], s.length()));
		for (int i = 0; i < a.size(); i++) {
			if (a[i][0] == ' ')
				a[i].erase(0, 1);
			if (a[i][a[i].length() - 1] == ' ')
				a[i].erase(a[i].length() - 1);
		}
		return a;
	}
	else {
		vector<string> a;
		a.push_back(s.substr(0, b[0]));
		a.push_back(s.substr(b[0], b[1] - 1));
		a.push_back(s.substr(b[1], b[2] - b[1]));
		a.push_back(s.substr(b[2], s.length()));
		for (int i = 0; i < a.size(); i++) {
			if (a[i][0] == ' ')
				a[i].erase(0, 1);
			if (a[i][a[i].length() - 1] == ' ')
				a[i].erase(a[i].length() - 1);
		}
		return a;
	}
}