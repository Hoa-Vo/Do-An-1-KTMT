#pragma once
#include<iostream>
#include<string>
#include"Float.h"

using namespace std;
class QFloat
{
	int data[4];
public:

	// Khoi tao
	QFloat();
	friend istream& ScanQFloat(istream& inDev, QFloat& x, int type, string s);
	friend ostream& PrintQFloat(ostream& outDev, QFloat& x, int type);
	//hàm người dùng nhập
	friend void userInputFloat(QFloat&x,int type,string s);
	//Hàm xuất cho người dùng
	friend void userOutputFloat(QFloat&x,int type);
	void stringToQFloat(string s);
	string QFloatToStrDec();
	string decToBin(string s);
	string binToDec(string s);

	// Ham ho tro
	void setBit(int& x, int i);
	int getBit(int x, int i);
	string toBit(string s, int& exp);
	string strDiv2(string s);
	string toBin(string s);
	string mulFracByTwo(string s);
	bool isZero();
	bool isInf();
	bool isNaN();
	bool isZeroStr(string s);
};
