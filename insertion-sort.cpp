# include "includeAll.h"
using namespace std;
//function for sorting the array using insertion sort algorithm
void sort (int array[], int size) {

	int value = 0, hole = 0;
	for (int i = 1; i < size; ++i) {
		value = array[i];
		hole = i;
		/* Moving elements of arr[0..i-1], that are
          greater than value else coming out of the while loop and storing value to current hole, to one position ahead
          of their current position */
		while (hole >0 & array[hole-1] > value) {
			array[hole] = array[hole-1];
			hole = hole - 1;
		}
		array[hole] = value;
	//Printing the array after each iteration		
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
	//Calling the sort function to sort the array using insertion sort algorithm
	sort (array, size);
	
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
	
	return 0;
	
}
