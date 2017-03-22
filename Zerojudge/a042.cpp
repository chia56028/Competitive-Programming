/*
Problem:a042
Author:ChingYu-Chia
Date:2017,03
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{   
	int n,sum;
	while(cin>>n){
		sum=2;
		for(int i=1; i<=n; i++){
			sum+=2*(i-1);
		}
		cout<<sum<<endl;
	}
    return 0;
}
