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
			cout<<"�ռ�"<<endl; 
		}else if(sum<x){
			cout<<"����"<<endl; 
		}else{
			cout<<"������"<<endl; 
		}
	}
	return 0;
}
