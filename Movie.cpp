#include "Movie.h"


Movie::Movie(std::string name, Person director, std::vector <Person> cast, int runTime) :
name(name), director(director), cast(cast), runtime(runTime) {

}
bool Movie::isLongMovie(int min) {
	if (min > 135) {
		return true;
	}
	else {
		return false;
	}
}

void Movie::addCastMembers(const Person& castMember) {
	cast.push_back(castMember);
}

std::ostream& operator<<(std::ostream& strm, Movie& obj) {
	strm << obj.getName() << " \n"
		<< obj.getDirector().getFirstName() << " " << obj.getDirector().getLastName() << " \n"
		<< "Cast: \n";
	for (Person p : obj.getCast())
		strm << p.getFirstName() << " " << p.getLastName() << "\n";
	strm << "Running Time: " << obj.getRunTime() << "\n";
	return strm;
}

std::string Movie::getName() {
	return name;
}

std::vector<Person> Movie::getCast() {
	return cast;
}

Person Movie::getDirector() {
	return director;
}

int Movie::getRunTime() {
	return runtime;
}