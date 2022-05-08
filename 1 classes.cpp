#include <iostream>
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() {                 // pravim funkciq za predstavqne
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age -" << Age << endl;
    }
};
int main()
{
    Employee employee1;                     // employee1 e obekt na class Employee
    employee1.Name = "Ivan";
    employee1.Company = "boqdjiq";            // zadavame stoinost na promenlivite
    employee1.Age = 20;
    employee1.IntroduceYourself();            // izvikvame funkciqta za predstavqne

    Employee employee2;                        // praim vtori obekt (chovek) na classa Employee
    employee2.Name = "John";
    employee2.Company = "Amazon";            // zadavame stoinost na promenlivite za vtoriq chovek
    employee2.Age = 35;
    employee2.IntroduceYourself();
};