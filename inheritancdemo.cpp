#include<iostream>
using namespace std;
class Parent{
	public:
	void show(){
		cout<<"Show of parent"<<endl;
	}
	Parent(int y){
		cout<<"Constructor of parent"<<endl;
	}
};
class child:public Parent{
	public:
	void display(){
		cout<<"Display of child"<<endl;
	}
	child(int a):Parent(a){
		cout<<"Constructor of child"<<endl;
	}

};
int main(){
	// Through pointer
	/*child* c=new child(20);
	c->display();
	c->show();
	/* Through object*/
	child c(20);
	c.display();
	c.show();
	/* Through reference
	child& c=*(new child());
	c.display();
	c.show();*/
	return 0;
}
