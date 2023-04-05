# Explanation 

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


