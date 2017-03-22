/*
Problem:d460
Author:ChingYu-Chia
Date:2017,03
*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		if(n<=5){
			cout<<0<<endl;
		}else if(6<=n && n<=11){
			cout<<590<<endl;
		}else if(12<=n && n<=17){
			cout<<790<<endl;
		}else if(18<=n && n<=59){
			cout<<890<<endl;
		}else if(60<=n){
			cout<<399<<endl;
		}
	}
	return 0;
}
