#include "test.h"

void test(long long number, bool expected, string test_name) {
	bool actual = check_number(number);
	string msg = test_name + " --> ";
	msg += actual == expected ? "PASS" : "FAIL";
	cout << msg << endl;
}

void run_all_tests() {
	test(1111, true, "test 01");
	test(-1111, true, "test 02");
	test(11211, false, "test 03");
	test(-11311, false, "test 04");
	test(0, false, "test 05");
	test(7, false, "test 06");
	test(-6, false, "test 07");
	test(1222, false, "test 08");
	test(2221, false, "test 09");
	test(2'123'456'789, false, "test 10");
	test(-2'123'456'789, false, "test 11");
}