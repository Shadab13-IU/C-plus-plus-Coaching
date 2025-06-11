#include<iostream>
using namespace std;
int main(){
	bool b1,b2;
	b1=true;
	b2=false;
	short x=30;
	char x1=-10;
	unsigned char y=-10;
	int x2=10,y2=20;
	bool b3=x<y;
	int a=10,b;
	b=++a;
	int a1=20,z;
	z=a1++;
	int r=10,s=20,t=30;
	bool u;
	u=!(++r<++s); //||(++s<++t);
	cout <<"r= " <<r <<"\n";
	cout <<"s= " <<s <<"\n";
	cout <<"t= " <<t <<"\n";
	cout <<"u= " <<u<<"\n";
	cout << a << b <<"\n";
	cout << a1 << z <<"\n";
	cout << (bool)b3 <<"\n";
	cout << b1 <<" "<< b2 <<"\n";
	cout << x <<"\n";
	cout << sizeof(b1) <<"\n";
	cout << sizeof(x) <<"\n";
	cout << (int)x1 <<"\n";
	cout <<(int)y << endl;
	return 0;
}
