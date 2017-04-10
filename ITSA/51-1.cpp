/*
Problem:ITSA-51-1
Author:ChingYu-Chia
Date:2017,04
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, a[8]={0};
	int x,k,y;
	cin>>n;
	for(int i=1; i<=n; i++){
    	cin>>x;
    	if(x>=0){
    		k=0;
      		for(int i=0; i<=7; i++){
        		a[i]=0;
      		}
      		while(x>0){
        		a[k]=x%2;
		        x=(x-a[k])/2;
		        k+=1;
		    }
		    for(int j=7;j>=0; j--){
        		cout<<a[j];
      		}
      		cout<<endl;
    	}else{
      		y=-x-1;
			k=0;
      		for(int i=0; i<=7; i++){
       			a[i]=1;
      		}
    		while(y>0){
        		if(y%2==0)
          			a[k]=1;
        		else
          			a[k]=0;
        		y=(y-(y%2))/2;
        		k+=1;
      		}
      		for(int j=7;j>=0; j--){
          		cout<<a[j];
      		}
      		cout<<endl;
    	}
  	}
} 
