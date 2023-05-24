#include<iostream>
using namespace std;

class A{
	int count;
	 public:
	 	A()
	 	{
	 		 cout<<"object"<<++count<<"created"<<endl;
	 		 
		 }
		 ~A()
		 {
		 	cout<<"object"<<count--<<"Deallocated"<<endl;
		 }
};

int main()
{ 
   A obj,obj2;
   return 0;
}
