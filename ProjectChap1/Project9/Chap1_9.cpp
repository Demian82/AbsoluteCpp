/*�������� ���� ���Ӽ����� �������� ���� ������ �󸶳� ���ϴ��Ŀ� ���� ������ ����Ѵ�.
�������� 10���� ������ ĵ��� �ϳ��� �ٲٰų� 3���� ������ ǳ�������� �ٲ� �� �ִ�.
�������� ǳ�������� ĵ��ٸ� �����Ѵ�.
�������� ���� ������ ���� �Է��ϰ� ��� ������ ù ��°�� ĵ��ٸ� ���ؼ� ����ϰ� ���� ������ ǳ������ ������� ����Ѵٸ� �󸶳� ���� ĵ��ٿ� ǳ������ ���� �� �ִ��� ����ϴ� ���α׷��� �ۼ��϶�.*/

#include <iostream>
using namespace std;

int main()
{
	int coupon, candybar, bubblegum;

	cout << "Enter the number of coupon : ";
	cin >> coupon;

	candybar = coupon / 10;
	bubblegum = (coupon % 10) / 3;

	cout << "You can have " << candybar << " candybars and " << bubblegum << " bubblegums." << endl;

	return 0;
}