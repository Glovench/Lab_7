#pragma once
#include "Service.h"
#include "Weather.h"
#include "pugixml.hpp"
#include <fstream>
#include <exception>

class XmlService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};


