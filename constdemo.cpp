#include<iostream>
using namespace std;
class constdemo{
	public:
	int x;
	constdemo():x(10){}
	void display()const{
		cout<<"x= "<<x<<endl;
		x++;
		cout<<"x= "<<x<<endl;
	}
};
int main(){
	constdemo c;
	c.display();
	return 0;
}
