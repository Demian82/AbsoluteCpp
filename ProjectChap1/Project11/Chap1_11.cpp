/*�� ������ �ð� ���̸� ǥ���ϴ� ���� ���� �Է��ϴ� ���α׷��� �ۼ��϶�.
�� ���α׷��� �� ������ �ð��� ��ġ�ϴ� ��, ��, �� ������ �ð��� ����ؾ� �Ѵ�.
���� ��� ����ڰ� �� 50,391�ʸ� �Է��ϸ� 13�ð�, 59��, 51�ʸ� ����ؾ� �Ѵ�.*/

#include <iostream>
using namespace std;

int main()
{
	int timeInSecond, hour, minute, second;

	cout << "Enter the time in second : ";
	cin >> timeInSecond;

	hour = timeInSecond / 3600;
	minute = (timeInSecond % 3600) / 60;
	second = (timeInSecond % 3600) % 60;

	cout << hour << "hours " << minute << "min " << second << "sec." << endl;

	return 0;
}