/*
Problem:d064
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int N;
	while(cin>>N){
		if(N%2==0){
			cout<<"Even"<<endl;
		}else{
			cout<<"Odd"<<endl;
		}
	}
	return 0;
}
