#include <iostream>
#include <string>
#include <unordered_map>

class Bicycle
{
private:
    std::string size {};
    std::string tape_color {};
public:
    Bicycle(std::string new_size, std::string new_tape_color)
        : size(new_size), tape_color(new_tape_color)
    { }

    std::unordered_map<std::string, std::string> spares()
    {
        return {
            { "chain", "10-speed" },
            { "tire_size", "23" },
            { "tape_color", tape_color }
        };
    }
};

class RoadBike : public Bicycle
{
private:
    std::string tape_color {};
public:
    RoadBike(std::string new_size, std::string new_tape_color)
        : Bicycle(new_size, new_tape_color), tape_color(new_tape_color)
    { }

    std::unordered_map<std::string, std::string> spares()
    {
        return {
            { "chain", "10-speed" },
            { "tire_size", "23" },
            { "tape_color", tape_color }
        };
    }
};

class MountainBike : public Bicycle
{
private:
    std::string front_shock {};
    std::string rear_shock {};
public:
    MountainBike(std::string new_size, std::string new_tape_color, std::string new_front_shock, std::string new_rear_shock)
        : Bicycle(new_size, new_tape_color), front_shock(new_front_shock), rear_shock(new_rear_shock)
    { }

    std::unordered_map<std::string, std::string> spares()
    {
        std::unordered_map<std::string, std::string> ret_spares = Bicycle::spares(); // rubyで言うsuperの代わり
        ret_spares.emplace("rear_shock", rear_shock);
        ret_spares.emplace("front_shock", front_shock);
        return ret_spares;
    }
};

int main()
{
    RoadBike road_bike = RoadBike(
        "M",
        "red"
    );
    for (const auto& p : road_bike.spares())
    {
        std::cout << p.first << ": " << p.second << std::endl;
    }


    MountainBike mountain_bike = MountainBike(
        "S",
        "",
        "Manitou",
        "Fox"
    );
    for (const auto& p : mountain_bike.spares())
    {
        std::cout << p.first << ": " << p.second << std::endl;
    }
}