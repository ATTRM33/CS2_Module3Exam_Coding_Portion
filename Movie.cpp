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
	strm << obj.getName() << " " << obj.getDirector() << " " << obj.getCast() << " " << obj.getRunTime();
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