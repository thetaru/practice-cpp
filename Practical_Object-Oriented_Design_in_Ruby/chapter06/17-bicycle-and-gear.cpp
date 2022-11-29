#include <iostream>
#include <string>
#include <unordered_map>

class Bicycle
{
protected:
    std::string size {};
    std::string chain {};
    std::string tire_size {};
public:
    Bicycle(std::string new_size, std::string new_chain, std::string new_tire_size)
        : size(new_size), chain(new_chain), tire_size(new_tire_size)
    { }

    virtual std::unordered_map<std::string, std::string> spares()
    {
        return {
            { "chain", chain },
            { "tire_size", tire_size },
        };
    }

    virtual std::string default_chain()
    {
        return "10-speed";
    }

    virtual std::string default_tire_size()
    {
        return "23";
    }

    std::string get_size()
    {
        return size;
    }

    std::string get_chain()
    {
        return chain;
    }

    std::string get_tire_size()
    {
        return tire_size;
    }
};

class RoadBike : public Bicycle
{
private:
    std::string tape_color {};
public:
    RoadBike(std::string new_size, std::string new_chain, std::string new_tire_size, std::string new_tape_color)
        : Bicycle(new_size, new_chain, new_tire_size), tape_color(new_tape_color)
    {
        chain = new_chain.empty() ? default_chain() : new_chain;
        tire_size = new_tire_size.empty() ? default_tire_size() : new_tire_size;
    }

    std::unordered_map<std::string, std::string> spares() override
    {
        std::unordered_map<std::string, std::string> ret_spares = Bicycle::spares();
        ret_spares.emplace("tape_color", tape_color);
        return ret_spares;
    }

    std::string default_tire_size() override
    {
        return "23";
    }
};

class MountainBike : public Bicycle
{
private:
    std::string front_shock {};
    std::string rear_shock {};
public:
    MountainBike(std::string new_size, std::string new_chain, std::string new_tire_size, std::string new_front_shock, std::string new_rear_shock)
        : Bicycle(new_size, new_chain, new_tire_size), front_shock(new_front_shock), rear_shock(new_rear_shock)
    {
        chain = new_chain.empty() ? default_chain() : new_chain;
        tire_size = new_tire_size.empty() ? default_tire_size() : new_tire_size;
    }

    std::unordered_map<std::string, std::string> spares() override
    {
        std::unordered_map<std::string, std::string> ret_spares = Bicycle::spares();
        ret_spares.emplace("rear_shock", rear_shock);
        ret_spares.emplace("front_shock", front_shock);
        return ret_spares;
    }

    std::string default_tire_size() override
    {
        return "2.1";
    }
};

class RecumbentBike : public Bicycle
{
public:
    RecumbentBike(std::string new_size, std::string new_chain, std::string new_tire_size)
        : Bicycle(new_size, new_chain, new_tire_size)
    {
        chain = new_chain.empty() ? default_chain() : new_chain;
        tire_size = new_tire_size.empty() ? default_tire_size() : new_tire_size;
    }

    std::string default_chain() override
    {
        return "9-speed";
    }

    std::string default_tire_size() override
    {
        return "28";
    }
};

int main()
{
    RoadBike road_bike = RoadBike(
        "M",
        "", // chain
        "", // tire_size
        "red"
    );
    for (const auto& p : road_bike.spares())
    {
        std::cout << p.first << ": " << p.second << std::endl;
    }

    MountainBike mountain_bike = MountainBike(
        "S",
        "", // chain
        "", // tire_size
        "Manitou",
        "Fox"
    );
    for (const auto& p : mountain_bike.spares())
    {
        std::cout << p.first << ": " << p.second << std::endl;
    }

    RecumbentBike bent = RecumbentBike(
        "",
        "",
        ""
    );
}