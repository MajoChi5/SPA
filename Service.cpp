#include "Service.h"
#include <iostream>
#include <iomanip>

Service::Service(const std::string& name, int duration, double price)
    : Name(name), Duration(duration), BasePrice(price) {}

Service::~Service() {}

void Service::Register() {
    std::cout << "Service: " << Name << "\n";
    std::cout << "Duration: " << Duration << " minutes\n";
    std::cout << "Base Price: $" << BasePrice << "\n";
}

std::string Service::getNameSer() const { return Name; }
int Service::getDurationSer() const { return Duration; }
double Service::getBasePriceSer() const { return BasePrice; }

void Service::setNameSer(const std::string& name) { Name = name; }
void Service::setDurationSer(int duration) { Duration = duration; }
void Service::setBasePriceSer(double price) { BasePrice = price; }
