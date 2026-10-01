#include "logic.h"

bool check_number(long long number) {
	if (number < 0) {
		number *= -1;
	}

	bool result = true;
	
	if (number <= 9) {
		result = false;
	}

	while (number > 9) {
		int digit1 = number % 10;
		number /= 10;
		int digit2 = number % 10;

		if (digit1 != digit2) {
			result = false;
			break;
		}
	}

	return result;
}
