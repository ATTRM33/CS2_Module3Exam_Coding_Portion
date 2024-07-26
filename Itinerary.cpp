#include "Itinerary.h"
#include <cmath>
#include <vector>

std::vector<City> Itinerary::getCities() {
	return cities;
}
void Itinerary::addCity(const City& city) {
	cities.push_back(city);
}
double Itinerary::getDistance(City city1, City city2) {
	double distance;
	distance = sqrt(pow(city1.getLat() - city2.getLat(), 2) + pow(city1.getLong() - city2.getLat(), 2));

	return distance;
}

Itinerary Itinerary ::operator+(Itinerary& right) {
	Itinerary itinerary1;
	for (City c : this->cities)
		itinerary1.addCity(c);
	for (City c : right.getCities())
		itinerary1.addCity(c);
	return itinerary1;
}