#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <string>

int main()
{
	int a = 1;
	double b= 1.0;
	float c = 1.0f;
	char d = 'a';
	bool e = true;
	std::string str = "";	
	int arr[] = {0,1,2,3};

	if (str == str)		printf("str does indeed equal str\n");

	std::cout<< "Cast 1.5 to an int: "<< (int)1.5 << std::endl;

	return 0;
}
