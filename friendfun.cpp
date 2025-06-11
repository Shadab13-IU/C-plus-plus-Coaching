#include<iostream>
using namespace std;
void ffunction();
class fclass{
	void display(){
		cout<<"Display function"<<endl;
	}
	friend void ffunction();
};
void ffunction(){
	fclass* fc=new fclass();
	fc->display();
}
int main(){
	ffunction();
	return 0;
}
