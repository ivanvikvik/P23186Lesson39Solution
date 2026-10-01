#include "logic.h"

int reverse(int number) {
	bool flag = false;

	if (number < 0) {
		number = -number;
		flag = true;
	}

	int num = 0;
	int count = 0;
		
	while (number > 0) {
		if (number % 10 == 0) {
			count++;
		}
		else {
			break;
		}
		number /= 10;
	}

	while (number > 9) {
		int digit = number % 10;
		num += digit;
		num *= 10;

		number /= 10;
	}

	num += number;

	num *= pow(10, count);

	return flag ? -num : num;
}