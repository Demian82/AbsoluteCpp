/* ���� ���� 35,273.92�½��̴�. �½� ������ �ø����� ��Ű�� ���Ը� ���� �� �ִ� ���α׷��� �ۼ��ϰ�,
�ø����� ���� ���� ����� �ʿ䰡 �ִ� �ڽ��� ������ ���� ������ ���Ը� ����϶�.*/
//���� �� = 1ton = 35,273.92oz

#include <iostream>
using namespace std;

int main()
{
	double ounceCereals, tonsCereals;

	cout << "How many cereals do you have? : " << endl;
	cin >> ounceCereals;

	tonsCereals = ounceCereals / 35273.92;

	cout << "You have " << tonsCereals << "tons of cereals." << endl;

	return 0;
}