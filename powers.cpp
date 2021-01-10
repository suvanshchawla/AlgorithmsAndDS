#include <bits/stdc++.h>

using namespace std;

//Need to change the code to for a faster solution. 

double powers(double x, long long n){
	
	double num = 1;

	if (n == 0){
		return 1;
	}	
	else if(n < 0){
		for (int i = 1; i <=abs(n); i++)
		{
			num = num/x;
		}
	}else{
		for (int i = 1; i <=abs(n); i++)
		{
			num = num*x;
		}
	}

	return num;
}

int main(int argc, char const *argv[])
{
	double n, x;
    cin>>x;
    cin>>n;
	cout<<powers(x,n);
	return 0;
}