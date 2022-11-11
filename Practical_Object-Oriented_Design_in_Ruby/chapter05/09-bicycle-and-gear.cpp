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

    std::vector<Customer> getCustomers()
    {
        return customers;
    }

    std::vector<Bicycle> getBicycles()
    {
        return bicycles;
    }

    Vehicle getVehicle()
    {
        return vehicle;
    }

    // ダックタイピング
    template <typename T>
    void prepare(T preparers)
    {
        for (auto preparer = preparers.cbegin(); preparer != preparers.cend(); ++preparer)
        {
            preparer.prepare_trip(this);
        }
    }
};

class Mechanic
{
private:
    void prepare_bicycle(Bicycle bicycle)
    { }

    void prepare_bicycles(std::vector<Bicycle> bicyles)
    {
        for (auto bicycle = bicyles.cbegin(); bicycle != bicyles.cend(); ++bicycle)
        {
            prepare_bicycle(*bicycle);
        }
    }
public:
    void prepare_trip(Trip trip)
    {
        std::vector<Bicycle> bicycles = trip.getBicycles();
        for (auto bicycle = bicycles.cbegin(); bicycle != bicycles.cend(); ++bicycle)
        {
            prepare_bicycle(*bicycle);
        }

    }
};

class TripCoordinator
{
private:
    void buy_food(std::vector<Customer> customers)
    { }
public:
    void prepare_trip(Trip trip)
    {
        buy_food(trip.getCustomers());
    }
};

class Driver
{
private:
    void gas_up(Vehicle Vehicle)
    { }

    void fill_water_tank(Vehicle vehicle)
    { }
public:
    void prepare_trip(Trip trip)
    {
        Vehicle vehicle = trip.getVehicle();
        gas_up(vehicle);
        fill_water_tank(vehicle);
    }
};