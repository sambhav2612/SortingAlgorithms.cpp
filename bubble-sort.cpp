# include "includeAll.h"
using namespace std;
//function for sorting the array using bubble sort algorithm
void sort (int array[], int size) {    
	
	for (int i = 0; i < size-1; ++i) {
		for (int j = i+1; j < size; ++j) {
				if (array[i] > array[j]) {
					//finding out the smallest of the elements present in the unsorted part of array and storing in the ith index
					swap (&array[i], &array[j]);  
			}
		}
		//printing the array after each iteration where i+1 elements have been sorted
		cout << "Iteration #" << i+1 << ":" ;
		for (int k = 0; k < size; ++k)
			cout << array[k];
		cout << endl;
	}
}

int main () {
	
	int size = 0, array[100] = { 0 };
	
	cout << endl << "Enter Size: ";
	cin >> size;
	
	cout << endl << "Enter elements: " << endl;
	for (int i = 0; i < size; ++i)
		cin >> array[i];

	cout << endl << "Array before sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
	cout << endl;
	//calling the bubble sort function to sort the given array
	sort (array, size);
	
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
	
	return 0;
	
}
