#include<iostream>
using namespace std;

class thief
{
	 private:
	 	    string name,address;
	 	    int mob;
	 
	 public:
	 	   void input()
	 	   {
	 	   	 name="xyz";
	 	   	 address="old address implied";
	 	   	 mob=9683583853;
			}
			
			void output()
			{
				cout<<name<<endl;
				cout<<address<<endl;
				cout<<mob<<endl;
			}
			
			
};

class police:public thief
{
	
};

int main()
{
	thief a;
	a.input();
	a.output();
	
	return 0;
}
