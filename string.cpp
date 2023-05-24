#include<iostream>
#include<string.h>
using namespace std;

int main()
{

char str[]="xyz";
cout<<str<<endl;

int r=strlen(str);
cout<<r<<endl;

char str1[]="Good";
char str2[]="Morning";
strcat(str1,str2);
cout<<str1<<endl;

char str3[]="Welcome";
char str4[10];

strcpy(str4,str3);
cout<<str4;
return 0;
}

