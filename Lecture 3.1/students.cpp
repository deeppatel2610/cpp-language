#include<iostream>
using namespace std;

//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college

class Student
{
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	char email[100];
	char collage[100];
	
	public :
		void input()
		{
			cout << "student id : ";
			cin >> id;
			cout << "student name : ";
			cin >> name;
			cout << "student age : ";
			cin >> age;
			cout << "student course : ";
			cin >> course;
			cout << "student city : ";
			cin >> city;
			cout << "student email : ";
			cin >> email;
			cout << "student collage : ";
			cin >> collage;
			cout << endl << endl;
		}
		
		void output()
		{
			cout << "student id : " << id << endl;
			cout << "student name : " << name << endl;
			cout << "student age : " << age << endl;
			cout << "student course : " << course << endl;
			cout << "student city : " << city << endl;
			cout << "student email : " << email << endl;
			cout << "student collage : " << collage << endl << endl;
		}
};

int main()
{
	Student s1,s2,s3,s4,s5;
	
	s1.input();
	s2.input();
	s3.input();
	s4.input();
	s5.input();
	
	s1.output();
	s2.output();
	s3.output();
	s4.output();
	s5.output();
	
	return 0;
}