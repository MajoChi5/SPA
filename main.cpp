#include "Masaje.h"

int main() {
    Masaje m1("Therapeutic massage", 75, 900);
    m1.FinalService("3:00 PM");  

    Masaje m2("Therapeutic massage", 120, 900);
    m2.FinalService("4:00 PM", true);  

    Masaje m3("Therapeutic massage", 60, 900);
    m3.FinalService("5:30 PM");  

    return 0;
}

