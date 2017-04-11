/*
Module:stringToFloat
Author:ChingYu-Chia
Date:2017,04
*/

#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;
void stringToFloat(string);

int main(int argc, char** argv) {
	string str;
	while(getline(cin,str)){
		stringToFloat(str);
	}
	
	return 0;
}

void stringToFloat(string str){
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
	
	double arrf[n];
	
	//include<stdlib.h> for using atof
	for(int i=0; i<=n; i++) arrf[i]=::atof(arr[i].c_str());
	for(int i=0; i<=n; i++) cout<<arrf[i]<<endl;
}
