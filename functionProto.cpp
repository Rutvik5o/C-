#include<iostream>
using namespace std;

int sum(int ,int);// formal parameter

  int main()
  {
    int num1,num2;
    cout<<"Enter first Number:"<<endl;
    cin>>num1;
    cout<<"Enter Second Number:"<<endl;
    cin>>num2;  // actual parameter

    cout<<"The sum is:"<<sum(num1,num2); 
    return 0;
  }

  int sum(int a,int b)
  {
     int c=a+b;
     return c;
  }
