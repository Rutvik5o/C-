#include<iostream>
using namespace std;

int main()
{
	 int age;
	 cout<<"Enter Your Age:\n";
	 cin>>age;
	 
	 if(age>=18)
	 goto Vote;
	 	else 
	 goto NotVote;
	 	
	 	
	 	Vote:
	 		cout<<"You Are Eligible For Vote\n";
	 		return 0;
	 		
	 	NotVote:
	 		cout<<"You Are Not Eligible For Vote\n";
	 		
	 	return 0;
}
