#include <iostream>

class Car {
public:
    Car() {
        this->speed = 0;
        this->fuel = 100;
    }
    Car(int speed, double fuel) {
        this->speed = speed;
        this->fuel = fuel;
    }
    Car(const Car &other) {
        this->speed = other.speed;
        this->fuel = other.fuel;
    }

    int getSpeed() const;
    double getFuel() const;

    void setSpeed(int speed);
    void setFuel(double fuel);
    void acceleration();

    int speed;

private:
    double fuel;
};

int Car::getSpeed() const {
    return speed;
}

double Car::getFuel() const {
    return fuel;
}

void Car::setSpeed(int speed) {
    this->speed = speed;
}

void Car::setFuel(double fuel) {
    this->fuel = fuel;
}

void Car::acceleration() {
    if (this->fuel >= 1) {
        this->speed++;
        this->fuel--;
    }

}

class Motorcycle : public Car {
    void motorcycleAcceleration() {
        if (this->getFuel() >= 1) {
            this->speed += 1;
            this->setFuel(this->getFuel() - 0.5);
        }
    }
};

class Truck : public Car {
public:
    int loading;

    void truckAcceleration(int speed, double fuel, int loading) {
        if (this->loading < 1000) {
            if (this->getFuel() >= 1) {
                this->speed++;
                this->setFuel(this->getFuel() - 1);
            }
        }
        else if ((this->loading >= 1000) && (this->loading < 2000)) {
            if (this->getFuel() >= 1) {
                this->speed++;
                this->setFuel(this->getFuel() - 2);
            }
        }
        else if ((this->loading >= 2000) && (this->loading <= 3000)) {
            if (this->getFuel() >= 1) {
                this->speed++;
                this->setFuel(this->getFuel() - 2);
            }
        }
    }
};