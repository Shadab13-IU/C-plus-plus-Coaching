#include<iostream>
using namespace std;
class Myclass{
	int x;
	int y;
	public:
	//Myclass():x(10),y(20){}
	Myclass(int a,int b):x(a),y(b){
		x++;
		y++;
	}
	void display(){
		cout<<"x= "<<x<<"y= "<<y<<endl;
	}
};
int main(){
	Myclass m(5,7);
	m.display();
	return 0;
}
