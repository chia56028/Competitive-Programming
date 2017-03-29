/*
Problem:d067
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int y;
	while(cin>>y){
		if((y%4==0 && y%100!=0) || y%400==0){
			cout<<"a leap year"<<endl;
		}else{
			cout<<"a normal year"<<endl;
		}
	}
	return 0;
}
