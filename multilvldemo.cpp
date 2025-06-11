#include<iostream>
using namespace std;
class parent{
	public:
	void dispaly(){
		cout<<"Display of parent"<<endl;
	}
};
class child:public parent{
	public:
	void display(){
		cout<<"Display of child"<<endl;
	}
};
class grandchild:public child{
	public:
	void display(){
		cout<<"Display of grandchild"<<endl;
	}
};
int main(){
	grandchild& g=*(new grandchild());
	g.display();
	return 0;
}
