#include<iostream>

namespace A
{
	 int a;
	  void print()
	  {
	  	a=10;
	  	std :: cout<<a;
	  }
	  
}

namespace B
{
	int a;
	 void print()
	 {
	 	 a=20;
	 	 std :: cout<<a;
	 	 
	 }
}

int main()
{
	 A :: print();
	 B :: print();
	 return 0;
}
