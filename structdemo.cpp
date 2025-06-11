#include<iostream>
using namespace std;
/*struct*/ class student{
		public:
		char* name;
		int age;
		void printer(){
		cout<< name << endl;
		cout<<  age << endl;
		}
	   };
int main(){
/*struct*/student stu;
	stu.name="Mohan";
	stu.age=30;
	stu.printer();
	/*cout << stu.name << endl;
	cout << stu.age << endl;*/
	return 0;
}
