#include<iostream>
using namespace std;
int sum(int,int,int);
int main(){
	int x=2;
	int y=5;
	int z=3;
	int a=sum(2,5);
	cout<<a<<"\n";
	return 0;
}
int sum(int x,int y,int z=0){
	return x+y+z;
}
