//now that you have written your first program, let's get a bit more complicated
/*
 * IN THIS LESSON:	
 * 	Datatypes
 * 	arrays
 * 	Getting input
 * 	Conditionals
 * 	For loops
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <string>	//String is another library you must include for strings.

int main()
{
	//just like in java, we have datatypes named just the same
	int a = 1;
	double b= 1.0;
	float c = 1.0f;
	char d = 'a';
	bool e = true;
	std::string str = "";	// this is what I was talking about when I said that not including "using namespace std;" would make us do. removing the 'std::' and adding 'using namespace std' at the top would have the same effect.
	//and we can have arrays (of any datatype)
	int arr[] = {0,1,2,3};

	//for loops work the same way as in java, same as if statements. However, strings are different. There is no String.equals() function, Instead, in c++, you can just use the == operator
	if (str == str)		printf("str does indeed equal str\n");
	
	//ASSIGNMENT: so, now that we know how to compare things, loop through the array 'arr' and only print odd numbers. You can use cout or printf().

	return 0;
}
