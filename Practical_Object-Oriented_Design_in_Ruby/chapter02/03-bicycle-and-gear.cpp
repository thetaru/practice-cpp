#include <iostream>
#include <iomanip>

class Gear
{
private:
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
    };
private:
    std::int16_t chainring;
    std::int16_t cog;
    Wheel wheel;
public:
    Gear(std::int16_t newChainring, std::int16_t newCog, double newRim, double newTire)
        : chainring(newChainring), cog(newCog), wheel(Wheel(newRim, newTire))
    { }

    double ratio() const
    {
        return chainring / static_cast<double>(cog);
    }

    double gear_inches() const
    {
        return ratio() * wheel.diameter();
    }
};

int main()
{
    std::cout << std::setprecision(17) << Gear(52, 11, 26, 1.5).gear_inches() << std::endl;
    std::cout << std::setprecision(17) << Gear(52, 11, 24, 1.25).gear_inches() << std::endl;
    // std::cout << std::setprecision(17) << Gear::Wheel(24, 1.25).diameter() << std::endl;
}