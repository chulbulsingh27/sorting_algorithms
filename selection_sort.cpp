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
