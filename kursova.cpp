#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	string Name;
	int EGN;
	int Daily_salary;
	int Days_worked;

	void Data() {				
		cout << "Name - "; cin >> Name;
		cout << "EGN - "; cin >> EGN;
		cout << "daily salary -"; cin >> Daily_salary;
		cout << "days worked -"; cin >> Days_worked;
	}

	Employee(string name, int egn, int daily_salary, int days_worked){     
        Name = name ;
        EGN = egn;                            
        Daily_salary = daily_salary;
		Days_worked = days_worked;
    }



};



int main(){
	Employee employeeArr[10]	;

int choice, i= 0;

cin >> choice;
switch(choice){
	case 1:

	//int arr[10];
	//Employee arr[10];

		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
}
