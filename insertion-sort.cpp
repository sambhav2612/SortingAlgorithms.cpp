# include "includeAll.h"
using namespace std;

// "Insertion Sort" Sorting Algorithm Time Complexity O(N^2).
void sort (int *listOfElements, int size) {
    // This sorting method works by doing inplace comparison between it's
    // elements, basically the algorithm Assumes that from index 0 to the hole
    // all elements are sorted, after making this assumption the algorithm
    // compares all the elements from the unsorted subarray to all the elements
    // in the sorted subarray. If the element is found greater than the element
    // in sorted subarray. Insert this element in the sorted subarray and
    // shift all the elements accordingly
	int value = 0, hole = 0;
	for (int i = 1; i < size; ++i) {
		value = listOfElements[i];
		hole = i;

		while (hole > 0 && listOfElements[hole-1] > value) {
			listOfElements[hole] = listOfElements[hole-1];
			hole = hole - 1;
		}
		listOfElements[hole] = value;

    // Print the list with the state of each iteration to simulate the Insertion sort
    // for the user
	cout << "Iteration #" << i+1 << ":" ;
	for (int k = 0; k < size; ++k)
		cout << listOfElements[k];
	cout << endl;
	}
}

int main () {

    // Read and declare size of desired list by user
	int sizeOfList, *listOfElements;
	cout << "Enter Size: " << endl;
	cin >> sizeOfList;

	// Declare vector to save list of elements
	listOfElements = (int *)malloc(sizeOfList * sizeof(int));

	// Receive list elements from the user and save them in the vector
	cout << endl << "Enter elements: " << endl;
	for (int i = 0; i < sizeOfList; ++i)
	  cin >> listOfElements[i];

    // Print the list before sorting for the user
	cout << endl << "Array before sorting: " << endl;
	for (int i = 0; i < sizeOfList; ++i)
		cout << listOfElements[i];
	cout << endl << endl;

	// Sort the elements in the list
	sort (listOfElements, sizeOfList);

	// Print the list after the list has been sorted
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < sizeOfList; ++i)
		cout << listOfElements[i];

	return 0;
}
