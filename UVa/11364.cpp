/*
Problem:11364
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int T;
	cin>>T;
	for(int i=0; i<T; i++){
		int N;
		cin>>N;
		int arr[N];
		for(int j=0; j<N; j++){
			cin>>arr[j];
		}
		
		sort(arr,arr+N);
		int sum;
		
		sum=2*(arr[N-1]-arr[0]);
		cout<<sum<<endl;
		
	}
	
	
	
	
	return 0;
}
