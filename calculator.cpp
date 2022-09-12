#include <iostream>

using namespace std;

int main() {

	double a;
	double b;
	double c;
	char op;
	char end{};

	cout << "Enter the first number to calculate: ";
	cin >> a;
	cout << "Enter the second number to calculate: ";
	cin >> b;
	cout << "Which Operation? (Options: +, -, /, *): ";
	cin >> op;

	switch (op) {

	case '+':
		cout << a + b;
		break;

	case '*':
		cout << a * b;
		break;

	case '-':
		cout << a - b;
		break;

	case '/':
		cout << a / b;
		break;

	}

	return 0;

}
