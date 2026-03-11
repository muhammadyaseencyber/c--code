 #include<iostream>
using namespace std;
class student{
	public:
	int roll_no;
	string name;
	float gpa;
	
	
	void show(){
		cout<<"enter the roll_no of students"<<endl;
		cout<<"enter the name of student"<<endl;
		cout<<"enter the gpa of student"<<endl;
		
	}
};
int main(){
	student t1;
	cout<<"enter the roll_no of student 1"<<endl;
	cin>>t1.roll_no;
	cout<<"enter the name of student 1"<<endl;
	cin>>t1.name;
	cout<<"enter the gpa of student 1"<<endl;
	cin>>t1.gpa;
	
	student t2;
		cout<<"enter the roll_no of student 2"<<endl;
	cin>>t2.roll_no;
	cout<<"enter the name of student 2"<<endl;
	cin>>t2.name;
	cout<<"enter the gpa of student 2"<<endl;
	cin>>t2.gpa;
	return 0;
	
}
