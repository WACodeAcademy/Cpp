#include <iostream>
#include "function.h"

using namespace std;

void display()
{
	//out put the string 
	cout << "Hello from display" << endl;
}

void dis(int a, int b)
{
	//output a+b (the parameters passed to the function)
	cout << a+b << endl;
}

int multi(int a, int b)
{
	return a * b;
}

void default_func(int x, int y, int z)
{
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	cout << "z is " << z << endl;
}
