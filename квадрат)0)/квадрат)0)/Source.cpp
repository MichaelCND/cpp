#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
	int str;
	int row;
	string pal = "||";
	int res;

	cout << "enter num of str \n";
	cin >> str;
	cout << "enter num of row \n";
	cin >> row;

	res = 4 * row;
	for (int i = 0; i < str; i++)
	{
		for (int i = 0; i < res; i++)
		{
			cout << pal;
		}
		cout << "\n";
		for (int i = 0; i < row; i++)
		{
			cout << "||" << setw(3) << "X" << setw(3) << "||";
		}
		cout << endl;
	}
	for (int i = 0; i < res; i++)
	{
		cout << pal;
	}
	system("pause");
	return 0;
}