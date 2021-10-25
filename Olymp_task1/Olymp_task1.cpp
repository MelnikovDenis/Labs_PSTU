#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int num, fd, sd, thd;
	int nums[6];
	bool flag = true;
	while (flag)
	{
		cout << "Введите трёхзначное число (цифры не должны повторяться): ";
		cin >> num;
		if ((num < 100) || (num > 999)) continue;
		nums[0] = num;
		thd = num % 10;
		num /= 10;
		sd = num % 10;
		fd = num / 10;
		if ((fd != sd) && (fd != thd) && (sd != thd)) flag = false;
	}
	nums[1] = fd * 100 + thd * 10 + sd;
	nums[2] = sd * 100 + fd * 10 + thd;
	nums[3] = sd * 100 + thd * 10 + fd;
	nums[4] = thd * 100 + sd * 10 + fd;
	nums[5] = thd * 100 + fd * 10 + sd;
	int max = nums[0];
	for (int i = 0; i < 6; i++)
	{
		cout << nums[i] << '\n';
		if (nums[i] > max) max = nums[i];
	}
	cout << "Максимальное число: " << max;
	return 0;
}