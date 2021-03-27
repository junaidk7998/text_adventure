#include <iostream>

int main() {
	// a story of a brave boy
	std::cout << "This is a story of a boy who went on an adventure to save a princess.\n";
	std::cout << "The boy will face great challenges on the way. Let's find out if he will succeed or perish.\n\n";

	std::cout << "The boy goes to the castle to save the princess.\n";
	std::cout << "The boy enters the castle and is met with a demon inside.\n";
	std::cout << "What should the boy do.\n\n";

	int choice1 = 0;
	for (int i = 0; i < 3 && choice1 != 1 && choice1 != 2 && choice1 != 3; i++) {
		std::cout << "1) The boy tries to sneak to save the princess and gets caught.\n";
		std::cout << "2) The boy tries to talk to the demon to let the princess go.\n";
		std::cout << "3) The boy fights the demon.\n";
		std::cin >> choice1;
	}
	if (choice1 == 1) {
		std::cout << "The demon kills the boy and the princess is left stranded and heartbroken.\n";
	}
	else if (choice1 == 2) {
		std::cout << "The demon hates talking and kills the boy.\n";
	}
	else if (choice1 == 3) {
		std::cout << "The Boy fights the demon and slices him in half. Saving the princess and living happily ever after together.\n";
	}
	else {
		std::cout << "Invalid Choice. Choose between option 1-3.\n";
	}
}