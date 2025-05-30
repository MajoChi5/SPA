#ifndef MASAJE_H
#define MASAJE_H

#include "Service.h"

class Masaje : public Service {
public:
    Masaje(const std::string& name, int duration, double price);

    double FinalPrice(bool isReturningClient) const override;
    void FinalService(const std::string& time, bool isReturningClient) const override;

    // This is overlode(i think so :D)
    void FinalService(const std::string& time) const;

    std::string getName() const;
    int getDuration() const;
    double getBasePrice() const;

    void setName(const std::string& name);
    void setDuration(int duration);
    void setBasePrice(double price);
};

#endif
