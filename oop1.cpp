#include<iostream>
using namespace std;
class student{
	public:
		
			string name;
	int age;
	
	void show(){
		cout<<"the name of student"<<name<<endl;
		cout<<"the age of student"<<age<<endl;
	}
	
};
int main(){
	
student t1;
cout<<"enter the name of student"<<endl;
cin>>t1.name;

cout<<"enter the age of student"<<endl;
cin>>t1.age;
t1.show();
return 
0;
	
}

	
