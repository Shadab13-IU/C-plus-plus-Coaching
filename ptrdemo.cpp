#include<iostream>
using namespace std;
void swap(int*,int*);
int sum(const int*,const int*);
int main(){
	/*int m=35;
	int* q=&m;
	int*p =new int;
	*p=30;
	int k=*p;
	cout<<k<<"\n";
	cout<<*q<<endl;*/
	int x,y;
	cout<<"Enter x and y:";
	cin>>x>>y;
	cout<<"x= "<<x<<" y= "<<y<<"\n";
	//swap(&x,&y);
	//cout<<"x= "<<x<<" y= "<<y<<"\n";
	int k=sum(&x,&y);
	cout<<k<<"\n";	
	return 0;
}
/*void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}*/
int sum(const int* p,const int* q){
	//*p=1;
	//*q=2;
	return *p+*q;
}
