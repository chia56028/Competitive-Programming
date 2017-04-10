/*
Problem:a058
Author:ChingYu-Chia
Date:2017,04
*/

#include <iostream>
using namespace std;

int main(void) {
	int n,a;
	int array[3]={0,0,0};
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		if(a%3 == 0)
			array[0]+=1;
		else if(a%3 == 1)
			array[1]+=1;
		else if(a%3 == 2)
			array[2]+=1;
	} 
	for(int i=0; i<=2; i++)
		cout<<array[i]<<" ";
	cout<<endl;

}
