#include <iostream>
#include <vector>
using namespace std;

class Bicycle
{ };

class Customer
{ };

class Vehicle
{ };

class Trip
{
private:
    std::vector<Bicycle> bicycles;
    std::vector<Customer> customers;
    Vehicle vehicle;
public:
    Trip(
        std::vector<Bicycle> newBicycles,
        std::vector<Customer> newCustomers,
        Vehicle newVehicle
    );

    void prepare(Mechanic mechanic)
    {
        mechanic.prepare_bicycles(bicycles);
    }
};

class Mechanic
{
public:
    void prepare_bicycle(Bicycle bicycle)
    { }

    void prepare_bicycles(std::vector<Bicycle> bicyles)
    {
        for (auto bicycle = bicyles.begin(); bicycle != bicyles.cend(); ++bicycle)
        {
            prepare_bicycle(*bicycle);
        }
    }
};