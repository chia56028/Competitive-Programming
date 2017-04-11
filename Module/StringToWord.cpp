/*
Module:stringToWord 
Author:ChingYu-Chia
Date:2017,04
*/

#include <iostream>
#include <string>
using namespace std;
void stringToWord(string);

int main(int argc, char** argv) {
	string str;
	while(getline(cin,str)){
		stringToWord(str);
	}
	
	return 0;
}

void stringToWord(string str){
	int len=str.length();
	string arr[len];
	
	int n=0;
	
	for(int i=0; i<len; i++){
		if(str[i]!=' '){
			arr[n]+=str[i];
		}else{
			n++; 
		}
	}
	
	for(int i=0; i<=n; i++) cout<<arr[i]<<endl;
}
