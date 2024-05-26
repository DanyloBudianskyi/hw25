#include "Airport.h"

void Airport::showInfo() const
{
    for (auto it = schedule.begin(); it != schedule.end(); it++) {
        it->showInfo();
        cout << endl;
    }
}

void Airport::addPlane(Airplane plane)
{
    schedule.push_back(plane);
}

void Airport::deletePlane(Airplane airplane)
{
    auto it = std::find(schedule.begin(), schedule.end(), airplane);
    if (it != schedule.end()) {
        schedule.erase(it);
    }
}

Airplane* Airport::findAirplane(const string& flightNumber) {
    auto it = std::find_if(schedule.begin(), schedule.end(), [&](Airplane airplane){
        return airplane.getFlightNumber() == flightNumber;
        });
    if (it != schedule.end()) {
        return &(*it);
    }
    return nullptr;
}


void Airport::sortAirPlanes()
{
    sort(schedule.begin(), schedule.end(), [](Airplane plane1, Airplane plane2) {return plane1.getCurrentPassengers() < plane2.getCurrentPassengers(); });
}

void Airport::landing(Airplane& airplane)
{
    Airplane* foundAirplane = findAirplane(airplane.getFlightNumber());
    if (foundAirplane) {
        ++(*foundAirplane);
    }
}


void Airport::disembark(Airplane& airplane)
{
    Airplane* foundAirplane = findAirplane(airplane.getFlightNumber());
    if (foundAirplane) {
        --(*foundAirplane);
    }
}
