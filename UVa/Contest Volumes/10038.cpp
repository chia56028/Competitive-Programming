/*
Problem:10038
Author:ChingYu-Chia
Date:2017,03
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int T;
	while(cin>>T){
		int a[T];
		for(int i=0; i<T; i++){
			cin>>a[i];
		}
		
		int jolly=1;
		
		int dif;
		int diff[T-1];
		
		for(int i=1; i<T; i++){
			dif=a[i]-a[i-1];;
			
			if(dif<0) dif=-dif;
			
			diff[i-1]=dif;
			if(dif>=1 && dif<=T-1){
				
			}else{
				jolly=0;
			}
		}
		
		for(int i=0; i<T-1; i++){
			for(int j=i+1; j<T-1; j++){
				if(diff[i]==diff[j]) jolly=0;
			}
		}
		
		
		if(jolly==1){
			cout<<"Jolly"<<endl;
		}else{
			cout<<"Not jolly"<<endl;
		}
	}
	return 0;
}
