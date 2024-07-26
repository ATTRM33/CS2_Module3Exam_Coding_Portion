#ifndef ITINERARY_H
#define ITINERARY_H

#include "City.h"
#include <vector>

class Itinerary
{private:
	std::vector<City> cities;
public:
	std::vector<City> getCities();
	void addCity(const City& city);
	static double getDistance(City city1, City city2);
	Itinerary operator+(Itinerary& right);
};

#endif