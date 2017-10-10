// Random Numebr Generator
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int Num, Range;
	cout << "How many random numbers do you wish to output? ";
	cin >> Num;
	cout << "What is the highest possible roll? ";
	cin >> Range;
	srand(time(NULL));

	for (int i = 0; i < Num; i += 1)
	{
		int rng = (rand()%Range) + 1;
		cout << rng << ", ";
	}

	system("PAUSE");
	return 0;
}
