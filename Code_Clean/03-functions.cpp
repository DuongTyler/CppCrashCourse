/*
 * IN THIS LESSON:
 * 	functions
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>	


#include <cstdlib>	//this library allows us to generate random numbers


using namespace std;

//so, we know that java has methods. Well, we have those as functions in c++, this is how they are declared.
//just like in java, the function returns the value it is declared as. a = 0 and b = 0 are default args if you do not pass in anything. You can overload functions too.
int add(int a = 0, int b = 0)	
{
	return a+b;
}

void changePtrVal(int *a, int b)	//this passes a value by reference. see main.
{
	*a = b;	//replaces a's value with b
}

int main()
{
	printf("add: %d\n", add(2,2));	//returns 4

	//you can use modulus to return a random number within a range.
	//There is a function called srand() which generates a seeded random value.
	//for true random numbers, you can include <ctime> and use time() as an arg for srand.
	printf("random: %d\n", (rand()%10));		
 
 	
	//we can also pass by reference.
	int x = 10; 
	changePtrVal(&x, 100);	//passes x by its memory address
	printf("x: %d\n", x);


	return 0;
}
