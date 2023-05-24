#include<iostream>
using namespace std;

class akhilesh;
class ankit
{
	private:
		 int a;
		 
	public: 
	     void ihave()
	     {
	     	 a=10;
		 }
		friend void ankush(ankit p, akhilesh p2);
		
};

class akhilesh
{
	private:
		int b;
	public:
		  void ihave()
		  {
		  	 b=10;
		  }
		  
	  friend void ankush(ankit p, akhilesh p2);
	  
};

void ankush(ankit p,akhilesh p2)
{
	 int c;
	 c=p.a+p2.b;
	 cout<<c;
}

int main()
{
	ankit a;
	a.ihave();
	akhilesh a2;
	a2.ihave();
	ankush(a,a2);
	return 0;
}
