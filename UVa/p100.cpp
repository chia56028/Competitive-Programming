/*
Problem:p100
Author:Ching-Yu
Date:2017,03
*/ 
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	unsigned long  a, b, tmp, n, cycle, max=0;
	while(cin>>a>>b){
		max=0;
		cout<<a<<" "<<b<<" ";
		if(a>b){
			tmp=a;
			a=b;
			b=tmp;
		}
		for(int i=a; i<=b; i++){
			cycle=1;
			n=i;
			while(n!=1){
				cycle++;
				if(n%2==0){
					n=n/2;
				}else{
					n=3*n+1;
				}
			}
			if(cycle>max) max=cycle;
		}
		cout<<max<<endl;
	}
	return 0;
}
