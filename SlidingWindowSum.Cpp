#include<bits/stdc++.h>

using namespace std;

int maxSum(int arr[], int num, int n){

int arrSum = 0, max_sum = 0, windowSum;

    if (num > n){
        //cout<<"Invalid argument";
        return -1;
    }
    //Calculating the sum of the first n numbers
    for (int i = 0; i < num; i++){
        arrSum +=arr[i];
    }
    windowSum = arrSum;
    for(int i = num; i< n; i++){
        windowSum = windowSum + arr[i] - arr[i - num];
        max_sum = max(max_sum, windowSum);
    }

    return max_sum;

}

int main(){
    int n, num;
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    num = 4;
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr, num, n);
}