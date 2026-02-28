# Spaceship Simulator

This repository contains my code for a homework assignment for COP3337 Object Oriented Programming.

## Assignment

### Description

You have recently been hired by FloridaPolytesla company, a new rocket manufacturer, and
have been tasked with designing a simulator for their spaceships. This simulator creates a virtual "space" and keeps track of the basic movements and direction of a given ship. Your job is to keep track of where the ship is and its orientation relative to its starting point.

Your ship simulator uses a string that represent a planned flight path for a given rocket ship.

In a ship’s flight path, there are only 3 valid options for movement: R for turning right, L for turning left and A for advancing.

If, for example, you receive "RRALAA" as your flight path, you should interpret it as the following: Turn right, turn right, advance, turn left, advance, advance. Your program should calculate the final destination of a spaceship as well as it’s orientation relative to the starting point.

Orientation is represented as left, right, up or down.

All spaceships will start at 0,0 and will face up.

Space is infinite, so the x, y coordinates you return could be placed on a seemingly infinite grid and can be negative or positive values.

We are using Computer Graphics Coordinate System.

### Instructions

Create a class named Spaceship that contains the following:

* A private int data x
* A private int data y
* A private string data named position which has the following format:
  * "{x: X, y: Y, direction: 'DIRECTION'}"
  * X,Y represent the ending coordinates of your ship and direction represents its final direction.
* No argument constructor which sets x and y coordinates to 0 and initializes the
position with "{x: 0, y:0, direction: 'up'}"
* Constructor with the following prototype
  * Spaceship(const std::string& path);
  * Constructor takes in a flight path of a rocket ship as a string, calculates the final position of the spaceship and initializes position data member of the spaceship object. Tip: google to_string().
* The constant accessor function named getPosition() which returns the position of the spaceship.

You are given testSpaceship.cpp file. Implement the class in the blank Spaceship.h and Spaceship.cpp
files.

Here is the expected output:

```shell
{x: 0, y: 0, direction: 'up'}
{x: 2, y: -1, direction: 'down'}
{x: 7, y: -5, direction: 'right'}
{x: 0, y: 0, direction: 'up'}
{x: -3, y: 0, direction: 'left'}
```
