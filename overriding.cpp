#include<iostream>
using namespace std;
class Myclass{
	public:
	void printer(){
		cout<<"This is blank printer"<<endl;
	}
};
class yourclass:public Myclass{
	public:
	void printer(){
		cout<<"This blank printer belong to child"<<endl;
	}
};
int main(){
	//yourclass* yc=new yourclass();
	//yc->printer();
	/*Myclass* m1=new yourclass();
	m1->printer();*/
	yourclass* nc=(yourclass*)(new Myclass());
	nc->printer();
	return 0;
}
