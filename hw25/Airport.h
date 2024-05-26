#pragma once
#include <vector>
#include <algorithm>
#include "Airplane.h"

class Airport
{
	vector<Airplane> schedule;

public:
	void showInfo()const;
	void addPlane(Airplane plane);
	void deletePlane(Airplane airplane);
	Airplane* findAirplane(const string& flightNumber);
	void sortAirPlanes();
	void landing(Airplane& airplane);
	void disembark(Airplane& airplane);
};

