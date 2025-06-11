#include<iostream>
using namespace std;
class a{
	public:
	void dipslay(){
		cout<<"Display of a"<<endl;
	}
};
class b{
	public:
	virtual void show(){
		cout<<"Display of b"<<endl;
	}
};
class c{
	public:
	void print(){
		cout<<"Display of c"<<endl;
	}
};
class d:public a,public b{
};
class e:public b,public c{
};
class f:public d,public e{
};
int main(){
	f& ob=*(new e());
	ob.show();
	return 0;
}
