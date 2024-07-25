#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
private:
	std::string firstName;
	std::string lastName;
	std::string dateOfBirth;

public:
	Person();
	Person(std::string fName, std::string lName, std::string dob);
	std::string getFirstName();
	std::string getLastName();
	std::string getDob();
};


#endif // !PERSON_H



