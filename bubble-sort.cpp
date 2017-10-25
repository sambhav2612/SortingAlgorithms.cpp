# include "includeAll.h"
using namespace std;

void sort (int array[], int size) {
	/*this function will compare all elements one by one to all the elements after it.
	If this element is greater than other element then they both are swapped*/
	for (int i = 0; i < size-1; ++i) {
		for (int j = i+1; j < size; ++j) {
				if (array[i] > array[j]) {
					swap (&array[i], &array[j]);
			}
		}
		/* here we check the array after each modification*/
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
	
	sort (array, size);//here array is sorted by sort() function
	
	cout << endl << "Array after sorting: " << endl;
	for (int i = 0; i < size; ++i)
		cout << array[i];
	
	return 0;
	
}
