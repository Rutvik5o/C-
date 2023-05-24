#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	 string str;
	 ifstream NF("C:\\Users\\Naisarg\\Desktop\\hey.txt");
	 
	 while(getline(NF,str))
	 {
	 	 cout<<str<<endl;	 
	 }
	 NF.close();
	 
	 return 0;
}

