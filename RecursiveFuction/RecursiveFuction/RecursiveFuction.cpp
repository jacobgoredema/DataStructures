// RecursiveFuction.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

void tail(int n) 
{
	if (n == 0) 
		return;
	// we do a certain operation
	cout << "Tail function called with n=" << n << endl;

	// and then call the function recursively: the stack will not store the previous calls
	tail(n - 1);
}

void head(int n)
{
	if (n == 0)
		return;

	// we call the function recursively
	head(n - 1);

	// and then we do the operation: so the stack has to store the previous state(function calls
	cout << "Head function called with n=" << n << endl;
}

int main()
{
	tail(5);

    return 0;
}
