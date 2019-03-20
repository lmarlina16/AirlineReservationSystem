#include "pch.h"
#include "Database.h"
#include <vector>
#include <iostream>
#include <stdexcept>

namespace AirlineReservationSystem
{
	Passenger& Database::addReservation(const std::string& firstName, 
										const std::string& lastName,
										const std::string& email,
										const std::string& flightNumber,
										const std::string& departureAirport,
										const std::string& arrivalAirport,
										const std::string& departureDate,
										const std::string& departureTime,
										const std::string& arrivalTime,
										const std::string& seatPosition,
										const std::string& seatClass)
	{
		Passenger bookPasssenger(firstName, lastName);
		bookPasssenger.setEmail(email);
		bookPasssenger.setFlightNumber(flightNumber);
		bookPasssenger.setDepartureAirport(departureAirport);
		bookPasssenger.setArrivalAirport(arrivalAirport);
		bookPasssenger.setDepartureDate(departureDate);
		bookPasssenger.setDepartureTime(departureTime);
		bookPasssenger.setArrivalTime(arrivalTime);
		bookPasssenger.setReservationNumber(mNextReservationNumber++);
		bookPasssenger.setSeatPosition(seatPosition);
		bookPasssenger.setSeatClass(seatClass);
		bookPasssenger.setSeatNumber(mNextSeatNumber++);
		mPassengers.push_back(bookPasssenger);

		return mPassengers[mPassengers.size() - 1];
	}

	Passenger& Database::getReservation(int reservationNumber)
	{
		for (auto& passenger : mPassengers)
		{
			if (passenger.getReservationNumber() == reservationNumber)
				return passenger;
		}
		throw std::logic_error("No reservation found");
	}

	Passenger& Database::getReservation(const std::string& firstName, const std::string& lastName)
	{
		for (auto& passenger : mPassengers)
		{
			if (passenger.getFirstName() == firstName && passenger.getLastName() == lastName)
			{
				return passenger;
			}
		}
		throw std::logic_error("No reservation found");

	}

}