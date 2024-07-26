//Zach Brown
//Date: 7/25/2024
//CS2 Module 3 Exam


#include "Person.h"
#include "Movie.h"
#include "City.h"
#include "Itinerary.h"

#include <iostream>

using namespace std;

int main() {
	//Part 1
	Person director("Michael", "Bay", "July 21, 1963");
	Person director2("Scooby", "Doo", "December 25 1961");

	Person actor1("Shia", "Lebouf", "May 22, 1989");
	Person actor2("Megan", "Fox", "August 19 1990");
	Person actor3("Leonardo", "Dicaprio", "July 2 1981");
	Person actor4("Mark", "Ruffalo", "July 2 1972");
	
	std::vector<Person> movieCast1;
	std::vector<Person> movieCast2;

	Movie transformers("Transformers", director, movieCast1, 140);
	Movie shutterIsland("Shutter Island", director2, movieCast2, 120);


	transformers.addCastMembers(actor1);
	transformers.addCastMembers(actor2);

	shutterIsland.addCastMembers(actor3);
	shutterIsland.addCastMembers(actor4);


	std::cout << transformers << endl;
	std::cout << shutterIsland;
	

	//PART 2
	
	City houston("Houston", 150, 75);
	City dallas("Dallas", 100, 42);
	City phoenix("Phoenix", 200, 52);
	City denver("Denver", 150, 400);

	Itinerary itinerary1;
	Itinerary itinerary2;

	itinerary1.addCity(houston);
	itinerary1.addCity(dallas);

	itinerary2.addCity(phoenix);
	itinerary2.addCity(denver);
	

}