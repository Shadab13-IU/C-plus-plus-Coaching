#include<iostream>
using namespace std;
class myclass{
	public:
	void printer(){
		cout<<"This is blank printer"<<endl;
	}
};
class yourclass{
	public:
	void show(){
		cout<<"This is show"<<endl;
	}
};
class child:public myclass,public yourclass{
	public:
	void display(){
		cout<<"This is display"<<endl;
	}
};
int main(){
	child* ch=new child();
	ch->printer();
	ch->show();
	ch->display();
	return 0;
}
