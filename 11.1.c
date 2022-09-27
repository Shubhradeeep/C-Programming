#include <stdio.h>

int main() {
	
	int n, i, arr[100], sm_index, lg_index;
	
	read(arr, &n);
	
	smallest(arr, n, &sm_index);
	
	largest(arr, n, &lg_index);
	
	interchange(arr, n, sm_index, lg_index);
	
	display(arr, n);
	
	return 0;
}

int read(int array[100], int *len) {
	
	int i;
	
	printf("Enter the length of the array: ");
	scanf("%d", len);
	
	printf("Enter the numbers of the array: \n");
	for(i=0; i<*len; i++) {
		scanf("%d", &array[i]);
	}

	return 0;
}

int smallest(int array[100], int len, int *ind) {
	int i, smallest = 100000;
	
	for(i=0; i<len; i++) {
		if (array[i] < smallest) {
			smallest = array[i];
			*ind = i;
		}
	}
	return 0;
}

int largest(int array[100], int len, int *ind) {
	
	int i, largest = -100000;
	
	for(i=0; i<len; i++) {
		if (array[i] > largest) {
			largest = array[i];
			*ind = i;
		}
	}
	
	return 0;
}

int interchange(int array[100], int len, int small, int large) {
	
	int temp;
	
	temp = array[small];
	array[small] = array[large];
	array[large] = temp;
	
	return 0;
}

int display(int array[100], int len) {
	int i;
	
	for(i=0; i<len; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
