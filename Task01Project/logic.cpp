#include "logic.h"

bool check_number(long long number) {
	if (number < 0) {
		number *= -1;
	}

	if (number <= 9) {
		return false;
	}

	while (number > 9) {
		int digit1 = number % 10;
		number /= 10;
		int digit2 = number % 10;

		if (digit1 != digit2) {
			return false;
		}
	}

	return true;
}