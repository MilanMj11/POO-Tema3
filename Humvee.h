#ifndef OOP_HUMVEE_H
#define OOP_HUMVEE_H

#include "Vehicle.h"

class OutOfStorageException;
class Humvee : public Vehicle {
private:
    int storage;
    int occupied_storage;
    bool bulletproof;
    bool weaponized;
public:
    Vehicle* clone() const override;
    Humvee(const std::string &name, int speed, int year, int capacity, int storage, int occupied_storage, bool bulletproof, bool weaponized);
    ~Humvee() override;

    void print() const override;
    friend std::ostream& operator<<(std::ostream& os, const Humvee &obj);

    int getStorage() const;
    void setStorage(int storage);

    bool isBulletproof() const;
    void setBulletproof(bool bulletproof);

    bool isWeaponized() const;
    void setWeaponized(bool weaponized);

    int getOccupiedStorage() const;
    void setOccupiedStorage(int occupiedStorage);

    bool operator==(const Humvee &rhs) const;
    bool operator!=(const Humvee &rhs) const;

    void AddStorage(int s);
    void RemoveStorage(int s);

    int raw_speed() const override;

};


#endif //OOP_HUMVEE_H
