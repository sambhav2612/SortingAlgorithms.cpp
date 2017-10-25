# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <cmath>
# include <cstring>
# include <vector>

int swap (int* a, int* b) {
	int temp = *a;

	*a = *b;
	*b = temp;
	
	return *a, *b;
}
