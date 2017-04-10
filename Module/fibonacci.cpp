#include <iostream>
#include <cstdlib>
using namespace std; 
int fibLoop (int);
int fibRecursion(int);

int main(int argc, char** argv) {
	int n;
	while(cin>>n){
		cout<<"fib("<<n<<")="<<fibRecursion(n)<<endl; 
	}
	return 0;
}

int fibLoop(int n){
	int f_1=1;
	int f_2=1;
	int f=0;
	for(int i=3;i<=n;i++){
		f=f_1+f_2;
		f_2=f_1;
		f_1=f;
	}
	if(n==1 || n==2) return 1;
	return f;
}

int fibRecursion(int n){
	if(n==1 || n==2)
		return 1;
	else
		return fibRecursion(n-1)+fibRecursion(n-2);
}
