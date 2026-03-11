#include<iostream>
using namespace std;
class cyber{
	private:
	int number1,  number2;
	public:
		cyber(int n1, int n2){
			int number1=n1;
			int number2=n2;
			
		}
		void display(){
			cout<<"enter the first number = "<<number1<<endl;
			cout<<"enter the 2nd number = "<<number2<<endl;
		}
};
int main(){
	cyber st1(12,34);
	st1.display();
	
}
	
	
