#include <iostream>

using namespace std;

int main() {
	int res = 0;
	int col;
	int row;

	cout << "colichestvo liniy";
	cin >> col;
	cout << "colichestvo stolbtsov";
	cin >> row;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			res++;
			cout << res;
		}
		cout << endl; 
	}
	return 0;
	
}