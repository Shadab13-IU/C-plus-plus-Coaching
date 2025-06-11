#include<iostream>
using namespace std;
class Myclass{
	int x;
	int y;
	Myclass(int a,int b){
		x=a;
		y=b;
	}
	public:
	void printer(){
		cout<<"x= "<<x<<"y= "<<y<<"\n";
	}
	static Myclass* factory(int n,int m){
		static Myclass* mr=NULL;
		if(mr==NULL){
			mr=new Myclass(n,m);
		}
		return mr;
	}
};
int main(){
	Myclass* mp=Myclass::factory(2,5);
	mp->printer();
	cout<<"\n";
	Myclass* mpp=Myclass::factory(10,20);
	mpp->printer();
	return 0;
}
