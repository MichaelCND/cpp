#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string txt;
	char text[60];

	cout << "enter text \n";
	cin >> txt;

	ofstream txfile;
	txfile.open("tx.txt");
	txfile << txt;
	txfile.close();

	ifstream file("Text.txt");
	file.getline(text, 60);
	cout << text << "\n";
	file.close();
}