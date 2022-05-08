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

    Employee(string name, string company, int age) {      // pravim constructor, i vuv nego slagame variables koito she izvikvame po dolu
        Name = name;
        Company = company;                                  // zadavame promenlivata ot classa, "Company" da e svarzano sas promenlivata vuv constructora "company"
        Age = age;
    }

};
int main()
{
    Employee employee1 = Employee("Ivan", "Boqdjiq", 25);                     // employee1 e obekt na class Employee | vikame constructora Employee i mu slagame stoinostite na promenlivite
    employee1.IntroduceYourself();                                            // izvikvame funkciqta za predstavqne

    Employee employee2 = Employee("John", "Amazon", 35);                        // praim vtori obekt (chovek) na classa Employee | i pak vikame constructora Employee i mu slagame stoinostite na promenlivite
    employee2.IntroduceYourself();
};