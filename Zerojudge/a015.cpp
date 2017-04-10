/*
Problem:a015
Author:ChingYu-Chia
Date:2017,04
*/

#include <iostream>
using namespace std;

int main(void) {
	int m,n;
	while(cin>>m>>n){
	int array[100][100]={0};
	int array2[100][100]={0};
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>array[i][j];
		}
	}
	
	for(int j=0; j<n; j++){
		for(int i=0; i<m; i++){
			array2[i][j] = array[j][i]; 
		}
	}
	
	for(int j=0; j<n; j++){
		for(int i=0; i<m; i++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
		}
	}
	return 0;
}
