#include<iostream>
using namespace std;

class A{
	 private:
	 	      int a;
	 protected:
	 	    int b;
	 public:
	 	     int c;
}; 

int main()
{
	 A obj;
	 
	// obj.a=10;
	 //obj.b=20;
	 obj.c=30;
	 
     // cout<<a;
     // cout<<b;
      cout<<obj.c;
	 return 0;
}
