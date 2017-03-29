/*
Problem:d471
Hint:Binary 
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int T;
	while(cin>>T){
		int k=pow(2,T);
		
		int maxk=k-1;
		int b[30]={0};
		int i=0;
		while(maxk>0){
			b[i]=maxk%2;
			maxk=maxk/2;
			i++;
		}
		int max=i;
		
		for(int n=0; n<k; n++){
			int x=n;
			for(int j=0; j<30; j++){
				b[j]=0;
			}
			if(x==0){
				b[0]=0;
			}else{
				i=0;
				while(x>0){
					b[i]=x%2;
					x=x/2;
					i++;
				}	
			}
			for(int j=max-1; j>=0; j--){
				cout<<b[j];
			}
			cout<<endl;
		}
	}
	return 0;
}
