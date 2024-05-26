#include <iostream>
#include "Date.h"
#include "Airplane.h"
#include "Airport.h"


int main()
{
	Airplane a1("DEF719", "LA", 15, 300);
	Airplane b2("GRW378", "Lviv", 10, 500);
	Airplane c3("AVC189", "Paris", 5, 200);
	Airplane d4("TYE418", "Berlin", 98, 250);
	Airport a;
	a.addPlane(a1);
	a.addPlane(b2);
	a.addPlane(c3);
	a.showInfo();
	cout << "------------------------------------------------\n\n";
	a.deletePlane(a1);
	a.showInfo();
	cout << "------------------------------------------------\n\n";
	Airplane* planeToFind = a.findAirplane("AVBC456");
	if (planeToFind != nullptr) {
		planeToFind->showInfo();
	}
	else {
		cout << "Not found\n";
	}
	cout << "\n------------------------------------------------\n\n";
	a.addPlane(d4);
	for (int i = 0; i < 40; i++) {
		a.landing(c3);
	}
	a.disembark(b2);
	a.sortAirPlanes();
	a.showInfo();
}