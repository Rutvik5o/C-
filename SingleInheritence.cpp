#include<iostream>
using namespace std;

class Dad
{
	protected:
		int amount;
		 
    public:
    	void input()
    	{
    		amount=10000;
		}
};

class Son: public Dad
{
	 int money;
	 
	 public:
	 	 void show()
	 	 {
	 	 	money=57834;
	 	 	cout<<"Son:"<<money<<endl;
	 	 	cout<<"Dad:"<<amount<<endl;
	 	 	
		  }
};

int main()
{
	Son s;
	s.input();
	s.show();
	return 0;
}
