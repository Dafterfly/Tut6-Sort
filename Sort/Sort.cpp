#include <iostream> 
#include <cstdio> 
#include <cmath> 
#include <ctime> 
#include <string> 


using namespace std;

template <typename T>
void sort(T arr[], int len)   // sorts an array gven array and length
{
	T temp;
	for (int i = 0; i < len - 1; i++)  // sorting loop
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr1[i] < arr1[j])
			{
				// Swapping
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}