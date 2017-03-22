/*
Problem:a005
Author:ChingYu-Chia
Date:2017,03
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{   
	int n,a,b,c,d;
	cin>>n;
	int irr[5*n] = {0};
	for(int i=0; i<n; i++){
		cin>>a>>b>>c>>d;
		if((b-a)==(c-b) && (c-b)==(d-c)){
			irr[5*i]=a;
			irr[5*i+1]=b;
			irr[5*i+2]=c;
			irr[5*i+3]=d;
			irr[5*i+4]=d+(b-a);
		}
		if((a*c)==(b*b) && (b*d)==(c*c)){
			irr[5*i]=a;
			irr[5*i+1]=b;
			irr[5*i+2]=c;
			irr[5*i+3]=d;
			irr[5*i+4]=d*(b/a);
		}
	}
	for(int j=0; j<=5*n-1; j++){
		cout<<irr[j];
		if((j+1)%5!=0){
			cout<<" ";
		}else{
			cout<<endl;
		}
	}
    return 0;
}
