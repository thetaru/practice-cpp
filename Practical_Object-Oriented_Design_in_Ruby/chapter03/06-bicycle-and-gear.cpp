#include <iostream>
#include <iomanip>

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

// Gearを静的ポリモーフィズムクラスにする
template<class T>
class Gear
{
private:
    std::int16_t chainring;
    std::int16_t cog;
    T wheel;
public:
    Gear(std::int16_t newChainring, std::int16_t newCog, T newWheel)
        : chainring(newChainring), cog(newCog), wheel(newWheel)
    { }

    double ratio() const
    {
        return chainring / static_cast<double>(cog);
    }

    double gear_inches() const
    {
        // wheelはdiameterメンバ関数を持つオブジェクトであればよい
        return ratio() * wheel.diameter();
    }
};

int main()
{
    std::cout << std::setprecision(17) << Gear(52, 11, Wheel(26, 1.5)).gear_inches() << std::endl;
}