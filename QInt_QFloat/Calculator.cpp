#include "Calculator.h"
void Calculator::inPut(QInt& x){
	cout << "Chon he nhap(2,10,16):";
	int op;
	cin >> op;
	userInput(x, op);
}
void Calculator::outPut(QInt& y){
	userOutput(y, 2);
	userOutput(y, 10);
	userOutput(y, 16);
}
void Calculator::run(){
Loop:
	system("CLS");
	cout << "Chon kieu du lieu" << endl;
	cout << "0.Exit" << endl;
	cout << "1.So nguyen" << endl;
	cout << "2.So thuc" << endl;
	cout << "Nhap lua chon: ";
	int op;
	cin >> op;
	if (op == 1) {
	Loop1:
		system("CLS");
		cout << "Chon chuc nang" << endl;
		cout << "0.Exit" << endl;
		cout << "1.Chuyen doi he co so" << endl;
		cout << "2.Tinh toan" << endl;
		cout << "Nhap lua chon: ";
		int op1;
		cin >> op1;
		switch (op1)
		{
		case 0:
		{
			system("CLS");
			goto Loop;
		}
		case 1:
		{
			system("CLS");
			transUnit();
			system("CLS");
			goto Loop1;
		}
		break;
		case 2:
		{
			system("CLS");
			calculate();
			system("CLS");
			goto Loop1;
		}
		break;
		 default:
				break;
		}
	}
	else if (op == 2) {
		system("CLS");
	Loop2:cout << "Chon chuc nang" << endl;
		cout << "0.Exit" << endl;
		cout << "1.Chuyen tu he 10 sang he 2" << endl;
		cout << "2.Chuyen tu he 2 sang 10" << endl;
		cout << "Nhap lua chon: ";
		int op1;
		cin >> op1;
		switch (op1)
		{
		case 0:
		{
			system("CLS");
			goto Loop;
		}
		case 1:
		{
			system("CLS");
			string s;
			cout << "Nhap he 10:";
			cin >> s;
			userInputFloat(y, 10,s);
			cout << "Ket qua he 2:" << endl;
			userOutputFloat(y, 2);
			cout << endl;
			goto Loop2;
		}
		break;
		case 2:
		{
			system("CLS");
			string s;
			cout << "Nhap he 2:";
			cin >> s;
			userInputFloat(y,2, s);
			cout << "Ket qua he 10:" << endl;
			userOutputFloat(y, 2);
			cout << endl;
			goto Loop2;
		}
		break;
		default:
			break;
		}

	}

}
void Calculator::transUnit() {
	while (1) {
		cout << "0.Exit" << endl;
		cout << "1.2 sang 10" << endl;
		cout << "2.2 sang 16" << endl;
		cout << "3.10 sang 2" << endl;
		cout << "4.10 sang 16" << endl;
		cout << "5.16 sang 2" << endl;
		cout << "6.16 sang 10" << endl;
		cout << "Nhap lua chon: ";
		int op;
		cin >> op;
		cout << endl;
		if (op == 0)
			break;
		switch (op)
		{ 
		case 1:
		{
			userInput(x, 2);
			cout << "Ket qua:" << endl;
			userOutput(x, 10);
			cout << endl;
		}
		break;
		case 2:
		{
			userInput(x, 2);
			cout << "Ket qua:" << endl;
			userOutput(x, 16);
			cout << endl;
		}
		break;
		case 3:
		{
			userInput(x, 10);
			cout << "Ket qua:" << endl;
			userOutput(x, 2);
			cout << endl;
		}
		break;
		case 4:
		{
			userInput(x, 10);
			cout << "Ket qua:" << endl;
			userOutput(x, 16);
			cout << endl;
		}
		break;
		case 5:
		{
			userInput(x, 16);
			cout << "Ket qua:" << endl;
			userOutput(x, 2);
			cout << endl;
		}
		break;
		case 6:
		{
			userInput(x, 16);
			cout << "Ket qua:" << endl;
			userOutput(x, 10);
		}
		break;
		default:
			break;
		}
	}

}
void Calculator::calculate(){
	while (1) {
		Loop:cout << "0.Exit" << endl;
		cout << "1.Phep cong" << endl;
		cout << "2.Phep tru" << endl;
		cout << "3.Phep nhan" << endl;
		cout << "4.Phep chia" << endl;
		cout << "5.So sanh" << endl;
		cout << "6.Cac phep toan logic" << endl;
		cout << "7.Cac phep dich bit" << endl;
		cout << "Nhap lua chon: ";
		int op;
		cin >> op;
		cout << endl;
		if (op == 0)
			break;
		switch (op)
		{
		case 1:
		{
			QInt  y, z;
			cout << "Nhap x:" << endl;
			inPut(x);
			cout << "Nhap y:" << endl;
			inPut(y);
			z = x + y;
			cout << endl;
			cout <<"Ket qua x+y" << endl;
			outPut(z);
			cout << endl;
		}
		break;
		case 2:
		{
			QInt  y, z;
			cout << "Nhap x:" << endl;
			inPut(x);
			cout << "Nhap y:" << endl;
			inPut(y);
			z = x - y;
			cout << "Ket qua x-y" << endl;
			outPut(z);
			cout << endl;
		}
		break;
		case 3:
		{
			QInt  y, z;
			cout << "Nhap x:" << endl;
			inPut(x);
			cout << "Nhap y:" << endl;
			inPut(y);
			z = z * y;
			cout << endl;
			cout << "Ket qua x*y" << endl;
			outPut(z);
			cout << endl;
		}
		break;
		case 4:
		{
			QInt  y, z;
			cout << "Nhap x:" << endl;
			inPut(x);
			cout << "Nhap y:" << endl;
			inPut(y);
			z = x / y;
			cout << endl;
			cout << "Ket qua x/y" << endl;
			outPut(z);
			cout << endl;
		}
		break;
		case 5:
		{
			QInt  y;
			cout << "Nhap x:" << endl;
			inPut(x);
			cout << "Nhap y:" << endl;
			inPut(y);
			cout << endl;
			if (x > y)
				cout << "x lon hon y";
			else
				if (x < y)
					cout << "x be hon y";
				else
					cout << "x bang y";
			cout << endl;
		}
		break;
		case 6:
		{
			
		}
		break;
		case 7:
		{
			shiftBit();
			system("CLS");
			goto Loop;
		}
		break; 
		default:
			break;
		}
	}
}
void Calculator::shiftBit(){
	while (1) {
		system("CLS");
		cout << "0.Exit" << endl;
		cout << "1.Phep dich phai" << endl;
		cout << "2.Phep dich trai" << endl;
		cout << "3.Phep xoay phai" << endl;
		cout << "4.Phep xoay trai" << endl;
		cout << "Nhap lua chon: " << endl;
		int op;
		cin >> op;
		cout << endl;
		if (op == 0)
			break;
		switch (op)
		{
		case 1:
		{
			cout << "Nhap x:" << endl;
			cout << "Nhap so bit can dich:";
			int bit;
			cin >> bit;
			x = x >> bit;
			cout << endl;
			cout << "Ket qua x>>"+to_string(bit)+":"<< endl;
			outPut(x);
			cout << endl;
		}
		break;
		case 2:
		{
			cout << "Nhap x:" << endl;
			cout << "Nhap so bit can dich:";
			int bit;
			cin >> bit;
			x = x << bit;
			cout << endl;
			cout << "Ket qua x<<" + to_string(bit) + ":" << endl;
			outPut(x);
			cout << endl;
		}
		break;
		case 3:
		{
			cout << "Nhap x:" << endl;
			cout << "Nhap so bit can xoay:";
			int bit;
			cin >> bit;
			x = ror(x, bit);
			cout << endl;
			cout << "Ket qua x rol " + to_string(bit) + ":" << endl;
			outPut(x);
			cout << endl;
		}
		break;
		case 4:
		{
			cout << "Nhap x:" << endl;
			cout << "Nhap so bit can xoay:";
			int bit;
			cin >> bit;
			x = rol(x, bit);
			cout << endl;
			cout << "Ket qua x rol " + to_string(bit) + ":" << endl;
			outPut(x);
			cout << endl;
		}
		break;
		default:
			break;
		}
	}

}
void Calculator::logicOperator(){
	while (1) {
		system("CLS");
		cout << "0.Exit" << endl;
		cout << "1.Phep AND" << endl;
		cout << "2.Phep OR" << endl;
		cout << "3.Phep XOR" << endl;
		cout << "4.Phep NOT" << endl;
		cout << "Nhap lua chon: " << endl;
		int op;
		cin >> op;
		if (op == 0)
			break;
		switch (op)
		{
		case 1:
		{
			QInt  y,z;
			cout << "Nhap x:" << endl;
			inPut(x);
			cout << "Nhap y:" << endl;
			inPut(y);
			z = x & y;
			cout << "Ket qua x AND y:" << endl;
			outPut(z);
		}
		break;
		case 2:
		{
			QInt  y, z;
			cout << "Nhap x:" << endl;
			inPut(x);
			cout << "Nhap y:" << endl;
			inPut(y);
			z = x | y;
			cout << "Ket qua x OR y:" << endl;
			outPut(z);
		}
		break;
		case 3:
		{
			QInt  y, z;
			cout << "Nhap x:" << endl;
			inPut(x);
			cout << "Nhap y:" << endl;
			inPut(y);
			z = x | y;
			cout << "Ket qua x XOR y:" << endl;
			outPut(z);
		}
		break;
		case 4:
		{
			cout << "Nhap x:" << endl;
			x = ~x;
			cout << "Ket qua NOT x:" << endl;
			outPut(x);
		}
		break;
		default:
			break;
		}
	}
}