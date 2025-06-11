#include<iostream>
using namespace std;
class fclass;
fclass* factory();
class fclass{
	fclass(){}
	public:
	void display(){
		cout<<"Display function"<<endl;
	}
	friend fclass* factory();
};
fclass* factory(){
	return new fclass();
}
int main(){
	fclass* fc=factory();
	fc->display();
	return 0;
}
