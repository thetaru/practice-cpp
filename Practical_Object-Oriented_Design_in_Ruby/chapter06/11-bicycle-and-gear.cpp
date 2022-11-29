#include <iostream>
#include <string>
#include <unordered_map>

class Bicycle
{
private:
    std::string style {};
    std::string size {};
    std::string tape_color {};
    std::string front_shock {};
    std::string rear_shock {};
public:
    Bicycle(std::string new_style, std::string new_size, std::string new_tape_color, std::string new_front_shock, std::string new_rear_shock)
        : style(new_style), size(new_size), tape_color(new_tape_color), front_shock(new_front_shock), rear_shock(new_rear_shock)
    { }

    std::unordered_map<std::string, std::string> spares()
    {
        std::unordered_map<std::string, std::string> ret_spares;
        if (style == "road")
        {
            ret_spares = {
                { "chain", "10-speed" },
                { "tire_size", "23" },
                { "tape_color", tape_color },
            };
        }
        else
        {
            ret_spares = {
                { "chain", "10-speed" },
                { "tire_size", "2.1" },
                { "rear_shock", rear_shock },
            };
        }
        return ret_spares;
    }
};

int main()
{
    Bicycle bike = Bicycle({
        "mountain",
        "S",
        "",
        "Manitou",
        "Fox"
    });

    for (const auto& p : bike.spares())
    {
        std::cout << p.first << ": " << p.second << std::endl;
    }
}