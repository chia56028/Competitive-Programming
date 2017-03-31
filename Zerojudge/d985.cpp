/*
Problem:d985
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int T;
	cin>>T;
	for(int i=0; i<T; i++){
		int N;
		cin>>N;
		int a, b;
		int min[N], sec[N];
		
		for(int j=0; j<N; j++){
			cin>>a>>b;
			min[j]=a;
			sec[j]=b;
		}
		
		int bestmin=min[0], bestsec=sec[0];
		int summin=0, sumsec=0;
		int avgmin=0, avgsec=0;
		
		for(int j=0; j<N; j++){
			if(min[j]<bestmin){
				bestmin=min[j];
				bestsec=sec[j];
			}
			if(min[j]==bestmin && sec[j]<=bestsec){
				bestmin=min[j];
				bestsec=sec[j];
			}
			
			sumsec+=(min[j]*60+sec[j]);
		}
		
		if(sumsec%N!=0){
			for(int j=0; j<N; j++){
				if((sumsec-j)%N==0){
					sumsec=sumsec-j;
				}
			}
		}
		
		avgsec=sumsec/N;
		while(avgsec>=60){
			avgsec-=60;
			avgmin+=1;
		}
		
		cout<<"Track "<<i+1<<":"<<endl;
		cout<<"Best Lap: "<<bestmin<<" minute(s) "<<bestsec<<" second(s)."<<endl;
		cout<<"Average: "<<avgmin<<" minute(s) "<<avgsec<<" second(s)."<<endl;
		
	}
	return 0;
}
