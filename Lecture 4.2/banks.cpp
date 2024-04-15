#include<iostream>
using namespace std;

class A
{  
    protected :
    	
	int a,a1,a2;
	
	public :
			
		void SBI()
		{
			cout << "sbi intrest rate" << endl;
			cin >> a;
	    }
	    void BOB ()
		{
			cout << "bob intrest rate" << endl;
			cin >> a1;
	    }
	    void ICICI ()
		{
			cout << "icici intrest rate" << endl;
			cin >> a2;
	    }
	
};
class B : public A
{      
        public:
        	
        	void get()
        	{
        		SBI();
        		cout<< " sbi :"<<a  <<endl;
        	}
};
class c : public A
{      
    public:
	        
       	void get1()
       	{
       		BOB();
       		cout << " bob : "<< a1 << endl;
		}
};
class D : public A
{
    public:
    
	    void get2()
	    {
	    	ICICI();
	    	cout << "icici : " << a2 << endl;
		} 	
};

int main()
{

  S s1;
  s1.getter();
  B s2;
  s2.getter1();
  I s3;
  s3.getter2();

	return 0;
}