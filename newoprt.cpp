#include<iostream>
using namespace std;
int main(){
	int* p=new int;
	*p=20;
	cout << *p << endl;
	delete p;
	p=NULL;
	cout << *p << endl;
	return 0;
}
