/*
Module:rounding
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double rounding(double); 

int main(int argc, char** argv) {
	double x;
	while(cin>>x){
		//keep setprecision() digit after the decimal point
		cout.setf(ios::fixed);
		
		double n=rounding(x);
		cout<<setprecision(2)<<n<<endl;
	}
	return 0;
}

double rounding(double num){
	
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
