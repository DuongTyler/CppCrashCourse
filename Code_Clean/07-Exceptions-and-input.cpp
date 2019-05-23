#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int x;
	string y;	
	
	cout << "Please enter a # followed by a string" << endl;
	cin >> x;
	cin >> y;
	
	cout << "Your Number: " << x << endl << "Your String: " << y << endl;

	char cstr[20];
	printf("input a #, then a string\n");
	scanf("%d",&x);		
	scanf("%s",&cstr);	
	printf("Your Number: %d\nYour String: %s\n",x, cstr);	

	try{
		int a = 10;
		int b = 1;
		printf("Enter >10 for an exception, 0 for a division by zero err, or some other number\n");
		cin >> b;
		if ( a < b )	throw b;

		if (b == 0)	throw std::invalid_argument("b is zero");
		a = a/b;	
	}
	catch (int e)
	{
		cout << "Exception number " << e << " occurred" << endl;
	}
	catch (const std::invalid_argument &e)
	{
		cout << e.what() << endl;
	}

	return 0;
}
