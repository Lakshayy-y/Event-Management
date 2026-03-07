#include <iostream>
using namespace std;
class Booking {
private:
    string customerName,movieName;
    int numberOfTickets;
    float ticketPrice,totalAmount;
    static int totalBookings;
    static int totalSeatsBooked;
public:
    Booking() {
        customerName = "";
        movieName = "";
        numberOfTickets = 0;
        ticketPrice = 0;
        totalAmount = 0;
    }
    void inputDetails() {
        cout << "Enter Customer Name: ";
        cin >> customerName;
        cout << "Select Movie:\n1. Master\n2. Leo\n3. Jawan\nEnter Choice: ";
        cout << "Enter Choice: ";
        int choice;
        cin >> choice;
        switch(choice) {
            case 1:
                movieName = "Master";
                ticketPrice = 200;
                break;
            case 2:
                movieName = "Leo";
                ticketPrice = 180;
                break;
            case 3:
                movieName = "Jawan";
                ticketPrice = 150;
                break;
            default:
                cout << "Invalid Choice! Defaulting to Jawan.\n";
                movieName = "Jawan";
                ticketPrice = 150;
        }
        cout << "Enter Number of Tickets: ";
        cin >> numberOfTickets;

        totalBookings++;
        totalSeatsBooked += numberOfTickets;
    }
    void calculateTotal() {
        totalAmount = numberOfTickets * ticketPrice;

        if(numberOfTickets >= 5) {
            totalAmount = totalAmount - (0.10 * totalAmount);
        }
    }

    void displayBooking() {
        cout << "\n------ Booking Summary ------\n";
        cout << "Customer Name: " << customerName << endl;
        cout << "Movie: " << movieName << endl;
        cout << "Tickets: " << numberOfTickets << endl;

        if(numberOfTickets >= 5) {
            cout << "Discount Applied: 10%\n";
        }
        cout << "Total Amount: " << totalAmount << endl;
        cout << "-----------------------------\n";
    }
    static void showStatistics() {
        cout << "\n===== Booking Statistics =====\n";
        cout << "Total Bookings: " << totalBookings << endl;
        cout << "Total Seats Booked: " << totalSeatsBooked << endl;
    }
};
int Booking::totalBookings = 0;
int Booking::totalSeatsBooked = 0;

int main() {
    Booking b1, b2;
    b1.inputDetails();
    b1.calculateTotal();
    b1.displayBooking();

    b2.inputDetails();
    b2.calculateTotal();
    b2.displayBooking();

    Booking::showStatistics();
    return 0;
}