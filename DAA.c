// THE PSEUDOCODE-------
// First create a function that takes two arguments that is an array containing numbers
// and a variable called size that contains the number of elements in the array
// The function proceeds to set the element in index[0] as the maximum element
// Then create a for loop to iterate through the array starting from the value in index[1].
// With each iteration compare the current element with the maximum element. If the current element is greater it is set as the new maximum.
// This is repeated for every element of the array and when the for loop is complete, it returns the final maximum element


// THE CODE------

#include <stdio.h>

int FindMaxElement(int arr[], int size) {

	int MaxElement = arr[0];

	for(int i = 1; i < size; i++) {
		if(arr[i] > MaxElement) {
			MaxElement = arr[i];
		}
	}
	return MaxElement;
}

int main() {

	int arr[] = {1,2,3,4,5};
	
	int size = sizeof(arr) / sizeof(arr[0]);

	int maximum = FindMaxElement(arr, size);
	
    
    	printf("The maximum element is %d",maximum);
    

	return 0;
}
