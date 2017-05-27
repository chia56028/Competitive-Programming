/*
Problem:10409 
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	int T;
	while(cin>>T){
		cin.get();
		if(T==0){
			break;
		}
		int die[6]={1,6,2,5,3,4};
		int temp;
		string str[T];
		for(int i=0; i<T; i++){
			getline(cin,str[i]);
			if(str[i]=="north"){
				temp=die[0];
				die[0]=die[3];
				die[3]=die[1];
				die[1]=die[2];
				die[2]=temp;
			}else if(str[i]=="south"){
				temp=die[2];
				die[2]=die[1];
				die[1]=die[3];
				die[3]=die[0];
				die[0]=temp;
			}else if(str[i]=="east"){
				temp=die[0];
				die[0]=die[4];
				die[4]=die[1];
				die[1]=die[5];
				die[5]=temp;
			}else if(str[i]=="west"){
				temp=die[5];
				die[5]=die[1];
				die[1]=die[4];
				die[4]=die[0];
				die[0]=temp;
			}
		}
		cout<<die[0]<<endl;
	}
	
	
	return 0;
}


