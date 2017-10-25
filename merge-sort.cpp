# include "includeAll.h"
using namespace std;

void merge (int array[], int beg, int mid, int end) {
	
	int i = 0, j = 0, k = 0;
        //creating temporary arrays 
	int L[100] = { 0 }, R[100] = { 0 };
	int n1 = mid - beg + 1;
	int n2 = end - mid;
	// Copying data to temporary arrays L[] and R[] 
	for (i = 0; i < n1; i++)
        L[i] = array[beg + i];
    for (j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];
	//Merging the temporary arrays back into array[beg...end]
	i = 0; j = 0; k = 0;
	
	while (i < n1 && j < n2) {
		if (L[i] <= R[j])
			array[k++] = L[i++];
		else
			array[k++] = R[j++];
	}
	//Copying the remaining elements into array
	while (i < n1)
		array[k++] = array[i++];
	while (j < n2)
		array[k++] = array[j++];
}
void sort (int array[], int beg, int end) {
	if (beg < end) {
	
		int mid = beg + (end-1)/2;
		//Sorting first and second halves
		sort (array, beg, mid);
		sort (array, mid+1, end);
		//Merging the sorted arrays
		merge (array, beg, mid, end);
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
	//Calling the sort function to sort the array using merge sort
	sort (array, 0, size-1);
	
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
	
	return 0;
	
}
