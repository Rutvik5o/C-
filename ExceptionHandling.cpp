#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	cout<<"Executing starting....."<<endl;
	int a,b,c;
	
	cout<<"Enter Two Numbers"<<endl;
	cin>>a>>b;
	
	try{
		if(b==0)
		throw b;
		c=a/b;
		cout<<"Result:"<<c;
	}
	
	catch(int x)
	{
		 cout<<"Can't Divided By"<<ends<<x;
	}
  cout<<endl<<"Execution Ended...";
  return 0;
}
