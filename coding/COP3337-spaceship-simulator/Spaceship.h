#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <string>

class Spaceship {
public:
    Spaceship();
    Spaceship(const std::string& path);
    const std::string getPosition();
private:
    int x;
    int y;
    std::string position = "{x: X, y: Y, direction: 'DIRECTION'}";
};

#endif
