#include <iostream>
using namespace std;

int task6()
{
	cout << "������� ����������� � �������� �� ����������: ";
	float F; //��������� ���������� ��� ������������� ���-�� �������� �� ����������
	cin >> F; //������ ������������ ���-�� �������� �� ����������
	cout << "����������� � �������� �������: " << (5 * (F - 32)) / 9; //��������� � ������� ������� �� ������� c = (5 * (f - 32)) / 9 � �������
	return 0;
}