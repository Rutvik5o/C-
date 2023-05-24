#include<iostream>
using namespace std;

class myBank
{
	 private:
	 	int atmPIN,Balance;
	
	 public:
	 	string bName,IFSC;
	 	int AccNum;
	 	
	void input()
	{
		atmPIN=7844;
		Balance=5848358;
		bName="xyz";
		IFSC="5jfhsj5";
		AccNum=4853953;
	}
	
	void output()
	{
		cout<<"My Bank Details:"<<endl;
		cout<<atmPIN<<endl;
		cout<<Balance<<endl;
		cout<<bName<<endl;
		cout<<IFSC<<endl;
		cout<<AccNum<<endl;
	}
};

int main()
{
	 myBank m;
	 m.input();
	 m.output();
	 
	 cout<<"SomeOne Trying To Access Details.."<<endl;
	 //cout<<m.atmPIN<<endl; //Not Acessable
	 //cout<<m.Balance<<endl; // Not Acessable
	 cout<<m.bName<<endl;
	 cout<<m.IFSC<<endl;
	 cout<<m.AccNum<<endl;
	 return 0;
	 
	 
}

