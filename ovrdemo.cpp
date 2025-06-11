#include<iostream>
using namespace std;
int add(int x,int y){
	return x+y;
}
int add(int x,int y,int z){
	return x+y+z;
}
int main(){
	int n=add(2,3,10);
	int m=add(3,4,5);
	cout<<n;
	cout<<" "<<m;
	return 0;
}
