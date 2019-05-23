#include <stdio.h>
#include <stdlib.h>
#include <iostream>

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

	std::vector<int> arr;
	arr.push_back(2);
	arr.push_back(3);	
	
	arr.pop_back();		
	

	arr.insert(arr.begin() + 0,4);	
	
	arr.erase(arr.begin() + 0);	

	for (int i = 0; i < arr.size(); i++)
		printf("%d ", arr[i]);	

	printf("\n");

	printf("Normal Array: ");
	Test test[] = {Test(), Test()};
	for (int i = 0; i < 2; i++)
		printf("%d ", test[i]);
	printf("\n");

	return 0;
}
