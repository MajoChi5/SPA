#ifndef SERVICE_H
#define SERVICE_H

#include <string>

class Service {
protected:
    std::string Name;
    int Duration;
    double BasePrice;

public:
    Service(const std::string& name, int duration, double price);
    virtual ~Service();

    void Register();

    virtual double FinalPrice(bool isReturningClient) const = 0;
    virtual void FinalService(const std::string& time, bool isReturningClient) const = 0;

    std::string getNameSer() const;
    int getDurationSer() const;
    double getBasePriceSer() const;

    void setNameSer(const std::string& name);
    void setDurationSer(int duration);
    void setBasePriceSer(double price);
};

#endif
