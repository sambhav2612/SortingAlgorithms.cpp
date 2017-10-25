# include "includeAll.h"
using namespace std;

// "Selection Sort" Sorting Algorithm Time Complexity O(N^2).
void sort (vector<int>& listOfElements) {
	// The selection sort algorithm divides the list into two parts
	// the subarray of already sorted elements which is built from left
	// to right the sorted sublist is empty and the unsorted list is the entire list
	// the algorithms finds the smallest element in the unordered subarray and swaps
	// it wit the left most element in the array and then moves the subarray boundry
	// one element to the right

	// Select the minimun index in the sorted subarray
	int minIndex = 0;

	// Advance the position of the last item in the sorted subarray
	// through the entire array
	for (int i = 0; i < listOfElements.size()-1; ++i) {
		// We assume the min element is the first element
		minIndex = i;

		// Find the min element by testing elemens after i
		// in the unsorted subarray
		for (int j = i+1; j < listOfElements.size(); ++j) {
			// If the element is less, then it should become the new minimun
			if (listOfElements[minIndex] > listOfElements[j])
				minIndex = j;
		}
		swap (listOfElements[minIndex], listOfElements[i]);

		// Print the list with the state of each iteration to simulate the bubble sort
		// For the user
		cout << "Iteration #" << i+1 << ":" ;
		for (int k = 0; k < listOfElements.size(); ++k)
			cout << listOfElements[k];
		cout << endl;
	}
}


int main () {


	// Read and declare size of desired list by user
	int sizeOfList;
	cout << "Enter Size: " << endl;
	cin >> sizeOfList;

	// Declare vector to save list of elements
	vector<int> listOfElements(sizeOfList);

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
	sort (listOfElements);

	// Print the list after the list has been sorted
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < listOfElements.size(); ++i)
		cout << listOfElements[i];

	return 0;

}
