#include<iostream>
using namespace std;
class myclass{
	public:
	void printer(){
		cout<<"This is blank printer"<<endl;
	}
	void printer(int y){
		cout<<"This is not blank printer"<<endl;
	}
};
int main(){
	myclass& m1=*(new myclass());
	m1.printer();
	m1.printer(20);
	return 0;
}
