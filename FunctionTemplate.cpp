#include<iostream>
using namespace std;

template<class A>

void print(A x, A y)
{
	 cout<<x<<endl<<y<<endl;
}

int main()
{
	print('a','b');
	print(10,20);
	print("ehy","noei");
	print(12.45,45.78);
//	print("hey",44);
	return 0;
}
