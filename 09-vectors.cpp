/*
 * IN THIS LESSON:
 * 	An example of how to use the arraylist equivalent vector in c++
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//New Include statement for vectors
#include <vector>


class Test
{
	public:
		Test()
		{
			a = 10;
		}
		int a = 0;
};

int main()
{

	//declaring a vector of ints
	std::vector<int> arr;
	//add an element to the vector
	arr.push_back(2);	//equivalent of .add() in java
	arr.push_back(3);	//equivalent of .add() in java
	
	arr.pop_back();		//deletes the last element added
	

	arr.insert(arr.begin() + 0,4);	//insert a value of 4 at index 0
	//the arr.begin() is necessary to point to the beginning of the vector
	
	arr.erase(arr.begin() + 0);	//erases the first element in the vector

	for (int i = 0; i < arr.size(); i++)
		printf("%d ", arr[i]);	//how to print the vector

	//vector is on the stack so we don't have to use the delete operator
	printf("\n");


	//you can also store classes in normal arrays.
	printf("Normal Array: ");
	Test test[] = {Test(), Test()};
	for (int i = 0; i < 2; i++)
		printf("%d ", test[i]);
	printf("\n");

	//PRACTICE: 
	//	-- create a class that holds an x and y coordinate
	//	-- create a vector of 10 points


	return 0;
}
