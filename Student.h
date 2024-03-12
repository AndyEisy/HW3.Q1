#pragma once
#include "Person.h"
#include <string>
using namespace std;



class Student : public Person
{
public:
	Student(string first, string last, int day, int month,
		int year, int credits)
		: Person(first, last, day, month, year), num_credits(credits) {}

	int getNumCredits() { return num_credits; }
	void addCredits(int credits) { num_credits += credits; }

private:
	int num_credits;

};

class GradStudent : public Student {
public:
	GradStudent(string first, string last, int day, int month,
		int year, int credits)
		: Student(first, last, day, month, year, credits) {}
	
	bool canGraduate() { return getNumCredits() >= 30; }
};

class UndergradStudent : public Student {
public :
	UndergradStudent(string first, string last, int day, int month,
		int year, int credits)
		: Student(first, last, day, month, year, credits) {}

	bool canGraduate() { return getNumCredits() >= 120; }
};
