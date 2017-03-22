/*
Problem:b557
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
	int T;
	cin>>T;
	int N, n, sum;
	for(int i=0; i<T; i++){
		sum=0;
		cin>>N;
		int arr[N];
		for(int j=0; j<N; j++){
			cin>>n;
			arr[j]=n;
		}
		sort(arr,arr+N);
		int a, b, c;
		for(int j=0; j<N-2; j++){
			for(int k=j+1; k<N-1; k++){
				for(int l=k+1; l<N; l++){
					a=arr[j]*arr[j];
					b=arr[k]*arr[k];
					c=arr[l]*arr[l];
					if((a+b)==c){
						sum++;
					}
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
