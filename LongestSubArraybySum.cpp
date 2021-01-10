#include <bits/stdc++.h>

using namespace std;

//This is an example of a sliding window problem, in this we have to code a a function, longestSubArraySum, which return the position of the firt and the last element of the longest subArray with the given sum.

vector<int> longestSubArraySum(int arr[], int arrLen, int sum){

	vector<int> result{-1};
	int current_sum = 0;
	int left = 0;
	int right = 0;
    while(right < arrLen){
		current_sum+=arr[right];
		while(left < right && current_sum > sum){
			current_sum-=arr[left++];
		}
		if(current_sum == sum && (result.size() == 1 || result[1] - result[0] < right - left)){
			result = {left + 1, right + 1};
		}

		right++;
	}

	return result;
}


int main(int argc, char const *argv[])
{
	int arr[] = {1, 2, 3, 4, 5, 0, 0, 0, 6, 7, 8, 9, 10};
    int arrlen = sizeof(arr)/sizeof(arr[0]);

	int sum = 15;
	vector<int> lsa;
    lsa = longestSubArraySum(arr, arrlen, sum);
	for (int i = 0; i < lsa.size(); i++)
    {
        cout<<lsa[i]<<" ";
    }
    
    return 0;
}