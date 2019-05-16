/*
 * IN THIS LESSON:
 * 	Declaring an int
 * 	Printing to the console
 *
 * Welcome to my c++ crash course. I'll be going over some of the differences between c++ and java.
 *
 * First off, cpp gives you much closer control of memory, which means it is easier to mess up and leak memory.
 *
 * Let's begin with some of the basics:
 */

//these include statements include libraries from the system allowing you to call certain functions.
//It's like import *.* in java
#include <stdio.h>
//stdio is a header that allows for standard input output, much like how System.out.println allows you to output to the terminal. For c++, we use cout << "text" << endl
#include <stdlib.h>
//stdlib is a library that allows for certain functions relating to memory. These libraries are probably the most common headers included in c++
#include <iostream>
//this is the c++ input output for cout and cin

using namespace std;
//we are taking a shortcut by using the standard namespace, meaning that we don't have to declare cout as std::cout each time. This is generally regarded as bad practice by the programming community but for now it is alright.

int main()	//unlike java, C++ starts in a function called 'main,' not inside a class.
{		//you see that we declare 'main' as an 'int.' I'll explain this later

	//Let's declare two ints to two different values
	int a = 20, b = 30;
	//now let's print a, and add a and b together.
	cout << "a: " << a << "\nb: " << b << "\na+b: " << b + a << endl;
	//if you notice something, we can see that the '<<' concatenates the arguments before and after it (like the + operator)
	//you can use '\n' (like java) for newline instead of 'endl' if you wish. Endl stands for end line
	//for those that like the good old way of printing, you can use the 'stdio printf' function
	printf("this came from printf\n");

	return 0;
	// it is standard in c++ that we return 0, indicating that we have run successfully. Otherwise we can return another status code, but don't worry about that for now.
	
	//PRACTICE: comment out the code above and write a program that prints "Hello, world!", and declares two ints, with values of 2 and 4, multiplies them, and prints the result.
}
