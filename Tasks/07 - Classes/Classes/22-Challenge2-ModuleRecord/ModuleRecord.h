#pragma once
#include <iostream>
#include <string>
using namespace std;

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

	string moduleSummary();

	int totalCredits();
};

