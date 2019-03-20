#include "pch.h"
#include "Passenger.h"
#include <iostream>
#include<iomanip>

using namespace std;

namespace AirlineReservationSystem
{
	Passenger::Passenger(const std::string& firstName, const std::string& lastName) :
		mFirstName(firstName), mLastName(lastName)
	{

	}

	int Passenger::getReservationNumber() const {
		return mReservationNumber;
	}
	void Passenger::setReservationNumber(int reservationNumber) {
		mReservationNumber = reservationNumber;
	}

	const std::string& Passenger::getFirstName() const {
		return mFirstName;
	}
	void Passenger::setFirstName(const std::string& firstName) {
		mFirstName = firstName;
	}

	const std::string& Passenger::getLastName() const {
		return mLastName;
	}
	void Passenger::setLastName(const std::string& lastName) {
		mLastName = lastName;
	}
	const std::string& Passenger::getEmail() const {
		return mEmail;
	}
	void Passenger::setEmail(const std::string& email) {
		mEmail= email;
	}

	const std::string& Passenger::getDepartureAirport() const {
		return mDepartureAirport;
	}
	void Passenger::setDepartureAirport(const std::string& departureAirport) {
		mDepartureAirport = departureAirport;
	}

	const std::string& Passenger::getArrivalAirport() const {
		return mArrivalAirport;
	}
	void Passenger::setArrivalAirport(const std::string& arrivalAirport) {
		mArrivalAirport = arrivalAirport;
	}

	const std::string& Passenger::getFlightNumber() const {
		return mFlightNumber;
	}
	void Passenger::setFlightNumber(const std::string& flightNumber) {
		mFlightNumber = flightNumber;
	}

	int Passenger::getSeatNumber() const {
		return mSeatNumber;
	}
	void Passenger::setSeatNumber(int seatNumber) {
		mSeatNumber = seatNumber;
	}
	const std::string& Passenger::getDepartureDate() const {
		return mDepartureDate;
	}
	void Passenger::setDepartureDate(const std::string& departureDate) {
		mDepartureDate = departureDate;
	}

	const std::string& Passenger::getArrivalDate() const {
		return mArrivalDate;
	}
	void Passenger::setArrivalDate(const std::string& arrivalDate) {
		mArrivalDate = arrivalDate;
	}

	const std::string& Passenger::getDepartureTime() const {
		return mDepartureTime;
	}
	void Passenger::setDepartureTime(const std::string& departureTime) {
		mDepartureTime = departureTime;
	}

	const std::string& Passenger::getArrivalTime() const {
		return mArrivalTime;
	}
	void Passenger::setArrivalTime(const std::string& arrivalTime) {
		mArrivalTime = arrivalTime;
	}

	const std::string& Passenger::getSeatPosition() const {
		return mSeatPosition;
	}
	void Passenger::setSeatPosition(const std::string& seatPosition) {
		mSeatPosition = seatPosition;
	}

	const std::string& Passenger::getSeatClass() const {
		return mSeatClass;
	}
	void Passenger::setSeatClass(const std::string& seatClass) {
		mSeatClass = seatClass;
	}

	void Passenger::display() const {

		cout << "================================================================================================================================" << endl;
		cout << "Your Revervation: " << getReservationNumber() << endl;
		cout << "Passenger: " << getFirstName() << setw(5) << getLastName() << endl;
		cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << setw(20) << "Flight number" << setw(25) << "Seat Class" << setw(25) << "Seat position" << setw(25) << "Seat Number" << endl;
		cout << setw(20) << getFlightNumber() << setw(25) << getSeatClass() << setw(25) << getSeatPosition() << setw(25) << getSeatNumber() << endl;
		cout << "--------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << setw(20) << "To" << setw(25) << "Departure date" << setw(25) << "Departure time" << setw(25) << "Arrival time" << endl;
		cout << setw(20) << getArrivalAirport() << setw(25) << getDepartureDate() << setw(25) << getDepartureTime() << setw(25) << getArrivalTime() << endl;
		cout << "================================================================================================================================" << endl;
		cout << endl;

	}

}