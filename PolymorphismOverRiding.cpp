#include<iostream>
using namespace std;

class A
{
	  /*virtual*/ public:
		virtual void person()
		 {
		 	cout<<"Good Morning"<<endl;
		 }
};

class B: public A
{
	 public:
	 	 void person()
	 	 {
	 	 	cout<<"Good Night"<<endl;
		  }
};

int main()
{
	
	A *p;
	B obj;
	p=&obj;
	p->person();
	return 0;
	/* B obj;
	 obj.person();
	 obj.A :: person();
	 return 0;*/
}
