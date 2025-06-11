#include<iostream>
using namespace std;
class staticdemo{
	public:
	static void printer();
};
void staticdemo::printer(){
	cout<<"Printer function\n";
}
int main(){
	staticdemo s;
	s.printer();
	return 0;
}
