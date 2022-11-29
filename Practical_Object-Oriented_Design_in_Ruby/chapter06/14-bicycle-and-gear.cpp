#include <iostream>
#include <string>
#include <unordered_map>

class Bicycle
{
private:
    std::string size {};
public:
    Bicycle(std::string new_size)
        : size(new_size)
    { }

    std::string get_size()
    {
        return size;
    }
};

class RoadBike : public Bicycle
{
private:
    std::string tape_color {};
public:
    RoadBike(std::string new_size, std::string new_tape_color)
        : Bicycle(new_size), tape_color(new_tape_color)
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
    MountainBike(std::string new_size, std::string new_front_shock, std::string new_rear_shock)
        : Bicycle(new_size), front_shock(new_front_shock), rear_shock(new_rear_shock)
    { }

    // std::unordered_map<std::string, std::string> spares()
    // {
    //     std::unordered_map<std::string, std::string> ret_spares = Bicycle::spares();
    //     ret_spares.emplace("rear_shock", rear_shock);
    //     ret_spares.emplace("front_shock", front_shock);
    //     return ret_spares;
    // }
};

int main()
{
    RoadBike road_bike = RoadBike(
        "M",
        "red"
    );
    std::cout << road_bike.get_size() << std::endl;

    MountainBike mountain_bike = MountainBike(
        "S",
        "Manitou",
        "Fox"
    );
    std::cout << mountain_bike.get_size() << std::endl;
}