#include <iostream> 
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

template <typename T>
void print(T arr[], int len) // Prints an array given an array and it's length
{
	int i;
	for (i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl << endl;
}

int main()
{
	// Make different arrays:
	string strArr[5] = { "Thomas", "Guy-Man", "Anderson", "Michael", "Joachim" };
	int intArr[5] = { 6, 9, 2, 4, 3 };
	float floatArr[5] = { 5.3, 2.2, 7.1, 1.4, 8.0 };

	// Testing print template
	cout << "Printing string array:" << endl;
	print(strArr, 5);

	cout << "Printing int array:" << endl;
	print(intArr, 5);

	cout << "Printing float array:" << endl;
	print(floatArr, 5);

	// sort arrays:
	sort(strArr, 5);
	sort(intArr, 5);
	sort(floatArr, 5);

	int i;

	// Testing printouts
	cout << "Testing string sort:" << endl;
	print(strArr, 5);

	cout << "Testing int sort:" << endl;
	print(intArr, 5);

	cout << "Testing float sort:" << endl;
	print(floatArr, 5);
}