#include<iostream>
#include<ctime>
#include <time.h>
using namespace std;

int main()
{
	int i, num, numberofguesses = 0;
	srand(time(0));
	i = rand() % 10 + 1;
	cout << "GUESS MY NUMBER FROM 1 TO 10" << endl;
	cin >> num;
	while (i != num)
	{
		if (i > num)
		{
			cout << "TOO LOW," << endl;
			cout << "TRY AGAIN!" << endl;
			cin >> num;
			++numberofguesses;
		}
		if (i < num)
		{
			cout << "TOO HIGH," << endl;
			cout << "TRY AGAIN!" << endl;
			cin >> num;
			++numberofguesses;
		}
	}
	if (i == num)
	{
		cout << "YOUR GUESS IS RIGHT!" << endl;
		//cout << "RANDOM NUMBER WAS " << i << endl;
		cout << endl;
		cout << "YOUR NUMBER OF GUESS(ES) IS/ARE " << numberofguesses << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}