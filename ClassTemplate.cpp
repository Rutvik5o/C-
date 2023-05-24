#include<iostream>
using namespace std;

template<class A>
class print
{
	 public:
	 	print(A x, A y)
	 	{
	 		 cout<<x<<endl<<y<<endl;
	 		 
		 }
};

int main()
{
	//print <int> obj(10,19);
	print <double> obj(1024.45,488.45);
	return 0;
}
