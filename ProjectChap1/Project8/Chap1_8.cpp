/*���� n�� �������� ����ϴ� �ٺ��� �˰����� ������ ����.
1. ��信 ���� guess�� �����(�ʱ� ������ n/2�� ���� �� �ִ�.)
2. r = n / guess�� ����϶�.
3. guess = (guess + r) / 2�� ���϶�.
4. �ʿ��� ��ŭ 2�ܰ�� ���ư��� �ݺ��϶�. 2�ܰ�� 3�ܰ谡 �ݺ��ɼ��� guess�� n�� �����ٰ� ���� ������ ���� �� ���̴�.

���� n�� �Է��ϰ� �ٺ��� �˰����� 5�� �ݺ��Ͽ� �Ҽ��� ��°�ڸ����� double������ ����� ����϶�.
�������� ����� n�� ���� ���� ���� ���� ��Ȯ�� ���̴�.*/

#include <iostream>
using namespace std;

int main()
{
	double guess, num, r;

	cout << "Input number what want to know : ";
	cin >> num;

	guess = num / 2;

	int i = 0;
	while ( i < 5 )
	{
		r = num / guess;
		guess = (guess + r) / 2;
		i++;
	}

	cout << guess;

	return 0;
}