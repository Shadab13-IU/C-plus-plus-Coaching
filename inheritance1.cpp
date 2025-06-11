#include<iostream>
using namespace std;
class parent{
	int x;
	public:
	int y;
	protected:
	int z;
	parent():x(10),y(20),z(30){}
};
class child:protected parent{
	public:
	void display(){
		cout<<this->y<<" "<<this->z<<endl;
	}
};
class grandchild:private child{
	public:
	void printer(){
		cout<<this->y<<" "<<this->z<<endl;
	}
};
/*class superchild:public grandchild{
	public:
	void show(){
		cout<<this->y<<" "<<this->z<<endl;
	}
};*/
int main(){
	/*child& ch=*(new child());
	ch.display();
	cout<<ch.y<<endl;*/
	//cout<<ch.x<<endl;
	//cout<<ch.y<<endl;
	//cout<<ch.z<<endl;
	grandchild* c=new grandchild();
	c->printer();
	/*superchild* s=new superchild();
	s->show();*/
	return 0;
}
