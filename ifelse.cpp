#include<iostream>
using namespace std;
int main(){
	int x=10;
	// Nesting of if-else inside else block
	/*if(x>10){
		cout << "A" <<"\n";
	}else if(x<10){
		cout << "B" <<"\n";
	}else if(x!=10){
		cout <<"C" <<"\n";
	}else{
		cout <<"10" << endl;
	}*/
	// Nesting of if-else inside if block
	/*if(x>10){
		if(x<10){
			if(x!=10){
				if(x==10){
					cout <<"A"<<"\n";
				}else{
					cout <<"B"<<"\n";
				}
			}else{
				cout <<"C"<<"\n";
			}
		}else{
			cout<<"D"<<"\n";
		}
	}else{
		cout<<"E"<<"\n";
	}*/
	// another method to write if-else inside if block
	if(x==10)if(x==10)if(x==10)if(x!=10){
		cout<<"A"<<"\n";
	}else{
		cout<<"B"<<"\n";
	}else{
		cout<<"C"<<"\n";
	}else{
		cout<<"E"<<"\n";
	}else{
		cout<<"D"<<"\n";
	}

}

