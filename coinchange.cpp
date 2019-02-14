#include<iostream>
 using namespace std;

 int main(int argc, char const *argv[])
 {
     int n;
     cin>>
     return 0;
 }
 /*
    So basically what we do is:
    1. Input the number of coins and then their respective denominations
    2. For the total amount we create an array from 0 to m (Sizeof(array) = m+1)
    3. We make default sum = 0 column to be 1, because there is only one way to make amount 0 with any denominations, i.e. with 0 coins
    4. We then add the the ways in which that amount can be calculated, (By inserting a denomination and without it)
 
 */