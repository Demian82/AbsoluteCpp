/*����� �̻����� �����Դ� ó�� 5��Ʈ�� 110�Ŀ�带 �Ҵ��ϰ� Ű�� 1��ġ�� ������ ������ 5�Ŀ�带 ���ؼ� ������ �� �ִ�.
����� Ű�� ������ ǥ���ϱ� ���ؼ� ��Ʈ(feet) ���� �� ������ �׸��� ��ġ(inch) ���� �ٸ� ������ ������ ������, Ű���带 ���Ͽ� ��Ʈ�� ��ġ�� ���� �о Ű�� ǥ���ϴ� ���α׷��� �ۼ��϶�.
��, ���α׷��� �ۼ��� �� ����� Ű�� �ּ��� 5��Ʈ �̻��̶�� ��������.
���� ��� 6��Ʈ 3��ġ�� Ű�� ���� ����� ��� 6�� �� ������, 3�� �ٸ� ������ ������ ������ �� �������� ���� �̿��Ͽ� �̻����� ü���� ����ϴ� ���α׷��� �ۼ��϶�.
12��ġ = 1 ��Ʈ*/

#include <iostream>
using namespace std;

int main()
{
	int feet, inch, pounds;

	cout << "Enter the height in feet and inches ( 5feet is minimum; feets inches ) : ";
	cin >> feet >> inch;

	pounds = 110 + (feet - 5) * 12 * 5 + inch * 5;

	cout << "The ideal weight for a " << feet << "-foot-" << inch << " height is " << pounds << " pounds." << endl;

	return 0;
}