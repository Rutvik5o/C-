#include<iostream>
using namespace std;
int a; // external 

int main()
{ 
   int b; //auto
   static int c;// static
   register int d; //register
   
  
     cout<<a<<endl;
     cout<<b<<endl;
     cout<<c<<endl;
     cout<<d<<endl;
     
     return 0;
}
