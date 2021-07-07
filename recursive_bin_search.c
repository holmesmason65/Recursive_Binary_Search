#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x){
	if(right >= 1){
		int mid = left + (right - 1) / 2; 
		// if the element is at the middle
		if(arr[mid] == x)
			return mid; 
		// if the element is smaller than mid, the
		// it can only be present in the left subarray 
		if(arr[mid] > x)
			return (arr, left, mid - 1, x); 
		return binarySearch(arr, mid + 1, right, x);
	}
	return -1; 
}

int main(void){
	int arr[] = {2, 3, 4, 10, 40};
	int n = sizeof(arr) / sizeof(arr[0]); 
	//printf("n = %d", n);
	int x = 10; 
	int result = binarySearch(arr, 0, n - 1, x);
        (result == -1) ? printf("Element is not in the array")
		       : printf("Element is present at index %d", result);	
	return 0;
}
