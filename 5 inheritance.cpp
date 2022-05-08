#include <iostream>
using namespace std;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;  //pravim virtualna funkciq AskForPromotion, vseki koito izpolzvam funkciqta AskForPromotion trqq da q implement-ne
};


class Employee :AbstractEmployee {		// za da polzvame funkciqta AskForPromotion, (:AbstractEmployee)
private:
	string Company;
	int Age;
protected:															//////////// napraihme protected
	string Name;
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

class Developer :public Employee {										// praim nov class Developer koito nasledqva clasa Employee | slagame public za da moje po dolu da ima dostap
public:
	string FavProgrammingLanguage;
	Developer(string name, string company, int age, string favProgrammingLanguage)				//praim constructor za clasa Developer
		:Employee(name, company, age)															// predavame promenlivite 
	{
		FavProgrammingLanguage = favProgrammingLanguage;
	}
	void FixBug() {																				// funkciq za testvane
		cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;				// getName() ako e public, Name - ako e protected
	}
};

class Teacher :public Employee {
public:
	string Subject;
	void PrepareLesson() {
		cout << Name << " is preparing " << Subject << " lesson" << endl;
	}
	Teacher(string name, string company, int age, string subject)						//praim constructor za clasa Teacher
		:Employee(name, company, age)														// predavame promenlivite 
	{
		Subject = subject;
	}
};

int main()
{
	Developer d = Developer("Ivan", "Boqdjiq", 20, "C++");										// farlqme danni
	d.FixBug();																		// vikame fukniqta za testvane
	d.AskForPromotion();

	Teacher t = Teacher("Jack", "Cool School", 35, "History");
	t.PrepareLesson();
	t.AskForPromotion();
}


