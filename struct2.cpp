#include<iostream>
using namespace std;
typedef struct student{
	void display();
}student;
void student::display(){
	cout<<"Display"<<endl;
}
typedef struct teacher:student{
	void show();
}teacher;
void teacher::show(){
	cout<<"show"<<endl;
}
int main(){
	//student stu;
	//stu.display();
	teacher t;
	t.display();
	t.show();
	return 0;
}
