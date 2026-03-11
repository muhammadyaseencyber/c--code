#include<iostream>
using namespace std;
class Demo{
	private:
		int number;  // int data type
		float price; // float data type
		string name; // string data type 
		
		public:
			//constructor
			
			Demo(int n, float p, string nm){
				number = n;
				price = p;
				name = nm;
				cout<<"constructor called ! object created."<<endl;
				
			}
			//destructor
			~Demo(){
				cout<<"destructor called!"<<endl;
				cout<<"releasing memory of variables..."<<endl;
				cout<<"number = "<<number<<endl;
				cout<<"price = "<<price<<endl;
				cout<<"name = "<<name<<endl;
			}
};
int main(){
	Demo obj();
   return 0; 
}
