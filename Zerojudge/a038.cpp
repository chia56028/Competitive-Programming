/*
Problem:a038
Author:ChingYu-Chia
Date:2017,03
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{   
	int n,x;
	cin>>n;
	while(n>0){
		x=x*10+n%10;	
		n=n/10;
	}
	cout<<x<<endl;
    return 0;
}
