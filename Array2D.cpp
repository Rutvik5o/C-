#include<iostream>
using namespace std;
int main()
{
	

int i,j;

int a[2][2];

cout<<"Enter Array Elements\n";

for(i=0;i<=1;i++)
 { 
    for(j=0;j<=1;j++)
    {
    	cin>>a[i][j];
    
	}
 }
 
 cout<<"Your Array Elements\n";
 
for(i=0;i<=1;i++)
 { 
    for(j=0;j<=1;j++)
    {
    	cout<<a[i][j]<<ends;
	}
	cout<<endl;
 }
 return 0;
}
