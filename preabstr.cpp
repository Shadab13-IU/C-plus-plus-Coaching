#include<iostream>
using namespace std;
class base{
	public:
	virtual void display(){
		cout<<"Display of base"<<endl;
	}
};
class derived:public base{
	public:
	void display(){
		cout<<"Display of derived"<<endl;
	}
};
base& factory(){
	base& b=*(new derived());
	return b;
}
int main(){
	base& b=factory();
	b.display();
	return 0;
}
