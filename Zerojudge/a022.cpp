/*
Problem:a022
Hint:string, palindromes
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string str;
	while(getline(cin,str)){
		int l=str.length();
		int ch=1;
		for(int i=0; i<l; i++){
			if(str[i]!=str[l-1-i]){
				ch=0;
			}
		}
		if(ch==1){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
