#include <stdio.h>

// Function to left rotate an array by one position
void leftRotateByOne(int arr[], int n)
{
	int first = arr[0];
	for (int i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];

	arr[n-1] = first;
}

// Function to left rotate an array by r positions
void leftRotate(long int arr[], int r, int n)
{
	for (int i = 0; i < r; i++)
		leftRotateByOne(arr, n);
}

// main function
int main(void)
{
	int arr[100],n;
	int r;
size_t i;
scanf("%d",&n);
scanf("%d",&r);
	for (int i = 0; i < n; i++){
scanf("%d",&arr[i]);}


	leftRotate(arr, r, n);

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
