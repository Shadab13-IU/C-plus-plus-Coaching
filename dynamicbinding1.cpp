#include<iostream>
using namespace std;
class Base{
	public:
	virtual void printer(){
		cout<<"Printer of base"<<endl;
	}
	virtual	~Base(){
		cout<<"Desturctor of base"<<endl;
	}
};
class Derived:public Base{
	public:
	void printer(){
		cout<<"Printer of Derived"<<endl;
	}
	~Derived(){
		cout<<"Desturctor of derived"<<endl;
	}
};
int main(){
	Base* b=new Derived();
	b->printer();
	delete(b);
	return 0;
}
