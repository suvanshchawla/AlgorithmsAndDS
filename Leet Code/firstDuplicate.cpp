#include<bits/stdc++.h>

//Program to find the first duplicate value in an array, using constant space. 

using namespace std;

int findFirstDuplicate(int arr[], int len){

    for(int i = 0; i<len; i++){
        if(arr[abs(arr[i]) - 1] < 0){
            return abs(arr[i]); 
        }else{
            arr[abs(arr[i]) - 1] = -abs(arr[abs(arr[i]) - 1]);
        }
    }

    return -1;
}

int main(){
    
    int arr[] = {1,2,3,4,2,5,7};
    int len;
    len = sizeof(arr)/sizeof(arr[0]);
    
    cout<<findFirstDuplicate(arr, len);

       
    return 0;
}