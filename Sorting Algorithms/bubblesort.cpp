#include<iostream>

using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

void printArray(int arr[], int size){ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
}
void bubbleSort(int arr[], int n){
    
    bool swapped = true;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            swapped = false;
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false)
            break;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }

    bubbleSort(arr, n);
    printArray(arr, n);
    
    return 0;
}


