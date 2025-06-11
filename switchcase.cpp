#include<iostream>
using namespace std;
int main(){
	char x;
	cout<<"Enter Alphabet:";
	cin>>x;
	switch(x){
		case 65:
			cout <<"A"<<"\n";
			break;
		case 66:
			cout<<"B"<<"\n";
			break;
		case 67:
			cout<<"C"<<"\n";
			break;
		default:
			cout<<"Enter correct value"<<"\n";
	}
	return 0;
}
