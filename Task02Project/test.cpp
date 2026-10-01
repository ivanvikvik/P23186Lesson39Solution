#include "test.h"

void test(int number, int expected, string test_name) {
	int actual = reverse(number);
	string msg = test_name + " --> ";
	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << endl;
}

void run_all_tests() {
	test(12345, 54321, "test 01");
	test(-12345, -54321, "test 02");
	test(12300, 32100, "test 03");
	test(10000, 10000, "test 04");
	test(-10000, -10000, "test 05");
	test(0, 0, "test 06");
	test(7, 7, "test 07");
	test(-7, -7, "test 08");
}