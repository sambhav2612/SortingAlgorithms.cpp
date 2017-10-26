# include "includeAll.h"
using namespace std;

//Merge sort algorithm has a complexity of O(nlogn)
void merge (int array[], int beg, int mid, int end) {
	
	int i = 0, j = 0, k = 0, L[100] = { 0 }, R[100] = { 0 };
	int n1 = mid - beg + 1;
	int n2 = end - mid;
	
	//Initial array is divided into 2 halves. Left array 'L' and right array 'R'.
	for (i = 0; i < n1; i++)
        L[i] = array[beg + i];
    for (j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];
	
	i = 0; j = 0; k = 0;
	
	/* Compare elements of L and R, now when sorting in ascending order, 
	all elements on the left half must be lesser than all elements on the right half.
	So, the smaller of the two, L[i] and R[i] is updated in the main array. 
	*/
	while (i < n1 && j < n2) {
		if (L[i] <= R[j])
			array[k++] = L[i++];
		else
			array[k++] = R[j++];
	}
	/* Since L and R are not incremented equally in the previous while loop,
	there may be some elements remaining in either L or R. These are just appended directly to the main array.
	*/
	while (i < n1)
		array[k++] = array[i++];
	while (j < n2)
		array[k++] = array[j++];
}

/*This function is used to get the mid-point of the array, and to recursively call the function,
so that the array is recursively divided, so as to make the computation in merge function very less.
Array is divided till beg<end, that is, till only 2 elements is remaining in each divided array.
*/
void sort (int array[], int beg, int end) {
	if (beg < end) {
	
		int mid = beg + (end-1)/2;
	
		sort (array, beg, mid);
		sort (array, mid+1, end);
		merge (array, beg, mid, end);
	}
}

//This function is to get the original array to be sorted, by the user and then print the final sorted array.
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
	
	sort (array, 0, size-1);
	
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
	
	return 0;
	
}
