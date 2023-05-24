#include<iostream>
using namespace std;

class A
{
	protected:
		int a,b;
	
	public:
		 void input()
		 {
		 	cout<<"Enter Two Numbers: "<<endl;
		 	cin>>a>>b;
		 }
};

class B:public A

{
	int c;
	
	public:
		 void add()
		 {
		 	 c=a+b;
		 	 cout<<"Addition "<<c<<endl;
		 }


          void sub()
                   {
                      	c=a-b;
                     	cout<<"Subtraction "<<c<<endl;
	
                }
};

class c:public B
{
	 int c;
	 public:
	 	
	 	void multi()
	 	{
	 		 c=a*b;
	 		 cout<<"Multiplication "<<c<<endl;
	 		 
		 }
		 
		 void div()
		 {
		 	c=a/b;
		 	cout<<"Divison "<<c<<endl;
		 }
};

int main()
{
	c obj;
	obj.input();
	obj.add();
	obj.sub();
	obj.multi();
	obj.div();
	
	return 0;
}
