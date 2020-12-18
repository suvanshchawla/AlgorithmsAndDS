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

/*
This solution helps find the maximum sum of a given continuous set of numbers in an array

Enter the number of numbers in the array
Enter the size of the window
maxSum(arr, sizeofwindow(k), numberofelements(n))
    Find the sum of the k elements, then set an integer max = sum of first k elements
    keep on adding the next element and deleting the first element from the sum until the end 
    and compare each time if it is the hghest or not, if yes, then set max equal to it else continue
    return max 
*/