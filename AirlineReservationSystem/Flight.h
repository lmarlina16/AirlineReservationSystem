#pragma once
#include <string> //refer to global

namespace AirlineReservationSystem
{
	class Flight
	{
	public:
		Flight() = default;

		const std::string& getAirline() const;
		void setAirline(const std::string& airline);

		const std::string& getFlightNumber() const;
		void setFlightNumber(const std::string& flightNumber);

		const std::string& getDepartureAirport() const;
		void setDepartureAirport(const std::string& departureAirport);

		const std::string& getArrivalAirport() const;
		void setArrivalAirport(const std::string& arrivalAirport);

		const std::string& getDepartureDate() const;
		void setDepartureDate(const std::string& departureDate);
		
		const std::string& getReturnDate() const;
		void setReturnDate(const std::string& returnDate);

		const std::string& getDepartureTime() const;
		void setDepartureTime(const std::string& departureTime);

		const std::string& getArrivalTime() const;
		void setArrivalTime(const std::string& arrivalTime);

		void displayAll() const;

	private:
		std::string mAirline;
		std::string mFlightNumber;
		std::string mDepartureAirport;
		std::string mArrivalAirport;
		std::string mDepartureDate;
		std::string mReturnDate;
		std::string mDepartureTime;
		std::string mArrivalTime;
	};

}