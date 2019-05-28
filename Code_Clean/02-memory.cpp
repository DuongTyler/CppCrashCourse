#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>	
using namespace std;

int main()
{
	int *a;			
	a = new int;
	*a = 8;			
	
	int *b = a;
	*b = 5;			

	printf("%d\n", *a);	

	printf("a's pointer: %p\n", a);
	printf("b's pointer: %p\n", b);

	printf("size of an int: %d\n", sizeof(int));	

	delete a;

	int *c = new int;
	*c = 10;		

	a = new int;		
	*a = 8;			

	cout << *b << endl;	
	
	printf("b's pointer: %p\n", b);
	printf("c's pointer: %p\n", c);
	printf("a's pointer: %p\n", a);


	delete c;		
	delete a;

	return 0;
}
