/*
Problem:d984
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a, b, c;
	while(cin>>a>>b>>c){
		int max, mid, min;
		if(a>b && a>c){
			max=a;
			if(b>c){
				mid=b;
				min=c;
			}else{
				mid=c;
				min=b;
			}
		}
		if(b>c && b>a){
			max=b;
			if(a>c){
				mid=a;
				min=c;
			}else{
				mid=c;
				min=a;
			}
		}
		if(c>b && c>a){
			max=c;
			if(b>a){
				mid=b;
				min=a;
			}else{
				mid=a;
				min=b;
			}
		}
		
		//careful that (mid+min) may exceed 2147483647
		if(max-mid-min<0){
			if(mid==a) cout<<"A"<<endl; 
			if(mid==b) cout<<"B"<<endl; 
			if(mid==c) cout<<"C"<<endl; 
		}else{
			if(max==a) cout<<"A"<<endl; 
			if(max==b) cout<<"B"<<endl; 
			if(max==c) cout<<"C"<<endl;
		}
	}
	return 0;
}
