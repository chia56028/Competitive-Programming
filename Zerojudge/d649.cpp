/*
Problem:d649
Author:ChingYu-Chia
Date:2017,03
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{   
	int N;
	while(cin>>N){
		if(N==0)
			return 0;
		for(int i=1; i<=N; i++){
			for(int j=N; j>0; j--){
				if(j>i)
					cout<<"_";
				else
					cout<<"+";
			}
			cout<<endl;
		}
	cout<<endl;	
	}
    return 0;
}
