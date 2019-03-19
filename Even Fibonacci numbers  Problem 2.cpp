

/*
problem link:https://projecteuler.net/problem=2
status:accepted
problem name:Even Fibonacci numbers Problem 2


*/

#include <iostream>
using namespace std;

int main() {
 long long sum=2;
 int arr[1000]={};
 arr[0]=1;
 arr[1]=2;
 for(int i=2;i<35;i++){
 	arr[i]=arr[i-1]+arr[i-2];
 	if(arr[i]<4000000){
 		if(arr[i]%2==0)sum+=arr[i];
 	}
 	else break;
 }
 

 cout<<sum;
 	

 




	return 0;
}
