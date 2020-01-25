#include <iostream>

using namespace std;

class Employee
{
private:
	char *myName_p;
public:
	Employee(char *name)
	{
		cout << "Employee::constructor\n";
		myName_p = new char(sizeof(strlen(name)));
		myName_p = name;
	}

	char* display()
	{
		return myName_p;
	}

	~Employee()
	{
		cout << "Employee::deconstructor\n\n";
		delete myName_p;
	}
};

class Company
{
private:
	char* name;
	Employee *myEmp_p;
public:
	Company(char* compName, Employee* emp)
	{
		cout << "Company::constructor\n";
		name = new char(sizeof(strlen(compName)));
		myEmp_p = emp;
	}
	~Company()
	{
		cout << "Company::deconstructor\n\n";
		myEmp_p = NULL;
	}
};

int main(void)
{
	cout << "\nExample of Aggregation Relationshipo \n";
	cout << "..........................................\n\n";
	{
		cout << "Here, an Employee-Jamie works for Company-TheDevTeam \n";
		Employee emp("Jamie");

		{
			Company comp("TheDevTeam", &emp);
		} // here Company object will be deleted, whereas Employee object is still there

		cout << "At this point Company gets deleted...\n";
		cout << "\nBut Employee-" << emp.display();
		cout << "is still there\n";

	} // here Employee object will be deleted


	return 0;
}