#pragma once

#include <string>
#include <array>

class ParkingSystem {
public:
    std::array<int, 4> arr;

    ParkingSystem(int big, int medium, int small) {
        arr[1] = big;
        arr[2] = medium;
        arr[3] = small;
    }

    bool addCar(int carType) {
        if (arr[carType] > 0) {
            --arr[carType];
            return true;
        }
        return false;
    }
};