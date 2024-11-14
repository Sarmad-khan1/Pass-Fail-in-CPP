#include <iostream>
using namespace std;
int main()
{
	int marks[5];
	for(int i=0; i<5; i++){
		cout<<"Enter the marks of student "<<i+1<<": ";
		cin>>marks[i];
	}
	for(int x=0; x<5; x++)
	{
		string grade;
		if(marks[x]>15)
		{
			grade="Passed";
		}
		else
		{
			grade="Failed";
		}
		cout<<marks[x]<<": "<<grade<<endl;
	}
	
}