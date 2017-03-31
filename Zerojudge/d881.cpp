/*
Problem:d881
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int d;
	while(cin>>d){
		int add[49]={0};
		add[0]=1;
		for(int i=1; i<49; i++){
			add[i]=add[i-1]+d;
		}
		
		int an[50]={1};
		an[0]=0;
		for(int i=1; i<50; i++){
			for(int j=0; j<i; j++){
				an[i]=an[i]+add[j];
			}
		}
		
		int sn=0;
		for(int i=0; i<50; i++){
			sn+=an[i];
		}
		
		cout<<sn+50<<endl;
	}
	return 0;
}
