#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	string N;
	while(getline(cin,N)){
		if(N.length()==1 && N[0]=='0') break;
		
		int even=0;
		int odd=0;
		
		for(int i=0; i<N.length(); i++){
			if(i%2==0) even+=(int)N[i]-48;
			else odd+=(int)N[i]-48;
		}
		
		if((odd-even)%11==0) cout<<N<<" is a multiple of 11."<<endl;
		else cout<<N<<" is not a multiple of 11."<<endl;
	}
	return 0;
}
