#include <iostream>

using namespace std;

class cars {
private: 
	int power;
public:
	int clientPower;
	cars() {
		power = 400;
	}
	void set() {
		cout << "enter your car power";
		cout << "\n";
		cin >> clientPower;
	}
	void check() {
		if (clientPower > power)
		{
			cout << "your car more powerful";
		}
		else
		{
			cout << "my car more powerful";
		}
	}
};
int main() {
	cars f;
	f.set();
	f.check();
	return 0;
}