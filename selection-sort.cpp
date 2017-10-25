# include "includeAll.h"
using namespace std;

void sort (int array[], int size) {
	
	int minIndex = 0;
	// moving the boundary one by one of unsorted subarray
	for (int i = 0; i < size-1; ++i) {
		 // Finding the minimum element in unsorted array
		minIndex = i;
		for (int j = i+1; j < size; ++j) {
			if (array[minIndex] > array[j])
				minIndex = j;
		}
		// Swap the smallest found element with the ith element
		swap (&array[minIndex], &array[i]);
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
	// Calling the selection sort function the sort the given array 	
	sort (array, size);
	
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
		
	return 0;
	
}
