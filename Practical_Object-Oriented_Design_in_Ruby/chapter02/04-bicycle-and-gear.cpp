#include <iostream>
#include <iomanip>
#include <cmath>

class Wheel
{
private:
    double rim;
    double tire;
public:
    Wheel(double newRim, double newTire)
        : rim(newRim), tire(newTire)
    { }

    double diameter() const
    {
        return rim + (tire * 2);
    }

    double circumference() const
    {
        return diameter() * M_PI;
    }
};

class Gear
{
private:
    std::int16_t chainring;
    std::int16_t cog;
    Wheel* wheel;
public:
    Gear(std::int16_t newChainring, std::int16_t newCog, Wheel* newWheel = nullptr)
        : chainring(newChainring), cog(newCog), wheel(newWheel)
    { }

    double ratio() const
    {
        return chainring / static_cast<double>(cog);
    }

    double gear_inches() const
    {
        return ratio() * wheel->diameter();
    }
};

int main()
{
    Wheel wheel = Wheel(26, 1.5);
    std::cout << std::setprecision(17) << wheel.circumference() << std::endl;

    std::cout << std::setprecision(17) << Gear(52, 11, &wheel).gear_inches() << std::endl;

    std::cout << std::setprecision(17) << Gear(52, 11).ratio() << std::endl;
}