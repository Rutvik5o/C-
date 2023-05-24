#include<iostream>
using namespace std;

int main()
{ 
    int a,b,ch;
    int add,sub,Mul,Div;
    cout<<"Enter Two Numbers:\n";
    cin>>a>>b;
    cout<<"Enter Choice:\n";
    cin>>ch;
    if(ch==1)
    {
    	add=a+b;
    	cout<<add;
    	
	}
	
	else if(ch==2)
	{
		
		sub=a-b;
		cout<<sub;
	}
	
	else if(ch==3)
	{
		Mul=a*b;
		cout<<Mul;
	}

    else if(ch==4)
    {
    	Div=a/b;
    	cout<<Div;
	}
	
	else
	{
		cout<<"Invalid Task";
	}

}

