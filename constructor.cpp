#include<iostream>
using namespace std;
class Myclass{
	int x;
	float y;
	string name;
	}
	/*Myclass(){}*/
	Myclass(int a,float b,string c){
		x=a;
		y=b;
		name=c;
	}
	public:
	void printer(){
		cout<<"x "<<x<<"\n";
		cout<<"y "<<(float)y<<"\n";
		cout<<"name "<<name<<endl;
	}
};
int main(){
	Myclass* mp=new Myclass(2,3.5f,"khan");
	//Myclass m2(2,3.5f,"Shadab");
	mp->printer();
	//m2.printer();
	return 0;
}




