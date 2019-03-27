/*
 * IN THIS LESSON:
 * 	Memory, pointers, and memory leaks	
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>	
using namespace std;

int main()
{
	//so, I mentioned that it is easier to mess up in c/c++ with memory leaks. Java has something called a garbage collector that taxes the system of resources while cleaning up after you when you dereference an object.
	//In c++, pointers hold memory addresses. They point to a location in memory. To declare a pointer, you use the * character
	int *a;			//a is declared as a NULL pointer. 
	//printf("%d", *a); //uncomment for fun things to happen
	
	a = new int;		//this allocates a space in memory the size of an int. a now points to an int. Remember, a is a pointer, it now equals the address of an int.
	
	*a = 8;			//we are telling the computer that we want to assign the memory a points to to 8
	
	int *b = a;		//the & operator gives the memory address in hexadecimal.
	*b = 5;			//since b points to the same place in memory as a, if we print a, we get 5
	printf("%d\n", *a);	//this basically prints a decimal (%d) and a newline with the value from a's pointer

	printf("a's pointer: %p\n", a);	//print pointer address
	printf("b's pointer: %p\n", b);	//print pointer address


	//we can also print the size of the value stored in memory in bytes using the sizeof() function
	printf("size of an int: %d\n", sizeof(int));	//4 bytes = 4*8 bits = 32 bits.

	delete a;	// we must deallocate the memory stored in a. Otherwise we will leak memory
			//now b is also dangling, but it's fine. We can reuse a and reallocate it later.
	int *c = new int;
	*c = 10;
	a = new int;
	*a = 8;
	cout << *b << endl;
	delete a;
	delete c;
	//ASSIGNMENT: declare a new String pointer, allocate some memory for a string, and print the value and memory location of the string with printf or cout. Do not leak memory. remember to free the memory.

	return 0;
}
