#include<iostream>
using namespace std;
class shape
{
  public:
  int w,h;
  void set()
  {
  	cout << "Enter the width : ";
  	cin >> w;
  	cout << "Enter the height : ";
  	cin >> h;
  	
  }		
}; 
class triangle : public shape
{
	 public:
	 	int An;
		 void get1()
		 {
			An=(w*h)/2;
		 	cout<<"Area of Triangle is:"<<An<<endl;
		 }
	
};
class rectangle : public shape
{
    public:
	int a;

	void get2()
	{
		a=(w*h);
		cout << "Area of Rectangle is : " << a << endl;
		}	
};
main()
{
	rectangle r1;
	triangle t1;
	r1.set();
	r1.get2();
	t1.set();
	t1.get1();
	
}