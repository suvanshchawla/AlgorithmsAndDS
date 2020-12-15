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
    cin>>n;   
    int arr[n];
    cin>>num;
    for(int i =0; i<n; i++)
        cin>>arr[i];
    cout<<maxSum(arr, num, n);
}