#include<iostream>
using namespace std;

/*void fun()
{
	 auto int a=10;
	 static int b=10;
	 cout<<a<<endl<<b<<endl;
	 ++a; ++b;
}

int main()
{
	 fun();
	 fun();
	 fun();
	 fun();
	 return 0;
}*/

void fun(int a,int b)
{
	a=100; b=200;
	cout<<a<<endl<<b<<endl;
}

int main()
{
	
	fun(100,500);
	 return 0;
}
