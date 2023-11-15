#include "ModuleRecord.h"

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