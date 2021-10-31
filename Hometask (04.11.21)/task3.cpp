#include <iostream>
using namespace std;

int task3()
{
	const int num1 = 10; //целочисленная константа
	int num2 = 20; //присвоили 20
	cout << num1 << '\n' << num2 << 'n';
	cout << --num2; //префиксный инремент, сначала присваивание потом использование
	return 0;
}
