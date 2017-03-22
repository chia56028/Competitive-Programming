/*
Problem:a003
Author:ChingYu-Chia
Date:2017,03
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{   
	int m,d,s;
	while((cin>>m) && (cin>>d)){
		s=(m*2+d)%3;
		if(s==0)
		    cout<<"普通"<<endl;
		else if(s==1) 
			cout<<"吉"<<endl;
		else
			cout<<"大吉"<<endl; 
	}
    return 0;
}
