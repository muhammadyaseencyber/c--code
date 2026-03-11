#include<iostream>
using namespace std;
class result{
	
	private:
		int sub1, sub2, sub3;
		int total;
		float percentage;
		
		public:
			void show(){
				cout<<"enter marks of subject 1:"<<endl;
				cin>>sub1;
				
				cout<<"enter marks of subject 2:"<<endl;
				cin>>sub2;
				
				cout<<"enter marks of subject 3:"<<endl;
				cin>>sub3;
				
			}
			void calculate(){
				total=sub1+sub2+sub3;
				percentage=total/3;
				
			}
			void display(){
				cout<<"ntotal marks ="<<total<<endl;
				cout<<"percentage ="<<percentage<<"%"<<endl;
				
				if (percentage>=80)
				cout<<"grade = a+"<<endl;
				else if (percentage >=70)
				cout<<"grade = a"<<endl;
				else if (percentage >=60)
				cout<<"grade =b"<<endl;
				else if (percentage>=50)
				cout<<"grade=c"<<endl;
				else
				cout<<"grade = fail"<<endl;
			}
		
};

int main()
{
	result r;
	r.calculate();
	r.display();
	return 0;
}
