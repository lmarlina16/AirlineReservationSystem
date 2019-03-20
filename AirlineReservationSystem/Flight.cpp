#include "pch.h"
#include "Flight.h"
#include <iostream>
#include<iomanip>

using namespace std;

namespace AirlineReservationSystem
{
	const std::string& Flight::getAirline() const {
		return mAirline;
	}
	void Flight::setAirline(const std::string& airline) {
		mAirline = airline;
	}

	const std::string& Flight::getFlightNumber() const {
		return mFlightNumber;
	}
	void Flight::setFlightNumber(const std::string& flightNumber) {
		mFlightNumber = flightNumber;
	}

	const std::string& Flight::getDepartureAirport() const {
		return mDepartureAirport;
	}
	void Flight::setDepartureAirport(const std::string& departureAirport) {
		mDepartureAirport = departureAirport;
	}

	const std::string& Flight::getArrivalAirport() const {
		return mArrivalAirport;
	}
	void Flight::setArrivalAirport(const std::string& arrivalAirport) {
		mArrivalAirport = arrivalAirport;
	}

	const std::string& Flight::getDepartureDate() const {
		return mDepartureDate;
	}
	void Flight::setDepartureDate(const std::string& departureDate) {
		mDepartureDate = departureDate;
	}

	const std::string& Flight::getReturnDate() const {
		return mReturnDate;
	}
	void Flight::setReturnDate(const std::string& returnDate) {
		mReturnDate = returnDate;
	}

	const std::string& Flight::getDepartureTime() const {
		return mDepartureTime;
	}
	void Flight::setDepartureTime(const std::string& departureTime) {
		mDepartureTime = departureTime;
	}

	const std::string& Flight::getArrivalTime() const {
		return mArrivalTime;
	}
	void Flight::setArrivalTime(const std::string& arrivalTime) {
		mArrivalTime = arrivalTime;
	}

	void Flight::displayAll() const
	{
		int flightSchedule;

		cout << setw(30) << "Flight Schedules" << endl;
		cout << "========================================================================================================================================================" << endl;
		cout << setw(10) << "Flight number" << setw(20) << "From" << setw(20) << "To" << setw(20) << "Departure date" << setw(20) << "Departure time" << setw(20) << "Arrival date" << setw(20) << "Arrival time" << endl;
		cout << "========================================================================================================================================================" << endl;
		cout << setw(10) << "AK201" << setw(20) << "Seattle" << setw(20) << "Los Angeles" << setw(20) << "9/29/2019" << setw(20) << "0800 AM" << setw(20) << "9/29/2019" << setw(20) << "1035 AM" << endl;
		cout << setw(10) << "AK405" << setw(20) << "Seattle" << setw(20) << "Las Vegas" << setw(20) << "9/29/2019" << setw(20) << "0900 AM" << setw(20) << "9/29/2019" << setw(20) << "1100 AM" << endl;
		cout << setw(10) << "AK351" << setw(20) << "Seattle" << setw(20) << "Orlando" << setw(20) << "9/29/2019" << setw(20) << "1000 AM" << setw(20) << "9/29/2019" << setw(20) << "0400 PM" << endl;
		cout << setw(10) << "AK871" << setw(20) << "Seattle" << setw(20) << "San Jose" << setw(20) << "9/29/2019" << setw(20) << "0430 PM" << setw(20) << "9/29/2019" << setw(20) << "0630 PM" << endl;
		cout << "=========================================================================================================================================================" << endl;
		cin >> flightSchedule;

	}
}