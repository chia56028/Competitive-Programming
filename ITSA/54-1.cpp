/*
Problem:ITSA-54-1
Author:ChingYu-Chia
Date:2017,05
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

float rounding(float num);

int main(int argc, char** argv) {
	int N;
	cin>>N;
	for(int i=0; i<N; i++){
		float arr[10];
		for(int j=0; j<10; j++) cin>>arr[j];
		
		//find maximum and minimum
		float max=arr[0], min=arr[0];
		for(int j=0; j<10; j++){
			if(arr[j]>max) max=arr[j];
			if(arr[j]<min) min=arr[j];
		}
		
		//keep setprecision() digit after the decimal point
		cout.setf(ios::fixed);
		cout<<"maximum:"<<setprecision(2)<<rounding(max)<<endl;
		cout<<"minimum:"<<setprecision(2)<<rounding(min)<<endl;
		
	}
	return 0;
}

float rounding(float num){
	
	bool negative=false;
	
	//judge num is positive or negative
	if(num<0){
		negative=true;
		num=-num;
	}
	
	//accurate to the (index) digit after the decimal point
	int index=2;
	int mutiplier=pow(10,index);
	num=(int)(num*mutiplier+0.5)/(mutiplier*1.0);
	
	if(negative) num=-num;
	
	if(num==-0) num=0;
	
	return num;
}
