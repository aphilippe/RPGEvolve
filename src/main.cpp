#include <iostream>

int main()
{
	char choice[50];
	std::cout << "Entrez votre choix :" << std::endl;
	std::cin >> choice;
	std::cout << "Votre choix est donc : " << choice << std::endl;

	return EXIT_SUCCESS;
}