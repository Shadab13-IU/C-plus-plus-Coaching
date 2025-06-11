#include<iostream>
using namespace std;
int main(){
	int x;
	cout << "Enter Number:" ;
	cin >> x;
	/*if((x&1)==0){
		cout << "Even number\n";
	}else{
		cout << "Odd number\n";
	}*/
	/*int count=0;
	while(x!=0){
		if((x&1)==1)count++;
		x=x>>1;
	}
	if(count==1){
		cout << "Nuber is in power of 2\n";
	}
	else{
		cout << "Number is not of power of 2" << endl;
	}
	if((x&(x-1))==0){
		cout <<"Number is in power of 2\n";
	}else{
		cout << "Number isn't in power of 2\n";
	}*/
	// To find number of 1s
	int count=0;
	while(x!=0){
		count++;
		x&=x-1; //x=(x&(x-1)) compound assignment operator
 	}
	cout<< "Number of 1s=" << count <<"\n";
	return 0;
}

