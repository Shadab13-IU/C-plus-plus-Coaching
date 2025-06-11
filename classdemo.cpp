#include<iostream>
using namespace std;
class Myclass{
	int age;
	public:
	/*void setage(int x){
		age=x;
	}*/
	//Constructor
	Myclass(int x){
		age=x;
	}
	~Myclass(){
		cout<<"Destructor called\n";
	}
	void printage(){
		cout<<"Age= "<<age<<"\n";
	}
};
int main(){
	// dynamically object //
	Myclass* mp=new Myclass(35);
	mp->printage();
	delete(mp);
/*	Myclass m2(50);
	Myclass m3(100);
	//m.setage(20);
	m.printage();
	m2.printage();
	m3.printage();
*/
	return 0;
}
