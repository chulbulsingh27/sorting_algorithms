QuickSort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways. 

Always pick the first element as a pivot.
Always pick the last element as a pivot (implemented below)
Pick a random element as a pivot.
Pick median as the pivot.
  
 QuickSort is an unstable algorithm because we do swapping of elements according to pivot's position (without considering their original positions)
 Quicksort is an in-place sorting algorithm
 
 
 void quickSort(int arr[], int low, int high)
    {
        if(low > high) return;
        int end = partition(arr, low, high);
        quickSort(arr, low, end-1);
        quickSort(arr, end+1, high);
        
    }
    public:
    int partition (int arr[], int low, int high)
    {
        int start = low, end = high;
        int pivot = arr[low];
        while(start < end) {
            while(arr[start] <= pivot) start++;
            while(arr[end] > pivot)  end--;
            if(start < end) {
                /*int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;*/
                swap(arr[start],arr[end]);
            }
        }
        swap(arr[end],arr[low]);
        return end;
        /*int temp = arr[low];
        arr[low] = arr[end];
        arr[end] = temp;
        return end;*/
       // Your code here
    }
