#include<iostream>
using namespace std;
class A{
	   public:
	   	 A(int a,int b)
	   	 { 
	   	   cout<<a<<endl<<b;
		}
};

int main()
{
	 A o(400,600);
	 return 0;
}
