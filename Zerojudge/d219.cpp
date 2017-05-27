/*
Problem:d219
Hint:Divide and Conquer
*/

#include <iostream>
using namespace std;
long long int power(int,int,int);

int main(int argc, char** argv) {
	int B, P, M;
	while(cin>>B>>P>>M){
		cout<<power(B,P,M)<<endl;
	}
	return 0;
}

long long int power(int b, int p, int m){
	long long int mul;
	
	if(p==0) return 1;
	
	if(p%2==1){
		return (power(b,p-1,m)*b)%m;
	}else if(p%2==0){
		return (power(b,p/2,m)*power(b,p/2,m))%m;
	}
}
