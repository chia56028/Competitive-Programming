/*
Problem:a024
Author:ChingYu-Chia
Date:2017,03
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{   
	int a,b;
	while(cin>>a>>b){
		while((a>b) || (b>a)){
			if(a>b)
				a=a-b;
			else if(b>a)
				b=b-a;
		}
		cout<<a<<endl;
	}
	return 0;
}
