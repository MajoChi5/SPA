#include "Masaje.h"
#include <iostream>
#include <iomanip>

Masaje::Masaje(const std::string& name, int duration, double price)
    : Service(name, duration, price) {}

double Masaje::FinalPrice(bool isReturningClient) const {
    double price = BasePrice;
    if (Duration > 60)
        price += 200;
    if (isReturningClient)
        price *= 0.9;
    return price;
}

void Masaje::FinalService(const std::string& time, bool isReturningClient) const {
    std::cout << "Service: " << Name << "\n";
    std::cout << "Duration: " << Duration << " minutes\n";
    std::cout << "Base Price: $" << BasePrice << "\n";
    std::cout << "Time: " << time << "\n";

    if (Duration > 60)
        std::cout << "Note: Duration exceeds 60 minutes. A charge is going to be applied: $200\n";

    if (isReturningClient) {
        std::cout << "Client Type: Returning Client\n";
        std::cout << "Note: Returning client discount applied: 10%\n";
    }

    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Final Price: $" << FinalPrice(isReturningClient) << "\n";
    std::cout << "=========================================\n";
}

// Overloaded continue
void Masaje::FinalService(const std::string& time) const {
    FinalService(time, false);
}

std::string Masaje::getName() const { return Name; }
int Masaje::getDuration() const { return Duration; }
double Masaje::getBasePrice() const { return BasePrice; }

void Masaje::setName(const std::string& name) { Name = name; }
void Masaje::setDuration(int duration) { Duration = duration; }
void Masaje::setBasePrice(double price) { BasePrice = price; }
