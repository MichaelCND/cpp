#include <iostream>

using namespace std;

int main() {
	string st = "moi privetstviya, ";
	int num_1, num_2, result;

	cout << "this is addition, enter first NUMBER";
	cout << "\n";
	cin >> num_1;
	cout << "\n";
	cout << "enter first SECOND";
	cout << "\n";
	cin >> num_2;
	cout << "\n";
	result = num_1 + num_2;
	cout << st << "result is " << result;

	return 0;
}
