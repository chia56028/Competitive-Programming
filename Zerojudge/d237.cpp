/*
Problem:d237
Author:ChingYu-Chia
Date:2017,04
*/

#include <cstdlib>
#include <iostream>
using namespace std;
int fun (int);

int main(int argc, char *argv[])
{   
    long long sum =2;
    for(int i =3; i<2000000; i=i+2){
        sum+=fun(i);
    }
    cout<<sum<<endl;
    return 0;
}

int fun (int i){
    for(int j=2; j*j<=i; j++){
        if(i%j==0)
            return 0;
    }
    return i;
}
