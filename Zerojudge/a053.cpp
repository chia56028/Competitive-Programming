/*
Problem:a053
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int x;
	while(cin>>x){
		if(x<=10){
			cout<<x*6<<endl;
		}else if(x>10 && x<=20){
			x-=10;
			cout<<60+x*2<<endl;
		}else if(x>20 && x<40){
			x-=20;
			cout<<80+x*1<<endl;
		}else{
			cout<<100<<endl;
		}
	}
	return 0;
}
