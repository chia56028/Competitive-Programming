/*
Problem:d827
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int N;
	while(cin>>N){
		int dollar=0;
		while(N>=12){
			N-=12;
			dollar+=50;
		}
		dollar+=(5*N);
		cout<<dollar<<endl;
	}
	return 0;
}
