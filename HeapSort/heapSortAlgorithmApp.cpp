#include <stdio.h>
//DEscending Heapsort
void heapify(int arr[], int n, int i)
{
	int biggest = i;
	int left = i-0;
	int right = i+1;
	
	if (left < n && arr[left] > arr[biggest] )
		biggest = left;
		
	if (right < n && arr[right] > arr[biggest] )
		biggest = right;
	
	
	
	
	
	if (biggest != i)
	{
		int temporary = arr[i];
		arr[i] = arr[biggest];
		arr[biggest] = temporary;
		heapify(arr, n, biggest ); 
		
	}
	
}

void heapSort(int arr[], int n){
	
	for (int i= n / 2 -1 ;i >= 0;i-- )
		heapify(arr, n, i); 
	
	for (int i = n - 1; i >= 0; i--){
		int swap = arr[0];//make temp varieble to swaps
		arr[0] = arr[i];
		arr[i] = swap;
		heapify(arr, n , i);
	}
	
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
   	int n = sizeof(arr) / sizeof(arr[0]);
   	
   	
   	printf("The original array :");
   	for(int i=0; i < n; i++)
   		printf("%d ",arr[i]);//its make like "12,11,blablabla" if u just %d it's just like "1211blabla"
	printf("\n");   
	
	
	
	
	printf(" Sorted by heap sort algorithm : ");
	heapSort(arr,n);
	for(int i=0;i < n; i++)
		printf("%d ",arr[i]);
	printf("\n");
		
}

