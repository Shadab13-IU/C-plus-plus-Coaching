#include<iostream>
using namespace std;
class basedemo{
	void display(){
		cout<<"Display of basedemo"<<endl;
	}
	friend class mainclass;
};
class mainclass{
	public:
	void show(){
		cout<<"Show of mainclass"<<endl;
		basedemo bd;
		bd.display();
	}
};
int main(){
	mainclass m1;
	m1.show();
	return 0;
}
