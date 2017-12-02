/* A test program to test the addition function of the calculator object 
Uses cassert 
*/ 

#include<iostream>
#include "Calculator.cpp"
#include <cassert>

int main()
{
	Calculator c;  // Creating a calculator object 
	
	// test lower limit of the result 
	{ 
	int sum=c.sum(0,0); // test 
	assert(sum==0);
	} 

	// test something in the middle 
	{
		int sum=c.sum(10010,20020); 
		assert(sum==30030); 
	}

	// test the top limit 
	{
		int sum=c.sum(2147483645,2); 
		assert(sum==2147483647); 
	}
	
}
