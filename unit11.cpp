#include<iostream.h>


void area(int);
void area(int,int);
void area(float);
void main()

{
	int r,l,b;
	float s;
	count<<"Enter Redius of Circle";
	cin>>r;
	area(r);
	
	cout<<"\n\nEnter Length of Rectangle:";
	cin>>l;
	count<<"Enter Breadth of Rectangle:";
	cin>>b;
	area(l,b);
	
	cout<<"\n\nEnter Side of Square:";
	cin>>s;
	area(s);
	
}
