/* C++ implementation of Algorithms 1.6 and 1.7. */
#include <iostream>
#include <string>

// Algorithm 1.6: Returns the state of light based on the switch.
std::string bulb(bool SwitchIsUp) {
	std::string StateOfLight;
	if (SwitchIsUp) {
		StateOfLight = "On";
	}
	else {
		StateOfLight = "Off";
	}
	return StateOfLight;
}

// Algorithm 1.7: Same output as with the function bulb.
std::string same_bulb(bool SwitchIsUp) {
	std::string StateOfLight = "Off";
	if (SwitchIsUp) {
		StateOfLight = "On";
	}
	return StateOfLight;
}

int main() {
	bool SwitchIsUp;
	std::cout << "Function bulb:\n";
	std::cout << "\tIs the switch up? (Yes: 1 / No: 0) ";
	std::cin >> SwitchIsUp;
	std::cout << "\tThen the light is " << bulb(SwitchIsUp) << ".\n";
	std::cout << "Function same_bulb:\n";
	std::cout << "\tIs the switch up? (Yes: 1 / No: 0) ";
	std::cin >> SwitchIsUp;	
	std::cout << "\tThen the light is " << same_bulb(SwitchIsUp) << ".\n";
	return 0;
}

