/*����ڰ� �ʴ����� �ð��� �Է��ϰ� �������ϸ� �ϴ� �� �ɸ� �ð��� �ִٸ� �󸶳� �������� ��ü�� ������������ ����� �� �ִ� ���α׷��� �ۼ��϶�.
���⿡ ���� ������ ������ ���� �߷¿� ���� �ʴ� 32��Ʈ�� ��� ���ӵ��� �ִٰ� ��������.
�������� ����϶�.
�Ÿ� = 1/2 * ���ӵ� * �ð� ^(2) */

#include <iostream>
using namespace std;

const int accelation = 32; // feet/sec
int main()
{
	int second;
	double heights;

	cout << "Enter the time in second : ";
	cin >> second;

	heights = 0.5 * accelation * second * second;

	cout << "Height is " << heights << " feets." << endl;

	return 0;
}