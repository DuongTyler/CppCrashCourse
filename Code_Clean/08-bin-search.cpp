#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int binSearch(int arr[], int val, int low, int high)
{
	int mid = low + (high - low) / 2;
	if (low > high)			return -1;
	if ( arr[mid] > val )		return binSearch(arr, val, low, mid-1);
	if ( arr[mid] < val )		return binSearch(arr, val, mid+1, high);
	else				return mid;
}

int main()
{
	int arr[] = {1,4,7,8,9,15,29,40,47,56,69,82,99,100};
	int searchfor;
	printf("{1,4,7,8,9,15,29,40,47,56,69,82,99,100};\nEnter a number to search: ");
	cin >> searchfor;
	int res = binSearch( arr, searchfor, 0, sizeof(arr)/4);
	if (res != -1)	
		printf("Found %d at index %d\n", searchfor, res);
	else
		printf("Could not find value %d\n", searchfor);
}
