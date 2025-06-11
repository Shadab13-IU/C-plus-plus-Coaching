
#include<iostream>
using namespace std;
class parent1{
	public:
	void display(){
		cout<<"Display of parent1"<<endl;
	}
};
class parent2{
	void show(){
		cout<<"Display of parent2"<<endl;
	}
};
class child:public parent1,public parent2{
	public:
	void print(){
		cout<<"Display of child"<<endl;
	}
};
class grandchild:public child,public parent2{
	public:
	void magic(){
		cout<<"display of grandchild"<<endl;
	}
};
int main(){
	grandchild* gc=new grandchild();
	gc->show();
	return 0;
}
