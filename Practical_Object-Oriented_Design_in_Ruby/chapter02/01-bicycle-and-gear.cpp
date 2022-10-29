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
};

int main()
{
    std::cout << std::setprecision(17) << Gear(52, 11).ratio() << std::endl;
    std::cout << std::setprecision(17) << Gear(30, 27).ratio() << std::endl;
}