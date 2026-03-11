#include<iostream>
using namespace std;
class school{
	
	public:
		int roll_number;
		string name;
		float gpa;
		
		void show()
		{
			cout<<"enter the roll_number of school"<<endl;
			cout<<"enter the name of school "<<endl;
			cout<<"enter the gpa of school "<<endl;
		}
};
int main()
{
	school y1;
	cout<<"enter the roll_number of school "<<endl;
	cin>>y1.roll_number;
	cout<<"enter the name of school "<<endl;
	cin>>y1.name;
	cout<<"enter the gpa of school "<<endl;
	cin>>y1.gpa;
	
}
	

