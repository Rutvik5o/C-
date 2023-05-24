#include<iostream>
using namespace std;

struct stu
{
	 int marks;
	 float avg;
	 double salary;
};

union stu2
{
	int marks;
	float avg;
	double salary;
};

int main()
{
	 struct stu s;
	 union stu2 s2;
	 
	 cout<<"Structure Size="<<sizeof(s)<<endl;
	 cout<<"Union Size="<<sizeof(s2);
	 return 0;
}
