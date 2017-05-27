/*
Problem:d784
Author:ChingYu-Chia
Solve:
	If all of them are negative numbers, then answer will be the maximum number.
	If there has only one positive number, then answer will the positive number.
	If there have more then one positive number, then the answer must be positive.
	 So if some part of sum  is negative, then you can abundon that part of sum.
Date:2017,05
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int T;
	cin>>T;
	for(int k=0; k<T; k++){
		int N;
		cin>>N;
		int arr[101];
		for(int i=0; i<N; i++) cin>>arr[i];
		
		int sum=0, max=arr[0];
		int sub=0;
		int aaa;
		for(int i=0; i<N; i++){
			sum+=arr[i];
			if(sum>max) max=sum;
			
			if(arr[i]<0){
				aaa=0;
				for(int j=sub; j<=i; j++) aaa+=arr[j];
				if(aaa<0){
					sum=0;
					sub=i+1;
				}
			}
		}
		
		cout<<max<<endl;
	}
	return 0;
}
