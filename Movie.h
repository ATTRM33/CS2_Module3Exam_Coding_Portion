#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <vector>
#include <iostream>
#include "Person.h"

class Movie
{public:
	std::string name;
	Person director;
	std::vector <Person> cast;
	int runtime;
public:
	Movie(std::string name, Person director, std::vector <Person> cast, int runTime);
	static bool isLongMovie(int min);
	void addCastMembers(const Person& castMember);
	std::string getName();
	std::vector<Person> getCast();
	Person getDirector();
	int getRunTime();
	friend std::ostream& operator<<(std::ostream& strm, Movie& obj);
};




#endif // !MOVIE_H



