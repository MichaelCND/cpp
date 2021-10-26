#include <iostream>

using namespace std;

int main() {
	int a;
	//   а    задекларированная
	int b = 0;
	//   в    проинециализированная
	int c;

	try
	{
		cout << "1 chislo";
		cin >> a;
		cout << "2 choslo";
		cin >> b;

		c = a / b;
		cout << c;
	}
	catch (const std::exception& ex)
	{
		cout << ex.what();
	}

	return 0;
}