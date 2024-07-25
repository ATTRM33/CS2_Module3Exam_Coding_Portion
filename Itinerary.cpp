#include "Itinerary.h"
#include <cmath>
#include <vector>

City Itinerary::getCities() {
	for (City& city : cities) {
		return city;
	}
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
	itinerary1.cities = (*this).cities + right.cities;

	return itinerary1;
}