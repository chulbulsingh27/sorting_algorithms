/*definition : Selection sort is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm in which 
the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part 
is empty and the unsorted part is the entire list.
The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array.
This process continues moving unsorted array boundary by one element to the right.*/

//This algorithm is not suitable for large data sets as its average and worst case complexities are of Ο(n2), where n is the number of items.
#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int imin = i;
        for(int j = i+1;j<n;j++ ){
            if(arr[imin] > arr[j]) imin = j;
        }
        swap(arr[imin],arr[i]);
    }
}

int main()
{
    int arr[6] = {2,9,1,-3,18,0};
    selectionsort(arr,6);
    for(int i=0;i<6;i++) cout<<"sorted array is :"<<arr[i]<<" "<<endl;
    return 0;
}
