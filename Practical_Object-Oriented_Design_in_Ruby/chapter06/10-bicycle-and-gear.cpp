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
        return std::unordered_map<std::string, std::string>
        {
            { "chain", "10-speed" },
            { "tire_size", "23" },
            { "tape_color", tape_color },
        };
    }
};

int main()
{
    Bicycle bike = Bicycle({ "M", "red" });

    for (const auto& p : bike.spares())
    {
        std::cout << p.first << ": " << p.second << std::endl;
    }
}