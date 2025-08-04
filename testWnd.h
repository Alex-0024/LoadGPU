#pragma once

#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <ctime>
#include <Windows.h>

using namespace sf;

void makeCircle(CircleShape& obj, RenderWindow& window);
void moveCircle(CircleShape& obj, RenderWindow& window);
void delayWhile(int% coefLoad);
void startTest(bool% isDoing, int width, int height, int cntElem, int% coefLoad);