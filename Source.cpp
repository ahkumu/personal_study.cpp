#include <iostream>

int main() {
	int eWeight, Number, Planet, sWeight;

	std::cout << "Enter Weight: ";
	std::cin >> eWeight;
	
	std::cout << "Enter the planet you wish to visit:  ";
	std::cin >> Planet;

	switch (Planet) {
	case 1 :
		std::cout << "Mercury\n";
		break;
	case 2 :
		std::cout << "Venus\n";
		break;
	case 3 :
		std::cout << "Mars\n";
		break;
	case 4 :
		std::cout << "Jupiter\n";
		break;
	case 5 :
		std::cout << "Saturn\n";
		break;
	case 6 :
		std::cout << "Uranus\n";
		break;
	case 7 : 
		std::cout << "Neptune\n";
		break;
	}
	if (Planet == 1) {
		sWeight = eWeight * 0.38;
		std::cout << "Your weight on Merucury is " << sWeight << "\n";
	}
	else if (Planet == 2) {
		sWeight = eWeight * 0.91;
		std::cout << "Your weight on Venus is " << sWeight << "\n";
	}
	else if (Planet == 3) {
		sWeight = eWeight * 0.38;
		std::cout << "Your weight on Mars is " << sWeight << "\n";
	}
	else if (Planet == 4) {
		sWeight = eWeight * 2.34;
		std::cout << "Your weight is Jupiter weight is " << sWeight << "\n";
	}
	else if (Planet == 5) {
		sWeight = eWeight * 1.06;
		std::cout << "Your weight is Saturn is " << sWeight << "\n";
	}
	else if (Planet == 6) {
		sWeight = eWeight * 0.92;
		std::cout << "Your weight on Uranus is " << sWeight << "\n";
	}
	else if (Planet == 7) {
		sWeight = eWeight * 1.19;
		std::cout << "Your weight on Neptune is " << sWeight << "\n";
	}
}