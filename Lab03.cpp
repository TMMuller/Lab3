// Lab03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;
/////////////////////////////L3.P2/////////////////////////////////
void float_factorial_function(long n) {
	float product(1);
	for (long i = 1; i <= n; i++)
	{
		product = product * i;
	}
	cout << "The product of " << n << "! for product type float is " << product << endl;

}

void double_factorial_function(long n) {
	double product(1);
	for (long i = 1; i <= n; i++)
	{
		product = product * i;
	}
	cout << "The product of " << n << "! for product type double is " << product << endl;

}
////////////////////////////L3.P3////////////////////////////////////////
void f(long n) {
	float sum(0.0);
	for (long i = n; i!=0 ; i--)
	{
		sum +=  1/i;
	}
	cout << "The value of n is : " << n << endl;
	cout << "The sum of 1/n is : " << sum << endl;
}



int main()
{

	////////////////L3.P1////////////////////////////
	short sum(0);
	int n(257);
	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	cout << "Here is the value of the sum of n : " << sum << endl;
	cout << "Here is the value of n : " << n << endl;
	cout << endl;


	long long_sum(0);
	long long_n(65536);
	for (long i = 1; i <= long_n; i++) {
		long_sum += i;
	}
	cout << "Here is the value of the long sum of n : " << long_sum << endl;
	cout << "Here is the value of the long n : " << long_n << endl;
	cout << endl;
	/////////////////////////////L3.P2/////////////////////////////////
	for (long i = 25; i <= 37; i++) {
		float_factorial_function(i);
	}
	cout << endl << endl;

	for (long i = 160; i <= 174; i++) {
		double_factorial_function(i);
	}

	cout << endl << endl;

	////////////////////////////L3.P3////////////////////////////////////////
	f(10);

	cout << endl << endl;
	///////////////////////////L4.P4//////////////////////////////////////
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}


    return 0;
}

