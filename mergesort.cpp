#include<iostream>

using namespace std;

void merge(int arr[], int l, int m, int r){
    int i, j, k;

    int n1 = m - l + 1;
    int n2 = r - m;

    int arr1[n1], arr2[n2];
   
    for(i = 0; i<n1; i++){
        arr1[i] = arr[l+i];
    }
    
    for(j = 0; j<n2; j++){
        arr2[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while(i < n1 && j < n2){

        if(arr1[i]<=arr2[j]){

            arr[k] = arr1[i];
            i++;
        }
        else{
            arr[k] = arr2[j];
            j++;
        }

        k++;
    }

    while(i<n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r){
    
    if(l<r){
        int m = (l+r)/2;

        mergesort(arr, l, m);
        mergesort(arr, m+1, r);
        
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    int n = 0;
    cin>>n;
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    mergesort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}
