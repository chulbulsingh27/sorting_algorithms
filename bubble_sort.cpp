/*definition : Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
This algorithm is not suitable for large data sets as its average and worst case time complexity is quite high.
It is inplace and stable sorting algorithm
Total number of swaps = Total number of comparison
Total number of comparison (Worst case) = n(n-1)/2
Total number of swaps (Worst case) = n(n-1)/2

Where is Bubble sort algorithm used?
Due to its simplicity, bubble sort is often used to introduce the concept of a sorting algorithm. 
In computer graphics, it is popular for its capability to detect a very small error (like a swap of just two elements) 
in almost-sorted arrays and fix it with just linear complexity (2n). 
*/

#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    int arr[6] = {2,9,1,-3,18,0};
    bubbleSort(arr,6);
    for(int i=0;i<6;i++) cout<<"sorted array is :"<<arr[i]<<" "<<endl;
    return 0;
}

The above function always runs O(n^2) time even if the array is sorted.
It can be optimized by stopping the algorithm if the inner loop didn’t cause any swap. 

#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++){
        swapped = false;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) break;
    }
}

int main()
{
    int arr[6] = {2,9,1,-3,18,0};
    bubbleSort(arr,6);
    for(int i=0;i<6;i++) cout<<"sorted array is :"<<arr[i]<<" "<<endl;
    return 0;
}


