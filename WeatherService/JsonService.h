#pragma once
#include "Service.h"
#include "Weather.h"
#include "json.hpp"
#include <fstream>

class JsonService : public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};

