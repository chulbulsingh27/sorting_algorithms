/*
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
It is stable and inplace sorting algorithm

Characteristics of Insertion Sort:

This algorithm is one of the simplest algorithm with simple implementation
Basically, Insertion sort is efficient for small data values
Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.
*/

#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[6] = {12,5,4,2,-5,-12};
    insertionSort(arr,6);
    for(int i=0;i<6;i++) cout<<"sorted array is :"<<arr[i]<<" "<<endl;
    return 0;
}
