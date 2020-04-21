#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Белевцева Дарья Юрьевна студент группы УМЛ-112\n";
	cout << "Программа для расчёта банковского вклада\n";

	double k = 1.12;
	double income = 5;

	double amount = 0;
	for (int i = 0; i <= 18; i++)//т.к. на 18 лет тоже даёт, то <=
	{
		amount *= k;
		amount += income;
		cout << i << " лет прошло, на вкладе " << amount << endl;
	}
	

	system("pause");

	return 0;
}
