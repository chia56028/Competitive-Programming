/*
Problem:ITSA-52-2
Author:ChingYu-Chia
Date:2017,04
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main() {
	int n,m=0,x,y;
	cin>>n;
	int a[n][2];
	char b[n];
	for(int i=0;i<n;i++){
		b[i]='Y';
	}
	for(int i=0; i<n; i++){
		cin>>x>>y;
		a[m][0]=x;
		a[m][1]=y;
		m+=1;
		}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if((a[i][0]<=a[j][0] && a[i][1]<a[j][1]) || (a[i][0]<a[j][0] && a[i][1]<=a[j][1])){
		    	b[i]='N';
		    	break;
			}
		}
	}
	for(int i=0; i<n-1; i++){
		cout<<b[i]<<" ";
	}
	cout<<b[n-1]<<endl;
	return 0;
}
