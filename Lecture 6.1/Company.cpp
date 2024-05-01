#include<iostream>
#include<string>
using namespace std;

class Employee
{
	protected :
	
	string Company_name;
	public :
	
	void myAccess()
	{
		cin.ignore();
		cout << "Enter the Company Name :";
		getline(cin,Company_name);
	
		cout << "Company Name :" << Company_name << endl;
			
	}	
};

class Manager : public Employee
{
	 protected :
	 	int emp_salary;
	 	int total_staff;
	 	int annual_r;
	 	bool can_tarminate;
	 	
	 	public:
	 		void myAccess()
	 		{
			 	cout << "Enter the Company Name :";
				getline(cin,Company_name);
	
		
	 			cout << "Enter Employee salary :";
	 			cin >> emp_salary;
	 			
	 			cout << "Enter total staff :";
	 			cin >> total_staff;
	 			
	 			cout << "Enter Annual revenue :";
	 			cin >> annual_r;
	 			
	 			cout << "Enter can terminate :";
	 			cin >> can_tarminate;
	 			cout << endl << endl; 
	 			
	 			
	 			cout << "Company Name :" << Company_name << endl;
	 			cout << "Employee salary :" << emp_salary << endl ;
	 			cout << "Total staff :" << total_staff << endl;
	 			cout << "Annual revenue :" << annual_r << endl;
	 			cout << "can terminate :" << can_tarminate << endl;
			}
		
};

class Admin : public Manager
{
 	protected :
	 
	 int man_salary;
	 
	 public :
	 	void myAccess()
	 	{
			cout << "Enter the Company Name :";
			getline(cin,Company_name);
			
				cout << "Enter Employee salary :";
	 			cin >> emp_salary;
	 			
	 			cout << "Enter total staff :";
	 			cin >> total_staff;
	 			
	 			cout << "Enter Annual revenue :";
	 			cin >> annual_r;
	 			
	 			cout << "Enter can terminate :";
	 			cin >> can_tarminate;
			
				cout << "Enter Manager salary :";
			 	cin >> man_salary;
				cout << endl << endl; 
				
				
			 	cout << "Company Name :" << Company_name << endl;
				cout <<"Manager salary :" << man_salary << endl;
				cout << "Employee salary :" << emp_salary << endl ;
	 			cout << "Total staff :" << total_staff << endl;
	 			cout << "Annual revenue :" << annual_r << endl;
	 			cout << "can terminate :" << can_tarminate << endl;
	 	}	
};

int main()
{
	Admin a1;
	a1.myAccess();
	return 0;
}