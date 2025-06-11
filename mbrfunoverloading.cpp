#include<iostream>
using namespace std;
class odemo{
	public:
	int add(int x,int y){
		return x+y;
	}
	int add(int x,int y,int z){
		return x+y+z;
	}
};
int main(){
	odemo od;
	cout<<od.add(2,5)<<endl;
	cout<<od.add(7,1,2)<<endl;
	return 0;
}
