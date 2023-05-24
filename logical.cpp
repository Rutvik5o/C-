#include<iostream>
using namespace std;

int main()
{
	
	int a,b,c;
	 cout<<"Enter Two Numbers";
	 cin>>a>>b>>c;
	 
	 cout<<((a>b) &&  (a>c))<<endl;
	 cout<<((a>=b) || (a<=b))<<endl;
	 cout<<!(a>b)<<endl;
	 return 0;
}
