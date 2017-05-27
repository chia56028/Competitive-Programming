/*
Problem:10035
Hint:carry operation
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int a, b;
	int arra[10], arrb[10];
	while(cin>>a>>b){
		for(int i=0; i<10; i++){
			arra[i]=0;
			arrb[i]=0;
		}
		if(a==0 && b==0) break;
		int i=0;
		while(a>0){
			arra[i]=a%10;
			a/=10;
			i++;
		}
		i=0;
		while(b>0){
			arrb[i]=b%10;
			b/=10;
			i++;
		}
		int carry=0;
		for(i=0; i<10; i++){
			if((arra[i]+arrb[i])>=10){
				carry++;
				arra[i+1]+=1;
			}
		}
		if(carry==0) cout<<"No carry operation."<<endl;
		else if(carry==1) cout<<"1 carry operation."<<endl;
		else if(carry>1) cout<<carry<<" carry operations."<<endl;
	}
	return 0;
}
