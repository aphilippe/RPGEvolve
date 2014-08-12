#include <iostream>
#include "InputManager.h"

int main()
{
    InputManager manager;
	std::cout << "Entrez votre choix :" << std::endl;
	manager.update();
	std::cout << "Votre choix est donc : " << manager.getInput() << std::endl;

	return EXIT_SUCCESS;
}