# include "includeAll.h"
using namespace std;


// "Bubble Sort" Sorting Algorithm Time Complexity O(N^2).
void sort (vector<int>& listOfElements) {

	for (int i = 0; i < listOfElements.size()-1; ++i) {
		for (int j = i+1; j < listOfElements.size(); ++j) {
            // If the element in the pos " i " is bigger than the element
            // in the pos " j ", we need to swap them to have the list in
            // an  ASC order, if you wish to sort the list in DESC order change the
            // comparison operator to less than " < "
            if (listOfElements[i] > listOfElements[j]) {
                swap (listOfElements[i], listOfElements[j]);
                }
		}
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
