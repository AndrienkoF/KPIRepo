#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <list>
#include "level.h"
#include "classEntity.h"
#include "view.h"

//using namespace sf;

class Player: public Entity{
public:
    enum{left, right, up, down, jump, stay}state;
    float CurrentFrame;
    bool normalHero, heroWithPick, heroWithSword;

    Player (sf::Image &image, sf::String Name, Level &lev, float X, float Y, float W, float H);
    void control();
    void checkCollisionWithMap(float Dx, float Dy);
    void update(sf::View * view, float time);
};
