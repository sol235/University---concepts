#include <iostream>
using namespace std;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;  //pravim virtualna funkciq AskForPromotion, vseki koito izpolzvam funkciqta AskForPromotion trqq da q implement-ne
};


class Employee :AbstractEmployee {		// za da polzvame funkciqta AskForPromotion, (:AbstractEmployee)
private:
	string Name;
	string Company;
	int Age;
public:
	void setName(string name) {		  //setter for Name // ideqta  e promenlivite po gore da sa private, a tezi funkciiq da sa public i da minavame prez tqh
		Name = name;
	}
	string getName() {				  //getter for Name
		return Name;
	}
	void setCompany(string company) { //setter2 for Company
		Company = company;
	}
	string getCompany() {			  //getter2 for Company
		return Company;
	}
	void setAge(int age) {			  //setter3 for age
		if (age >= 18)					// proverqvame  dali choveka e po golqm ot 18 godini
			Age = age;
	}
	int getAge() {                    //getter3 for age
		return Age;
	}

	void IntroduceYourself() {				 // pravim funkciq za predstavqne
		cout << "Name - " << Name << endl;
		cout << "Company - " << Company << endl;
		cout << "Age -" << Age << endl;
	}
	Employee(string name, string company, int age) {      // pravim constructor, i vuv nego slagame variables koito she izvikvame po dolu
		Name = name;
		Company = company;								  // zadavame promenlivata ot classa, "Company" da e svarzano sas promenlivata vuv constructora "company"
		Age = age;
	}
	void AskForPromotion() {									// implementing funkciqta AskForPromotion
		if (Age > 30)
			cout << Name << " got promoted!" << endl;
		else
			cout << Name << " Sorry no promotion for you" << endl;
	}
};
int main()
{
	Employee employee1 = Employee("Ivan", "Boqdjiq", 25);        // employee1 e obekt na class Employee | vikame constructora Employee i mu slagame stoinostite na promenlivite
	Employee employee2 = Employee("John", "Amazon", 35);			// praim vtori obekt (chovek) na classa Employee | i pak vikame constructora Employee i mu slagame stoinostite na promenlivite

	employee1.AskForPromotion();								// izvikvame fukniqta da proveri za promotion
	employee2.AskForPromotion();
};


