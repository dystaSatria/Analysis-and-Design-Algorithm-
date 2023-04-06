# Explanation ( Descending Heap Sort  )

Lets make main Function in C 
```cpp
int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
   	int n = sizeof(arr) / sizeof(arr[0]);
   	
   	
   	printf("The original array :");
   	for(int i=0; i < n; i++)
   		printf("%d ,",arr[i]);//its make like "12,11,blablabla" if u just %d it's just like "1211blabla"
	printf("\n");   
	
	printf(" Sorted by heap sort algorithm : ")
	heapSort(arr,n)
	for(int i=0;i < n; i++)
		printf("%d ,",arr[i]);//its make like "12,11,blablabla" if u just %d it's just like "1211blabla"
	printf("\n");
		
}

```

After that we make function the heapSort to performs the Heap Sort algorithm on the array to sort it in ascending order.
We make 2 loops :
* First loop is for initializes the heap by calling the heapify function on all non-leaf nodes of the heap. It starts from the last non-leaf node and goes up to the root node. What is the ```non-leaf nodes```?
 
Lets say we have it
```
      10
     /  \
    8   12
   / \
  3   9


```
Non-leaf nodes are ```10 , 8```.

Nodes are ``` 3, 9, 12 ```.
This loop ensures if the element at the current node is greater than its children, which maintains the heap property.

First loop code :
```cpp
for (int i= n/2 -1 ;i >=0;i-- )
		heapify(arr, n, i) 
```
* Second loop swaps the root node with the last element of the heap and then calls heapify on the remaining heap to restore the heap property. The loop starts from the end of the array and goes down to the first element, ensuring that the largest element is moved to the end of the array in each iteration. The temporary variable ```swap``` is used to swap elements during the sorting process. In each iteration of the second loop, the largest element is moved to the end of the array and the heap size is reduced by 1, as the last element is already sorted.

```cpp
for (int i = n - 1; i >= 0; i--){
		int swap = arr[0];//make temp varieble to swaps
		arr[0] = arr[i];
		arr[i] = swap
		heap(arr,n,i)
	}
```
*tips extra for ascending pattern:
```cpp
for (int i = n - 1; i >= 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heap(arr, i, 0);
    }
```

So the final heapSort function is 
```cpp
void heapSort(int arr[], int n){
	
	for (int i= n/2 -1 ;i >=0;i-- )
		heap(arr, n, i) 
	
	for (int i = n - 1; i >= 0; i--){
		int swap = arr[0];//make temp varieble to swaps
		arr[0] = arr[i];
		arr[i] = swap
		heap(arr,n,i)
	}
	
}
```


