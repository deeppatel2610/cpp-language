#include<iostream>
using namespace std;
class A
{
	public:
		int a;
	void seta()
	{
		cout << "enter the num 1 :";
		cin >> a;
	}
};
class B : public A
{
	protected:
		int b;
	void setb()
	{
		seta();
		cout << "enter the num 2 :";
		cin >> b;
	}
};
class C : public A
{
	protected:
		int c;
	void setc()
	{
		cout << "enter the num 3 : ";
		cin >> c;
	}
};
class D : public B,C
{
	public :
		int d;
		void setd()
		{
			setb();
			setc();
			cout << "enter the num4:";
			cin >> d;	
		}
		void get()
		{
			cout << "sum:" << B::a*b*c*d;	
		}
};
main()
{
	D d1;
	d1.setd();
	d1.get();
}