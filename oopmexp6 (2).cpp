#include<bits/stdc++.h>
using namespace std;

class cs1
{	
    public:
    void fun1()
	{
	cout<<"\n\tfirst function called here !\n";
	}
};

class cs2
{	
    public:
    void fun2()
	{
	cout<<"\tSecond function called here !\n";
	}
};

class cs3 :public cs2,public cs1
{	
    public:
    void fun3()
	{
	cout<<"\tThird function called here !\n";
	}
};

int main()
{
	cout<<"\tStudent Name- Tushar Gawhade \n";
	cout<<"\tEnroll no.- 0832CS221213\n";
	cs3 o;
	o.fun1();
	o.fun2();
	o.fun3();
	return 0;
}
