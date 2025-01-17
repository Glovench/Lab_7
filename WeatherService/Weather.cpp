#include "Weather.h"

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds)
{
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}

void Weather::describeWeather() const
{
	std::cout << city;
	std::cout << lon << lat;
	std::cout << temperature;
	std::cout << weather;
	std::cout << windSpeed;
	std::cout << clouds;
}
