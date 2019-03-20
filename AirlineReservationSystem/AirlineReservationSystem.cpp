// AirlineReservationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Database.h"
#include "Flight.h"

using namespace std;
using namespace AirlineReservationSystem;

int displayMenu();
void bookFlight(Database& db);
void displayFlightInfo(Database& db);
void displayPassengerInfo(Database& db);

int main()
{
	Database passengerDB;
	while (true)
	{
		int selection = displayMenu();
		switch (selection)
		{
		case 0:
			return 0;
		case 1:
			displayFlightInfo(passengerDB);
			break;
		case 2:
			bookFlight(passengerDB);
			break;
		case 3:
			displayPassengerInfo(passengerDB);
			break;
		default:
			cerr << "Unknow command. Try again" << endl;
			break;
		}
	}
	return 0;
}
int displayMenu() {
	int selection;

	cout << endl;
	cout << "Airline  Reservation System" << endl;
	cout << "-----------------" << endl;
	cout << "1. Display flight schedule" << endl;
	cout << "2. Book a ticket" << endl;
	cout << "3. Display reservation information" << endl;
	cout << "0. Quit" << endl;
	cout << "---------------------" << endl;
	cin >> selection;
	return selection;
}

void bookFlight(Database& db)
{
	string firstName;
	string lastName;
	string email;
	string flightNumber;
	string departureAirport;
	string arrivalAirport;
	string departureDate;
	string departureTime;
	string arrivalTime;
	string seatPosition;
	string seatClass;
	int seatNumber =1;

	cout << "First Name?" ;
	cin >> firstName;

	cout << "Last Name?" ;
	cin >> lastName;

	cout << "Email?" ;
	cin >> email;

	cout << "Flight Number?" ;
	cin.ignore();
	getline(cin, flightNumber);

	cout << "From?" ;
	getline(cin, departureAirport);
	
	cout << "To?" ;
	getline(cin, arrivalAirport);

	cout << "Departure Date? " ;
	getline(cin, departureDate);

	cout << "Departure Time? " ;
	getline(cin, departureTime);
	
	cout << "Arrival Time? ";
	getline(cin, arrivalTime);

	cout << "Preferred seating: aisle, window?";
	getline(cin, seatPosition);

	cout << "Booking Class: First class, Business, Deluxe, or economy?";
	getline(cin, seatClass);

	auto& newBooking = db.addReservation(firstName, lastName, 
						email,
						flightNumber,
						departureAirport,
						arrivalAirport,
						departureDate,
						departureTime,
						arrivalTime,
						seatPosition,
						seatClass);
	
	cout << endl;
	cout << "===================================================================================" << endl;
	cout << "Your  Reservation Number is: "  << newBooking.getReservationNumber() << endl;
	cout << "===================================================================================" << endl;

}

void displayFlightInfo(Database& db)
{
	Flight flight;
	flight.displayAll();

}

void displayPassengerInfo(Database& db)
{
	int reservationNumber;

	cout << "Reservation Number?";
	cin >> reservationNumber;

	auto& psData = db.getReservation(reservationNumber);
	psData.display();
	


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
