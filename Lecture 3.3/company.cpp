#include<iostream>
using namespace std;

	//- comp_id
	//- comp_name
	//- comp_staff_quantity
	//- comp_revenue (per year)
	//- comp_import_raw_diamonds (no. of raw diamonds
	//imported per year)
	//- comp_export_diamonds (no. of diamonds per year)
	//- comp_ceo (name of CEO of the company)

class company
{
	int id;
	char name[100];
	int staff_quantity;
	int comp_revenue;
	int import_diamonds;
	int export_diamonds;
	char ceo[100];
	
	public :
		
		void getter()
		{
			cout << "company id : " << id << endl;
			cout << "company name : " << name << endl;
			cout << "company staff quantity : " << staff_quantity << endl;
			cout << "company revenue : " << comp_revenue << endl;
			cout << "company import diamonds : " << import_diamonds << endl;
			cout << "company ceo name : " << ceo << endl;
		}
		
		company()
		{
			cout << "enter company id : ";
			cin >> id;
			cout << "enter company name : ";
			cin >> name;
			cout << "enter company staff quantity : ";
			cin >> staff_quantity;
			cout << "enter company revenue : ";
			cin >> comp_revenue;
			cout << "enter company import diamonds : ";
			cin >> import_diamonds;
			cout << "enter company ceo name : ";
			cin >> ceo;
			cout << endl;
		}
		
};

int main()
{
	company c1,c2;
	
	c1.getter();
	cout << endl;
	c2.getter();
}