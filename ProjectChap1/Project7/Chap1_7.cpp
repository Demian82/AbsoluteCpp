/*��ϴ� ���� �Һ�Ǵ� �������� ���� �����ϴ� �� ���� ����� MET(metabolic equivalants, ���Ȱ����)�� ����ϴ� ���̴�.
������ �پ��� Ȱ���� ���� METS�̴�.

�޸��� 6 MPH : 10 METS
�� : 8METS
���� : 1METS

�д� �Ҹ�Ǵ� Į�θ��� ���� Į�θ�/�� = 0.0175 X 1MET X ������(kg)�� ���� ���� ������ �� �ִ�.
�Ŀ�� ������ ��ü�� ������, Ȱ���� ���� METS�� �� �׸��� �׷��� Ȱ���� �ҿ�� ���� ������ �Ҹ�� ��ü Į�θ��� �翡 ���� ������ ����ϴ� ���α׷��� �����(1kg�� 2.2�Ŀ��� ����.)*/

#include <iostream>
using namespace std;

int main()
{
	double weightInPounds, mets, minutes, weightInKg, calorie;

	cout << "Input weight in pounds : ";
	cin >> weightInPounds;
	cout << "Input METS : ";
	cin >> mets;
	cout << "Input active time in minutes : ";
	cin >> minutes;

	weightInKg = weightInPounds / 2.2;
	calorie = 0.0175 * mets * weightInKg * minutes;

	cout << "Total consumed calories are " << calorie << "cal." << endl;

	return 0;
}