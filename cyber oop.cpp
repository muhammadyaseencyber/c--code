#include<iostream>
using namespace std;
class cyber{
	public:
		string name;
		int age;
		void show(){
			cout<<"the name of cyber:"<<name<<endl;
			cout<<"the age of cyber:"<<age<<endl;
			
		}
};
int main()
{
	cyber t1;
	cout<<"enter the name of cyber:"<<endl;
	cin>>t1.name;
	cout<<"enter the age of cyber:"<<endl;
	cin>>t1.age;
	t1.show();
	return 0;
	
}
