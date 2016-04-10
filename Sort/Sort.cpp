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

int main()
{
	// Make different arrays:
	string strArr[5] = { "Thomas", "Guy-Man", "Anderson", "Michael", "Joachim" };
	int intArr[5] = { 6, 9, 2, 4, 3 };
	float floarArr[5] = { 5.3, 2.2, 7.1, 1.4, 8.0 };



}