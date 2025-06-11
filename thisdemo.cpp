#include<iostream>
using namespace std;
class Bean{
	int x;
	public:
	 void setx(int );/*{
		this->x=y;
	}*/
	 int getx();/*{
		return this->x;
	}*/
};
void Bean::setx(int x){
	(*this).x=x;	//same	//this->x=y;
}
int Bean::getx(){
	return 	(*this).x;	//same	//this->x;
}
int main(){
	Bean bean;	//=new Bean();
	bean.setx(10);
	cout<<bean.getx()<<endl;
	return 0;
}
