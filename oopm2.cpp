#include<iostream>
using namespace std;

class note
{
	static int num;
	public :
		static int fun()
		{
			return num;
		}
};
int note::num=50;
int main()
{
	cout<<"\n   Implementation of static data member !!";
	cout<<"\n   Name - Yash Lade \n";

	cout<<"\n   The value of num is "<<note::fun();
}
