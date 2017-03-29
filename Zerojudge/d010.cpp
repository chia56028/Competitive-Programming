/*
Problem:d010
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int x;
	while(cin>>x){
		int sum=0;
		
		for(int i=1; i<x; i++){
			if(x%i==0){
				sum+=i;
			}
		}
		
		if(sum>x){
			cout<<"盈數"<<endl; 
		}else if(sum<x){
			cout<<"虧數"<<endl; 
		}else{
			cout<<"完全數"<<endl; 
		}
	}
	return 0;
}
