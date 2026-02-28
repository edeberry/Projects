#include <iostream>
#include <string>
#include "Spaceship.h"

// No-argument constructor (set spaceship to default position (0, 0))
Spaceship::Spaceship() {
    x = 0;
    y = 0;
    position = "{x: 0, y: 0, direction: 'up'}";
}
// Constructor (determine spaceship's position based on the argument's specified flight path)
Spaceship::Spaceship(const std::string& path) {
    // Set spaceship to begin at default position (0, 0)
    x = 0;
    y = 0;
    std::string direction = "up";
    // Analyze each letter from flight path string and execute it's meaning
    for (int i = 0; i < path.length(); i++) {
        // If current index's letter is 'R', rotate direction once to the right
        if (path[i] == 'R') {
            if (direction == "up") {direction = "right";}
            else if (direction == "right") {direction = "down";}
            else if (direction == "down") {direction = "left";}
            else if (direction == "left") {direction = "up";}
        }
        // If current index's letter is 'L', rotate direction once to the left
        else if (path[i] == 'L') {
            if (direction == "up") {direction = "left";}
            else if (direction == "left") {direction = "down";}
            else if (direction == "down") {direction = "right";}
            else if (direction == "right") {direction = "up";}
        }
        // If current index's letter is 'A', advance forward once in the direction the spaceship currently faces
        else if (path[i] == 'A') {
            if (direction == "up") {y--;}
            else if (direction == "down") {y++;}
            else if (direction == "left") {x--;}
            else if (direction == "right") {x++;}
        }

    }
    // Specify the spaceship's position based on the spaceship's current x and y-coordinates and direction
    position = "{x: " + std::to_string(x) + ", y: " + std::to_string(y) + ", direction: '" + direction + "'}";
}

// Constant accessor function which returns the position of the spaceship
const std::string Spaceship::getPosition() {
    return position;
}
