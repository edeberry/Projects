#include <iostream>
#include <string>
#include "Spaceship.h"

// No-argument constructor
Spaceship::Spaceship() {
    x = 0;
    y = 0;
    position = "{x: 0, y: 0, direction: 'up'}";
}
// Constructor with argument
Spaceship::Spaceship(const std::string& path) {
    x = 0;
    y = 0;
    std::string direction = "up";
    for (int i = 0; i < path.length(); i++) {
        if (path[i] == 'R') {
            if (direction == "up") {direction = "right";}
            else if (direction == "right") {direction = "down";}
            else if (direction == "down") {direction = "left";}
            else if (direction == "left") {direction = "up";}
        }
        else if (path[i] == 'L') {
            if (direction == "up") {direction = "left";}
            else if (direction == "left") {direction = "down";}
            else if (direction == "down") {direction = "right";}
            else if (direction == "right") {direction = "up";}
        }
        else if (path[i] == 'A') {
            if (direction == "up") {y--;}
            else if (direction == "down") {y++;}
            else if (direction == "left") {x--;}
            else if (direction == "right") {x++;}
        }

    }
    position = "{x: " + std::to_string(x) + ", y: " + std::to_string(y) + ", direction: '" + direction + "'}";
}

// Constant accessor function which returns the position of the spaceship
const std::string Spaceship::getPosition() {
    return position;
}
