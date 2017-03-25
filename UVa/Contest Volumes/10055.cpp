/*
Problem:10055
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	long long int a, b;
	while(cin>>a>>b){
		if(b>a){
			cout<<b-a<<endl;
		}else{
			cout<<a-b<<endl;
		}
		
	}
	return 0;
}
