#pragma once
#include <string> //refer to global

namespace AirlineReservationSystem
{
	class Passenger
	{
	public:
		Passenger() = default;

		Passenger(const std::string& firstName, const std::string& lastName);

		const std::string& getFirstName() const;
		void setFirstName(const std::string& firstName);

		const std::string& getLastName() const;
		void setLastName(const std::string& lastName);

		const std::string& getEmail() const;
		void setEmail(const std::string& lastName);

		const std::string& getDepartureAirport() const;
		void setDepartureAirport(const std::string& departureAirport);

		const std::string& getArrivalAirport() const;
		void setArrivalAirport(const std::string& arrivalAirport);

		int getReservationNumber() const; //const-readonly, not editable
		void setReservationNumber(int reservationNumber);

		const std::string& getDepartureDate() const;
		void setDepartureDate(const std::string& departureDate);

		const std::string& getArrivalDate() const;
		void setArrivalDate(const std::string& arrivalDate);

		const std::string& getDepartureTime() const;
		void setDepartureTime(const std::string& departureTime);

		const std::string& getArrivalTime() const;
		void setArrivalTime(const std::string& arrivalTime);

		const std::string& getSeatClass() const;
		void setSeatClass(const std::string& seatClass);

		const std::string& getSeatPosition() const;
		void setSeatPosition(const std::string& seatPosition);

		int getSeatNumber() const; //const-readonly, not editable
		void setSeatNumber(int seatNumber);

		const std::string& getFlightNumber() const;
		void setFlightNumber(const std::string& flightNumber);

		void display() const;


	private:
		std::string mFirstName;
		std::string mLastName;
		std::string mEmail;
		std::string mFlightNumber;
		std::string mDepartureAirport;
		std::string mArrivalAirport;
		std::string mDepartureDate;
		std::string mArrivalDate;
		std::string mDepartureTime;
		std::string mArrivalTime;
		std::string mSeatClass;
		std::string mSeatPosition;
		int mReservationNumber = -1;
		int mSeatNumber = 1;
	};
}
