#include<iostream>
using namespace std;
class Mclass{
	public:
	void display(){
		cout<<"Display function"<<endl;
	}
	void printer();
};
inline void Mclass::printer(){
	cout<<"Printer function"<<endl;
}
int main(){
	Mclass m;
	m.display();
	m.printer();
	return 0;
}
