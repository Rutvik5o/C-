#include<iostream>
using namespace std;

int main()

{
	 int a,b,c;
	 cout<<"Enter Three Number:\n";
	 cin>>a>>b>>c;
	 
	 if(a>b)
	 {
	 	 if(a>c)
	 	 {
	 	 	cout<<"a="<<a;
		 }
		 else
		 {
		 	cout<<"c="<<c;
		 }
	 }
	 
	 else
	 {
	 	 if(b>c)
	 	 {
	 	 	cout<<"b="<<b;
		 }
		 else
		 {
		 	cout<<"c="<<c;
		 }
	 }
	 return 0;
	 
}
