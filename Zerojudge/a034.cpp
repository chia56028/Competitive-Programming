/*
Problem:a034
Author:ChingYu-Chia
Date:2017,03
*/

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	long long int x,mod,i,ans;
	while(cin>>x){
		ans=0,mod=0,i=0;
		while(x>0){
			mod=x%2;
			x/=2;
			ans=ans+mod*pow(10,i);
			i+=1;	
		}
		cout<<ans<<endl;
	}
	return 0;
}
