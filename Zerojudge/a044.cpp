/*
Problem:a044
Author:ChingYu-Chia
Date:2017,03
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{   
	int n,sum,add;
	while(cin>>n){
		sum=2;
		if(n>=2){
			add=1;
			for(int i=1; i<=n-1; i++){
				add+=i;
				sum+=add;
			}
		}
		cout<<sum<<endl;
	}
    return 0;
}
