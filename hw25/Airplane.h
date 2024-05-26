#pragma once
#include <iostream>
#include <string>
using namespace std;

class Airplane
{
	string flightNumber;
	string destination;
	int currentPassengers;
	int maxPassengers;

public:
	Airplane(string flightNumber, string destination, int currentPassengers, int maxPassengers);

	void setFlightNumber(string flightNumber);
	void setDestination(string destination);
	void setCurrentPassengers(int currentPassengers);
	void setMaxPassengers(int maxPassengers);

	string getFlightNumber()const;
	string getDestination()const;
	int getCurrentPassengers()const;
	int getMaxPassengers()const;

	void showInfo()const;

	bool operator == (const Airplane& obj)const&;
	bool operator != (const Airplane& obj)const&;
	bool operator > (const Airplane& obj)const&;
	bool operator < (const Airplane& obj)const&;
	bool operator >= (const Airplane& obj)const&;
	bool operator <= (const Airplane& obj)const&;

	Airplane& operator -- (); //prefix
	Airplane operator -- (int n); //postfix
	Airplane& operator ++ (); //prefix
	Airplane operator ++ (int n); //postfix
};

