#include <iostream>

using namespace std;
void swap(int* i, int* j){
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1, j;

    for(int j = low; j < high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
void quicksort(int arr[], int l, int h){
    if(l<h){
       int pivot = partition(arr, l, h);
       quicksort(arr, l, pivot - 1);
       quicksort(arr, pivot + 1, h);
    }
}

void printArray(int arr[], int size){ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
} 

int main(int argc, char const *argv[])
{
    int n = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0, n-1);
    printArray(arr, n);
    return 0;
}
