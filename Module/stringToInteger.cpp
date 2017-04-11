/*
Module:stringToInteger
Author:ChingYu-Chia
Date:2017,04
*/

#include <iostream>
#include <string>
using namespace std;
void stringToInteger(string);

int main(int argc, char** argv) {
	string str;
	while(getline(cin,str)){
		stringToInteger(str);
	}
	return 0;
}


void stringToInteger(string str){
	int len=str.length();
	int arr[len];
	
	for(int i=0; i<len; i++) arr[i]=0;
	
	int n=0;
	
	for(int i=0; i<len; i++){
		if(str[i]!=' '){
			//ASCII of number = number + 48
			arr[n]=arr[n]*10+(str[i]-48);
		}else{
			n+=1;
		}
	}
	
	for(int i=0; i<=n; i++) cout<<arr[i]<<endl;
}
