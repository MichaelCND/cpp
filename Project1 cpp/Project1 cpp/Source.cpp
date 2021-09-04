#include <iostream>

using namespace std;

int main() {
	string st = "pozdorovaysya chtoby poluchit' dostup dal'she (hello) ";
	int num_1, num_2, result;
	string res;
	string arr[] = {"poka cho nichego novogo po sravneniu s js ","krome togo cho on ne raspoznaet russkie bukvy"};

	cout << st;
	cout << "\n";
	cin >> res;
	if (res == "hello")
	{
		cout << "this is addition, enter first NUMBER";
		cout << "\n";
		cin >> num_1;
		cout << "\n";
		cout << "enter second NUMBER";
		cout << "\n";
		cin >> num_2;
		cout << "\n";
		result = num_1 + num_2;
		cout << "\n";
		switch (result)
		{
		case 7: 
			cout << "ooo moya intuicia ne podvela";
			cout << "\n";
		default: 
			cout << "moya intuicia podvela ehh";
			cout << "\n";
			break;
		}
		for (int i = 0 ; i < 2 ; i++)
		{
			cout << arr[i];
		}
		cout << "\n";
		cout << "vot u menya seychs ochen' bol'shie problemy voznikli c  for  ya ne ponimau kak eto zdes rabotaet";
		cout << "\n";
	}
	else
	{
		cout << "THIS IS NOT HELLO, YOU CAN'T GO NEXT";
	}
	
	return 0;
}
