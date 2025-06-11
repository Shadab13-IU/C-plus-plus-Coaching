#include<iostream>
using namespace std;
long fact(unsigned int);
long sum(unsigned int);
long power(unsigned int,unsigned int);
int main(){
	unsigned int x,n;
	cout<<"Enter x and n:";
	cin>>x>>n;
	long result=fact(x);
	long result1=sum(x);
	long result2=power(x,n);
	cout<<"Result "<<result<<" Result1 "<<result1<<" Result2 "<<result2<<endl;
	return 0;
}
long fact(unsigned int n){
	int result=1;
	for(int i=2; i<=n; i++){
		result=result*i;
	}
	return result;
}
long sum(unsigned int x){
	int result=0;
	for(int i=1; i<=x; i++){
		result=result+i;
	}
	return result;
}
long power(unsigned int x,unsigned int n){
	int result=1;
	for(int i=1; i<=n; i++){
		result=result*x;
	}
	return result;
}
