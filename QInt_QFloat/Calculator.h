#pragma once
#include"QInt.h"
#include"QFloat.h"
class Calculator
{
	QInt x;
	QFloat y;
public:
	//Nhập QInt//
	void inPut(QInt&x);
	//Xuất QInt tất cả hệ
	void outPut(QInt&y);
	//Chạy máy tính
	void run();
	//Xử lý tính toán
	void calculate();
	//Xử lý đổi hệ
	void transUnit();
	//Xử lý xoay và dịch bit
	void shiftBit();
	//Xử lý các phép toán logic
	void logicOperator();
}; 

