/*
Problem:b294
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int N, n, sum=0;
	while(cin>>N){
		for(int i=0; i<N; i++){
			cin>>n;
			sum=sum+(n*(i+1));
		}
		cout<<sum<<endl;
	}
	return 0;
}