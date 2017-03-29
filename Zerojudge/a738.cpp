/*
Problem:a738
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int x,y;
	while(cin>>x>>y){

		while(x!=0 && y!=0){
			if(x>y){
				x-=y;
			}else{
				y-=x;
			}
		}
		
		if(x==0){
			cout<<y<<endl;
		}else if(y==0){
			cout<<x<<endl;
		}
	}
	return 0;
}
