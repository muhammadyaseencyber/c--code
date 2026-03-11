#include<iostream>
using namespace std;
 class student {
 	private:
 		int numb1,numb2;
 		public:
 		student (int n1,int n2){
 		numb1=n1;
		 numb2=n2;	
 		
		 }
		 void display(){
		 		cout<<"the first student number1"<<numb1<<endl;
		 cout<<"the first student number2"<<numb2<<endl;
		 	
		 }	
 };
 int main ()
 {
 	student std(10,20);
 	std.display();
 	return 0;
 	
 }
