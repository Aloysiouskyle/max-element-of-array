// Linear search Algorithm to generate maximum element in an array
#include <stdio.h>

int main() {
	int n, i, max; // n = number of elements, i = loop counter, max = maximum value
	printf("Enter the number of elements: "); // Prompt user for array size
	scanf("%d", &n); // Read array size
	int arr[n]; // Declare array of size n
	printf("Enter %d elements:\n", n); // Prompt user to enter array elements
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]); // Read each element into array
	}
	max = arr[0]; // Assume first element is the maximum
	for(i = 1; i < n; i++) {
		if(arr[i] > max) { // If current element is greater than max
			max = arr[i]; // Update max
		}
	}
	printf("Maximum element = %d\n", max); // Print the maximum element
	return 0; // End of program
}