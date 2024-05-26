#include "Airplane.h"

Airplane::Airplane(string flightNumber, string destination, int currentPassengers, int maxPassengers)
{
    this->flightNumber = flightNumber;
    this->destination = destination;
    if(currentPassengers <= maxPassengers) this->currentPassengers = currentPassengers;
    else this->currentPassengers = maxPassengers; 
    this->maxPassengers = maxPassengers;
}

void Airplane::setFlightNumber(string flightNumber)
{
    this->flightNumber = flightNumber;
}

void Airplane::setDestination(string destination)
{
    this->destination = destination;
}

void Airplane::setCurrentPassengers(int currentPassengers)
{
    if (currentPassengers <= maxPassengers) this->currentPassengers = currentPassengers;
    else this->currentPassengers = maxPassengers;
}

void Airplane::setMaxPassengers(int maxPassengers)
{
    this->maxPassengers = maxPassengers;
}

string Airplane::getFlightNumber() const
{
    return flightNumber;
}

string Airplane::getDestination() const
{
    return destination;
}

int Airplane::getCurrentPassengers() const
{
    return currentPassengers;
}

int Airplane::getMaxPassengers() const
{
    return maxPassengers;
}

void Airplane::showInfo() const
{
    cout << "Flight number: " << flightNumber << endl;
    cout << "Destination: " << destination << endl;
    cout << "Current passengers: " << currentPassengers << endl;
    cout << "Max passengers: " << maxPassengers << endl;
}

bool Airplane::operator==(const Airplane& obj) const&
{
    if (this->flightNumber == obj.flightNumber) {
        return true;
    }
    else {
        return false;
    }
}

bool Airplane::operator!=(const Airplane& obj) const&
{
    return !(*this == obj);
}

bool Airplane::operator>(const Airplane& obj) const&
{
    if (this->maxPassengers > obj.maxPassengers) {
        return true;
    }
}

bool Airplane::operator<(const Airplane& obj) const&
{
    return !(*this > obj);
}

bool Airplane::operator>=(const Airplane& obj) const&
{
    return (*this > obj) || (*this == obj);
}

bool Airplane::operator<=(const Airplane& obj) const&
{
    return (*this < obj) || (*this == obj);
}

Airplane& Airplane::operator--()
{
    if (currentPassengers > 0) --currentPassengers;
    return *this;
}

Airplane Airplane::operator--(int n)
{
    Airplane tmp = *this;
    --(*this);
    return tmp;
}

Airplane& Airplane::operator++()
{
    if (currentPassengers < maxPassengers) ++currentPassengers;
    return *this;
}

Airplane Airplane::operator++(int n)
{
    Airplane tmp = *this;
    ++(*this);
    return tmp;
}
