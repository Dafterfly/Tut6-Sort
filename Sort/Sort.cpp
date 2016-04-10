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
			if (arr[i] < arr[j])
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
	float floatArr[5] = { 5.3, 2.2, 7.1, 1.4, 8.0 };

	// sort arrays:
	sort(strArr, 5);
	sort(intArr, 5);
	sort(floatArr, 5);

	int i;

	// Testing printouts
	cout << "Testing string sort:" << endl;
	for (i = 0; i < 5; i++) 
	{
		cout << strArr[i] << endl;
	}
	cout << endl << endl;

	cout << "Testing int sort:" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << intArr[i] << endl;
	}
	cout << endl << endl;

	cout << "Testing float sort:" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << floatArr[i] << endl;
	}
	cout << endl << endl;
}