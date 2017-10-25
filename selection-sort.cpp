# include "includeAll.h"
using namespace std;
/*selection-sort is inplace comparison based sortinng algorithm.
In this array is divided into parts. sorted part on left and unsorted on left.
At begin of sort() function sorted part is empty and complete array is taken as unsorted part*/
void sort (int array[], int size) {
	/*in this function minIndex is set to 0 and now we compare all the other elements to 
	the element at position minIndex. if it is less than the element at position minIndex , swap them.
	Now sorted part has one element*/
	/* now we do iteration untill there is no element in unsorted part*/
	int minIndex = 0;
	
	for (int i = 0; i < size-1; ++i) {
		minIndex = i;
		for (int j = i+1; j < size; ++j) {
			if (array[minIndex] > array[j])
				minIndex = j;
		}
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
		
	sort (array, size);
	
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
		
	return 0;
	
}
