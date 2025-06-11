#include<iostream>
using namespace std;
class Myclass{
	int x;
	string s;
	public:
	Myclass():x(10),s("lucknow"){}
	Myclass(const Myclass& m){
		x=m.x;
		s=m.s;
	}
	void display(){
		cout<<"x= "<<x<<endl;
		cout<<"s= "<<s<<endl;
	}
};
int main(){
	Myclass m1;
	Myclass m2=m1;		//Myclass();
	m1.display();
	m2.display();
	return 0;
}
