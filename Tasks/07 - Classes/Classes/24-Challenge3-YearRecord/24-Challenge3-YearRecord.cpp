#include <iostream>
#include <string>
using namespace std;

class StudentRecord
{
private:
	string studentFirstName;
	string studentLastName;
	string fullName;			//Calculated as: studentFirstName + " " + studentLastName
	int studentID;

	// Used to update the student full name property
	void updateFullName() {
		fullName = studentFirstName + " " + studentLastName;
	}

public:
	//Constructor
	StudentRecord(string firstName, string lastName, int ID) {
		studentFirstName = firstName;
		studentLastName = lastName;
		studentID = ID;
		updateFullName();
	}
	StudentRecord()
	{
	}

	//Display details about the student in the terminal, including ID and full name
	void display() {
		cout << studentID << " : " << fullName << endl;
	}

	// *********************** Getters *********************** 

	//Returns copy of full name (as a string) - First name, followed by a space, followed by Last name
	string getFullName()
	{
		return fullName;
	}

	//Returns a copy of the ID (as an integer)
	int getID()
	{
		return studentID;
	}

	// *********************** Setters *********************** 

	//Update the first name
	void updateFirstName(string firstName)
	{
		studentFirstName = firstName;
		updateFullName();
	}

	//Update the last name
	void updateLastName(string lastName)
	{
		studentLastName = lastName;
		updateFullName();
	}
};

class ModuleRecord
{
	string name = "";
	string subject = "COMP";
	int code = 0;
	unsigned int credits = 20;
	unsigned int semesters = 1;

public:
	ModuleRecord(string nam, string subj, int cod, unsigned int cred, unsigned int sem);

	ModuleRecord(string nam, int cod);

	ModuleRecord()
	{
	}

	string moduleSummary();

	int totalCredits();
};

class YearRecord {
	unsigned int noStudents = 0;
	unsigned int noModules = 0;
	StudentRecord StudRecords[10];
	ModuleRecord ModRecords[10];

public:
	YearRecord();
	void addStudent(StudentRecord newStudent) {
		StudRecords[noStudents] = newStudent;
		noStudents++;
	}
	void addModule(ModuleRecord newModule) {
		ModRecords[noModules] = newModule;
		noModules++;
	}
	int isStudInYear(StudentRecord Student) {
		for (int i = 0; i < sizeof(StudRecords); i++)
		{
			if (StudRecords[i].getID() == Student.getID())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
};

int main()
{
	StudentRecord Dennis("Dennis", "Toader", 2);
	ModuleRecord COMP1000("COMP", 1000);

	YearRecord Stage1;
	Stage1.addStudent(Dennis);
	Stage1.addModule(COMP1000);
	cout << "Should be 1: " << Stage1.isStudInYear(Dennis) << endl;
}

ModuleRecord::ModuleRecord(string nam, string subj, int cod, unsigned int cred, unsigned int sem) {
	this->name = nam;
	this->subject = subj;
	this->code = cod;
	this->credits = cred;
	this->semesters = sem;
}

ModuleRecord::ModuleRecord(string nam, int cod) {
	this->name = nam;
	this->code = cod;
}

string ModuleRecord::moduleSummary() {
	return name + " " + subject + " " + to_string(code) + " " + to_string(credits) + " " + to_string(semesters);
}

int ModuleRecord::totalCredits() {
	return credits * semesters;
}

YearRecord::YearRecord()
{
}
