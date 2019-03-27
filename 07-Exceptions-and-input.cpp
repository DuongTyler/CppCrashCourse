/*
 * IN THIS LESSON:
 * 	Exceptions
 * 	Getting input from the console
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	//in c++, we can get input from the console by using cin or fgets()
	//fgets() is a pain in the @$$ so we won't be using it.		- from C
	//scanf() also works, but again, cin is easier			- from C
	int x;
	string y;	
	
	cout << "Please enter a # followed by a string" << endl;
	cin >> x;
	cin >> y;	//thank you cin for being easy to use.
	
	cout << "Your Number: " << x << endl << "Your String: " << y << endl;

	//                     ___
	//                    /  _|
	//                    | |
	// ___  ___ __ _ _ __ | |_
	/// __|/ __/ _` | '_ \|  _|
	//\__ \ (_| (_| | | | | |
	//|___/\___\__/_|_| |_|_|
	
	char cstr[20];
	printf("input a #, then a string\n");
	scanf("%d",&x);		//puts decimal input format to address at x
	scanf("%s",&cstr);	//puts char array into cstring
	printf("Your Number: %d\nYour String: %s\n",x, cstr);	//prints it

	//So, now that we have user input, Lets handle errors.
	//When using try catch, be careful not to leak memory.
	//Using try catch is probably where your memory leaks if you allocate memory here.
	try{
		int a = 10;
		int b = 1;
		printf("Enter >10 for an exception, 0 for a division by zero err, or some other number\n");
		cin >> b;
		if ( a < b )	throw b;
		//we can throw custom error codes in case something goes wrong

		if (b == 0)	throw std::invalid_argument("b is zero");
		//this will throw div by zero error if we div by zero. Make sure we catch above
		a = a/b;	
	}
	catch (int e)
	{
		cout << "Exception number " << e << " occurred" << endl;
	}
	catch (const std::invalid_argument &e)
	{
		cout << e.what() << endl;
		//this line tells the computer to print "what" it is that was thrown
	}


	return 0;
}
