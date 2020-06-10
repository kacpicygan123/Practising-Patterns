#include <iostream>
#include "Input.h"
#include <string>

int Input::getIntInput()
{
	int input;
	std::cin >> input;
	return input;
}

std::string Input::getStringInput()
{
	std::string input;
	std::cin >> input;
	return input;
}