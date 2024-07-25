#include "City.h"

City::City(std::string name, double latitude, double longitude) :
name(name), latitude(latitude), longitude(longitude) {

}
std::string City::getName() {
	return name;

}
double City::getLat() {
	return latitude;
}
double City::getLong() {
	return longitude;
}