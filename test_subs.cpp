/* A test program to test the addition function of the calculator object 
Uses cassert 
*/ 

#include<iostream>
#include "calculator.cpp"
#include <cassert>

int main()
{
	Calculator c;  // Creating a calculator object 
	
	// test lower limit of the result 
	{ 
	int diff=c.subs(10,0); // test 
	assert(diff==10);
	} 

	// test something in the middle 
	{
		int diff=c.subs(30030,20020); 
		assert(diff==10010); 
	}

	// test the top limit 
	{
		int diff=c.subs(2147483647,2); 
		assert(diff==2147483645); 
	}
	
}
