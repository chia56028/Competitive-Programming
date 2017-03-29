/*
Problem:d068
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(){
	int x;
	while(cin>>x){
		if(x>50){
			cout<<x-1<<endl;
		}else{
			cout<<x<<endl;
		}
	}
	return 0;
}