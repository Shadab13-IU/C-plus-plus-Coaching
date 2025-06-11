#include<iostream>
using namespace std;
class home{
	public:
	void display(){
		cout<<"Myh home"<<endl;
	}
	static home* factory(){
		return new home();
	}
};
int main(){
	home* h=home::factory();
	h->display();
	//home h1;
	//h1.display();
	return 0;
}
