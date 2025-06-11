#include<iostream>
using namespace std;
void swap(int&,int&);
int main(){
	int x=10;
	int z=30;
	int& y=x;
	cout<<"y= "<<y<<"\n";
	cout<<"x= "<<x<<"\n";
	y=z;
	cout<<"y= "<<y<<"\n";
	cout<<"x= "<<x<<"\n";
	y=80;
	cout<<"y= "<<y<<"\n";
	cout<<"x= "<<x<<"\n";
	cout<<"z= "<<z<<"\n";
	// swapping code 
	/*int x=10;
	int y=20;
	cout<<"x= "<<x<<" y= "<<y<<"\n";
	swap(x,y);
	cout<<"x= "<<x<<" y= "<<y<<"\n";*/
	
	return 0;
}
/*void swap(int& a,int& b){
	int temp=a;
	a=b;
	b=temp;
}*/
	
