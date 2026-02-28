#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <string>

class Spaceship {
public:
    // Constructors
    Spaceship();
    Spaceship(const std::string& path);
    // Constant accessor function which returns the position of the spaceship 
    const std::string getPosition();
private:
    int x;
    int y;
    std::string position;
};

#endif
