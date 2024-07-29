#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "ServiceStation.h"

using namespace VDMS;

int main() {
    Car car1("1HGCM82633A123456", "Honda", "Civic", 2020, "Sedan");
    Truck truck1("3HGCM82633A123456", "Ford", "F-150", 2018, 1000);
    Motorcycle bike1("5HGCM82633A123456", "Yamaha", "YZF-R3", 2021, false);

    std::cout << "Vehicle Count: " << Vehicle::getVehicleCount() << std::endl;

    ServiceStation station;
    station.addService(ServiceType::OilChange, 1);
    station.addService(ServiceType::Inspection, 2);
    station.addService(ServiceType::TireRotation, 3);

    if (station.hasServices()) {
        station.performNextService(car1);
    }

    if (station.hasServices()) {
        station.performNextService(truck1);
    }

    if (station.hasServices()) {
        station.performNextService(bike1);
    }

    std::cout << car1;
    std::cout << truck1;
    std::cout << bike1;

    return 0;
}
