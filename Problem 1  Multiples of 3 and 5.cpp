
/*
problem name:Problem 1  Multiples of 3 and 5 
problem link:https://projecteuler.net/problem=1
status:accepted
author:moahnd sakr
*/

#include <iostream>
using namespace std;

int main() {
long long sum=0;
for(int i=0;i<1000;i++){
	sum+=((i%3==0||i%5==0)?i:0);
}
cout<<sum;


	return 0;
}
