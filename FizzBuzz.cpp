#include <iostream>
using std::cout;
using std::endl;

int main() {
	int repeater = 0;
	for (int repeater = 0; repeater < 1001; repeater++) {
		if (repeater % 3 == 0 && repeater % 5 != 0) { cout << "Fizz" << endl; }
		else {
			if (repeater % 5 == 0 && repeater % 3 != 0) { cout << "Buzz" << endl; }
			else {
				if (repeater % 3 == 0 || repeater % 5 == 0) { cout << "FizzBuzz" << endl; }
				else {
					cout << repeater << endl;
				}
			}
		}
		repeater++;
	}
	return 0;
}
