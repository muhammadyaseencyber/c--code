#include<iostream>
using namespace std;
class student{
	private:
	int roll_no;
	string name;
	
	public:
		
		void input(){
			cout<<"enter roll number:";
			cin>>roll_no;
			cout<<"enter name:";
			cin>>name;
		}

void display(){
	cout<<"roll number:"<<roll_no<<endl;
	cout<<"name:"<<name<<endl;
    }		
};

int main(){
	student s;
	s.input();
	s.display();
	return 0;
}
