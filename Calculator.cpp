// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int add(int num1,int num2);
int sub(int num1,int num2);
int divv(int num1,int num2);
int mul(int num1,int num2);

void calc()
{
	int num1, num2;
	char op;

	cout << "enter a number:";
	cin >> num1 >> num2;
	cout << "Enter an operator";
	cin >> op;

	switch(op)
	{
		case '+':
			cout << "Result: " << add(num1, num2);
			break;
		case '-':
			cout << "Result: " << sub(num1, num2);
			break;
		case '/':
			cout << "Result: " << divv(num1, num2);
			break;
		case '*':
			cout << "Result: " << mul(num1, num2);

	}
}

int main()
{
	calc();
	return 0;
}

int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int divv(int num1, int num2) {
	return num1 / num2;
}












