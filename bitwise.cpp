#include<iostream>
using namespace std;
int main(){
	unsigned int x=10;
	unsigned int y=20;
	int a=~x;	//x>>1;
	unsigned int b=x|y;
	unsigned int c=x^y;
	cout <<"a= " <<a <<"\n";
	cout <<"b= " <<b <<"\n";
	cout <<"c= " <<c <<"\n";
	return 0;
}
