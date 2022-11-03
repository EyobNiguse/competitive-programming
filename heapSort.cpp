//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    void swap(int *a, int *b)
{
  
      int tmp = *a;
      *a = *b;
      *b = tmp;
};
public:
int swapCount = 0;
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        int N = n;
      // Your Code Here
 int largest = i; // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2
 
    // If left child is larger than root
    if (l < N && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest so far
    if (r < N && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
        
    }
     // 1 2 3 4
      
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    int initial = (n/2)-1;

     
     for(int i= initial; i >=0;i--){
        heapify(arr, n, i);
    
      }
      
   
    
    // Your Code Here
    }
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    { 
         
           buildHeap(arr,n);
           for(int i=n-1;i>=0;i--){
               swap(&arr[0],&arr[i]);
               heapify(arr,i,0);
           }

    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends
