#pragma once
#include "Passenger.h"
#include "Flight.h"
#include <vector> //array
#include <iostream>

namespace AirlineReservationSystem
{
	const int kFirstReservationNumber = 1000;
	const int kFirstSeatNumber = 1;

	class Database
	{
	public:
		Passenger& addReservation(const std::string& firstName,
			const std::string& lastName,
			const std::string& email,
			const std::string& flightNumber,
			const std::string& departureAirport,
			const std::string& arrivalAirport,
			const std::string& departureDate,
			const std::string& departureTime,
			const std::string& arrivalTime,
			const std::string& seatPosition,
			const std::string& seatClass);

		Passenger& getReservation(int reservationNumber);
		
		Passenger& getReservation(const std::string& firstName, const std::string& lastName);


	private:
		std::vector<Passenger> mPassengers;
		int mNextReservationNumber = kFirstReservationNumber;
		int mNextSeatNumber = kFirstSeatNumber;

	};

}