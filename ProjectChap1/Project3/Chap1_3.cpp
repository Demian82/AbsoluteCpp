/*�� ȸ���� �����帥 6���� ���� �ұ��Ͽ� 7.6%�� �ӱ� �λ��� Ȯ���Ͽ���. ( 6���� ���� ���� ���� 7.6%�� �λ�� �ӱ��� �޾ƾ� �Ѵ�. )
������ ���� ������ �Է����� �ް� ���� ������ ����� ������ �Ӻ� ����� �׼�, �� ������ �� ������ ����ϴ� ���α׷��� �ۼ��϶�.
�ӱ� �λ��� ǥ���ϱ� ���� ������ const�� ����Ͽ� ������ �����϶�.*/

#include <iostream>
using namespace std;

const double wageIncreaseRate = 1.076;

int main()
{
	double annualSalaryBefore, retroactivePay, annualSalaryAfter, newMonthlySalary;

	cout << "Input staff's wage before negotiation. : ";
	cin >> annualSalaryBefore;

	retroactivePay = ((annualSalaryBefore / 2) * (wageIncreaseRate - 1));
	annualSalaryAfter = annualSalaryBefore * wageIncreaseRate;
	newMonthlySalary = annualSalaryAfter / 12;

	cout << "Retoractive pay : " << retroactivePay << endl;
	cout << "Raised annual salary : " << annualSalaryAfter << endl;
	cout << "Raised monthly salary : " << newMonthlySalary << endl;

	return 0;
}