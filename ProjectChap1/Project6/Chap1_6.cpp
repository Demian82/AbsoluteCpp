/*�ٷ��ڰ� 1���� �������� �ؼ� �����ð��� ������ ������ ���� 1�ð��� $40�� �ӱ��� �޴´�.
�׸��� �ٷ��ڴ� 1�޿� �ּ��� 125�ð� �̻��� �ٷνð��� ������ �߱��� �ϴ� ��쿡�� 1�ð��� $60�� �ӱ��� ���ҵȴ�.
�ٷ����� ��ü �ҵ� �߿��� 5%�� �������� �����ǰ�, 10%�� �ٷμҵ� ����, 2.5%�� �ǷẸ���� �����ȴ�.
���� �����Ĵ� �̿��� ���ؼ� �Ŵ� $50�� ���޿��� �����ȴ�.
�ٷ��ڰ� �� ������ �ٹ��ϴ� �ٷνð��� �Է��ϴ� �κа� 1���� �������� �ؼ� �ٷ����� ��ü �ҵ�, �����Ǵ� �ݾ� �� �ٷ��ڰ� ������ �����ϴ� ������ ����ϴ� ���α׷��� �ۼ��϶�.*/

//�ּ� �ٷνð� 125�ð��� �ʰ��ϴ� �ٹ��ð��� �߱����� ����Ѵ�.
#include <iostream>
using namespace std;

int main()
{
	int workingHours, cafeteria;
	double earnedIncome, deductedAmount, pension, tax, medicalInsuranceMoney, actualSalary;

	cout << "Working hours(minimum working hours are 125 hours) : ";
	cin >> workingHours;

	earnedIncome = (125 * 40) + ((workingHours - 125) * 60);
	pension = earnedIncome * 0.05;
	tax = earnedIncome * 0.1;
	medicalInsuranceMoney = earnedIncome * 0.025;
	cafeteria = 50;
	deductedAmount = pension + tax + medicalInsuranceMoney + cafeteria;

	actualSalary = earnedIncome - deductedAmount;

	cout << "Total incomes are " << earnedIncome << "dollars" << endl;
	cout << "Deducted amount is " << deductedAmount << "dollars" << endl;
	cout << "Actual salary is " << actualSalary << "dollars" << endl;

	return 0;
}