#include <iostream>
using namespace std;

int main()
{
	
	int lines = 0;
	int row = 0;
	int res = 0;

	cout << "kolichestvo liniy  ";
	cin >> lines;
	cout << "kolichestvo simvolov v stroke ";
	cin >> row;

	cout << "\n";

	for (int i = 1; i <= lines; i++)
	{
		if (i == 1 || i == lines) 
		{
			for (int j = 1; j <= row; j++)
			{
				res++;
				cout << res; 
			}
		}
		else 
		{
			res++;
			cout << res;
			for (int j = 1; j <= row - 2; j++)
			{
				cout << ' '; 
			}
			res++;
			cout << res; 
		}
		cout << "\n";
	}
	cout << "\n";
	return 0;
}