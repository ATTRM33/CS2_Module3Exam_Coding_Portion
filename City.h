#ifndef CITY_H
#define CITY_H

#include <string>
class City
{private:
	std::string name;
	double latitude;
	double longitude;
public:
	City(std::string name, double latitude, double longitude);
	std::string getName();
	double getLat();
	double getLong();
};

#endif