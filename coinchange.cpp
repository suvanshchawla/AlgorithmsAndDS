#include<iostream>
#include<algorithm>
 using namespace std;

 int main(int argc, char const *argv[])
 {
     int n = 0, sum = 0;
     cin>>n;
     int den[n];
     cout<<"Enter the denominations"<<endl;
     for(int i = 0; i< n; i++){
        cin>>den[i];
     }
     cout<<"Enter the sum: \t";
     cin>>sum;
    /* for(int i = 0; i< n; i++){
        cout<<den[i]<<"\t"<<endl;
    } */ 

    int coins[n][sum+1];
    std::fill((int*)coins,(int*)coins+sizeof(coins)/sizeof(int),0);

    for(int i = 0; i< n; i++){
        coins[i][0] = 1;
    }

    int x1 = 0, x2 = 0;
    for(int i = 0; i<n; i++){
        for(int j = 1; j<sum+1;j++){
            if(den[i]>j){
                coins[i][j] = 0;
            }
            else{
                x1 = (i>0)?coins[i-1][j]:0;
                x2 = coins[i][j-den[i]];   
            }
            coins[i][j] = x1+x2;    
        }
    }
    
    cout<<coins[n-1][sum];
    return 0;
 }
 /*
    So basically what we do is:
    1. Input the number of coins and then their respective denominations
    2. For the total amount we create an array from 0 to m (Sizeof(array) = m+1)
    3. We make default sum = 0 column to be 1, because there is only one way to make amount 0 with any denominations, i.e. with 0 coins
    4. We then add the the ways in which that amount can be calculated, (By inserting a denomination and without it)
 
 */