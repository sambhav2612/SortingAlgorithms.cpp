# include <iostream>
using namespace std;

int partition (int array[], int start, int end) {
	int pivot = array[end];  //pivot	
	int j = start;         
	
	for (int i = 1; i < end; ++i) {
		/*If current element is smaller than or equal to pivot
                  then increment start and swap*/
		if (array[i] <= pivot) {
			++j;
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		} 
	}
	int temp = array[j+1];
	array[j+1] = array[end];
	array[end] = temp;
	
	return (j+1);
}

//Function that implements quick sort from start to end
void sort (int array[], int start, int end) {
	
	if (start < end) {
		/* index is partitioning index, array[p] is now
           at right place */
		int index = partition (array, start, end);
		/*Separately sort elements before
                partition and after partition*/
		sort (array, start, index-1);
		sort (array, index+1, end);
	}
	
} 

int main () {
	
	int n, array[] = { 5, 4, 3, 2, 1};
	n = sizeof(array)/sizeof(array[0]);
	//Calling the function to sort the array using quick sort algorithm
	sort (array, 0 , n-1);
	
	for (int i = 0; i < n; ++i)
		cout << array[i] << " ";
	
}
