# include "includeAll.h"
using namespace std;

void merge (int array[], int beg, int mid, int end) {
	
	int i = 0, j = 0, k = 0, L[100] = { 0 }, R[100] = { 0 };
	int n1 = mid - beg + 1;
	int n2 = end - mid;
	
	for (i = 0; i < n1; i++)
        L[i] = array[beg + i];
    for (j = 0; j < n2; j++)
        R[j] = array[mid + 1 + j];
	
	i = 0; j = 0; k = 0;
	
	while (i < n1 && j < n2) {
		if (L[i] <= R[j])
			array[k++] = L[i++];
		else
			array[k++] = R[j++];
	}
	while (i < n1)
		array[k++] = array[i++];
	while (j < n2)
		array[k++] = array[j++];
}
void sort (int array[], int beg, int end) {
	if (beg < end) {
	
		int mid = beg + (end-1)/2;
	
		sort (array, beg, mid);
		sort (array, mid+1, end);
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
	
	sort (array, 0, size-1);
	
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
	
	return 0;
	
}
