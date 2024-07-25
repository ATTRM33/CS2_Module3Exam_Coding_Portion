#include "Person.h"


Person::Person(){
}

Person::Person(std::string fName, std::string lName, std::string dob) :
firstName(fName), lastName(lName), dateOfBirth(dob) {

}

std::string Person::getFirstName() {
	return firstName;
}
std::string Person::getLastName() {
	return lastName;
}
std::string Person::getDob() {
	return dateOfBirth;
}