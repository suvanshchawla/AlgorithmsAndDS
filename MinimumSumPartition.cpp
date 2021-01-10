#include<bits/stdc++.h>

using namespace std;

bool isSubsetSum(int arr[], int n, int sum){

    //Check if the sum is zero
    if (sum == 0)
        return true;
    if (n == 0 && sum != 0)
        return false;
    
}

bool findPartition(int arr[], int n, int sum){
    if(sum%2 == 0)
        return isSubsetSum(arr, n, sum/2);

}

int main(){
    int n, arrSum;
    cin>>n;
    int arr[n]; 
    arrSum = 0;
    for (int i = 0; i<n; i++){
        cin>>arr[i];
        arrSum = arrSum + arr[i];
    }    

    //Checking if the some can be divided into 2 subsets
    if(arrSum % 2 != 0){
        cout<<"Cannot be divided into 2 subsets of equal sum";
    }
    else{
              
    }

}


/*

This code aims to solve the Minimum Sum Partition Problem, i.e. Partition a set into two subsets such that the difference of subset sums is minimum 




*/