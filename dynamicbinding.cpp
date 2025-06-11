#include<iostream>
using namespace std;
class base;
class derived;
int main(){
	base* b=new derived();
	b->printer();
	return 0;
}
class base{
	public:
	virtual void printer();
};
class derived:public base{
	public:
	void printer();
};
void base::printer(){
		cout<<"Dispaly of base"<<endl;
}
void derived::printer(){
		cout<<"Dispaly of derived"<<endl;
}

