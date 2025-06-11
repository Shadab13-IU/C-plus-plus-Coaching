#include<iostream>
using namespace std;
long fact(unsigned int);
long sum(unsigned int);
long power(unsigned int,unsigned int);
int main(){
	int n,x;
	cout<<"Enter n and x:";
	cin>>n>>x;
	long result=power(n,x);
	//long result=fact(n);
	cout<<"Result"<<result<<"\n";
	return 0;
}
/*long fact(unsigned int n){
	if(n==0||n==1)return 1L;
	return n*fact(n-1);
}
long sum(unsigned int n){
	if(n==0||n==1)return n;
	return n+sum(n-1);
}
long power(unsigned int n,unsigned int x){
	if(x==0)return 1L;
	if(x==1)return n;
	return n*power(n,x-1);
}*/







