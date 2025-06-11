#include<iostream>
using namespace std;
class parent{
	public:
	virtual void display(){
		cout<<"Display of parent"<<endl;
	}
};
class child:public parent{
	public:
	void display(){
		cout<<"display of child"<<endl;
	}
};
int main(){
	child* ch=new child();
	ch->display();
	//parent* pt=new parent();
	//pt->display();
	parent* ptt=new child();
	ptt->display();
	return 0;
}
