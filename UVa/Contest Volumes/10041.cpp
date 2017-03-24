/*
Problem:10041
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
		int N, n, dis=0, sum=0;
		int suma=0, sumb=0;
		cin>>N;
		int arr[N];
		for(int j=0; j<N; j++){
			cin>>n;
			arr[j]=n;
		}
		sort(arr,arr+N);
		if(N%2==0){
			for(int j=0; j<N; j++){
				if(j!=N/2){
					dis=arr[N/2]-arr[j];
					if(dis<0) dis=-dis;
					suma=suma+dis;
				}
				if(j!=(N/2)-1){
					dis=arr[(N/2)-1]-arr[j];
					if(dis<0) dis=-dis;
					sumb=sumb+dis;
				}
				if(suma>sumb) sum=sumb;
				else sum=suma;
			}
		}else{
			for(int j=0; j<N; j++){
				if(j!=(N-1)/2){
					dis=arr[(N-1)/2]-arr[j];
					if(dis<0) dis=-dis;
					sum=sum+dis;
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
