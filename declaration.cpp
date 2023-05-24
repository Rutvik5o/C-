#include<iostream>
using namespace std;
int b=20; // global declaration 

int main()

{
	 
	 int a=10;// local declaration 
	 static int c=20; // static local declaration 
	 
	 cout<<a<<" "<<b<<" "<<c;
	 return 0;
}
