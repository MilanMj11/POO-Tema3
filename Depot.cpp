#include "Depot.h"
#include <iostream>


std::vector<std::shared_ptr<Vehicle>> Depot::VList;
int Depot::capacity = 0;

Depot::Depot() = default;

Depot::~Depot() {

}

void Depot::setCapacity(const int new_cap){
    Depot::capacity = new_cap;
};
int Depot::getCapacity(){
    return Depot::capacity;
}

const std::string &Depot::getLocation() const {
    return location;
}

void Depot::setLocation(const std::string &new_location) {
    Depot::location = new_location;
}

void Depot::addVehicle(std::shared_ptr<Vehicle> v){
    if(VList.size() == Depot::capacity){
        throw std::out_of_range("Error: Depot is full");
    }
    VList.push_back(v);
}

const std::vector<std::shared_ptr<Vehicle>> &Depot::getVList() {
    return VList;
}
