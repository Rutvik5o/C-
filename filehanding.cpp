#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	 ofstream NF("C:\\Users\\Naisarg\\Desktop\\hey.txt");
	 
	 cout<<"File created";
	 NF<<"welcome to our programming world ";
	 NF.close();
	 return 0;
}
