// This is procedural program not oops
//#include<iostream>
#include<cstdio>
using namespace std; // if we will not mention this  then we have to write std:: before cout and endl
int main(){
	int age;
	char gender;
	/*cout << "Enter age and gender:";
	cin >> age >> gender;
	cout<<"Your age is "<<age<<" \nyour gender is "<<gender<<endl;*/
	printf("Enter your age and gender:");
	scanf("%d %c",&age,&gender);
	printf("Your age is %d and your gender is %c \n",age,gender);
	cerr<<"This is error stream\n";
	return 0;
}

