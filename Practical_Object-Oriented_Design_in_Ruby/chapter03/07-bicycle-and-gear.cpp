#include <iostream>
#include <iomanip>

class Gear
{
private:
    std::int16_t chainring;
    std::int16_t cog;
public:
    Gear(std::int16_t newChainring, std::int16_t newCog)
        : chainring(newChainring), cog(newCog)
    { }

    double ratio() const
    {
        return chainring / static_cast<double>(cog);
    }

    double gear_inches(double diameter) const
    {
        return ratio() * diameter;
    }
};

// WheelがGearに依存するように修正
class Wheel
{
private:
    double rim;
    double tire;
    Gear gear;
public:
    Wheel(double newRim, double newTire, Gear newGear)
        : rim(newRim), tire(newTire), gear(newGear)
    { }

    double diameter() const
    {
        return rim + (tire * 2);
    }

    double gear_inches() const
    {
        return gear.gear_inches(diameter());
    }
};

int main()
{
    std::cout << std::setprecision(17) << Wheel(26, 1.5, Gear(52, 11)).gear_inches() << std::endl;
}