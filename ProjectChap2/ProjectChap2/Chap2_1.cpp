/*�̰��� �� �⿡ ���� ������ ����� ������� ������ ������ �������� �ʾұ� �����̴�.
���� �������� ȸ�簡 ���� 200���� ������ �ʿ��ѵ�, ���ݺ��� 2�� ���� ������ ������ ���� ���ݰ� ���ٸ� �������� ����� �װ��� ����� �� ����.
���÷��̼� ������ �װ��� ���ú��� �� ������ ���̴�.
Ư�� ������ ������ �׸��� �������� �����ϴ� ���α׷��� �ۼ��϶�.
�� ���α׷��� ������ ���, �������κ��� �� ������ ������ ���� ������ ���÷��̼� ������ ���� ���̴�.
�� ���α׷��� ������ �Ⱓ ���� ������ �������� ����Ѵ�.
����ڿ��� ���÷��̼��� 5.6(�ۼ�Ʈ)�� ���� �ۼ�Ʈ ������ �Է¹ް�, ���α׷��� 0.056ó�� �ۼ�Ʈ�� ������� ��ȯ�Ͽ��� �Ѵ�.
�׸��� ���÷��̼ǿ� ���� ������ �����׿� ������ �� �ִ� ������ ����Ͽ��� �Ѵ�. (��Ʈ : ���� ���.)*/

#include <iostream>

using namespace std;

int main()
{
	double cost, totalCost, quantity, inflationRate, period, costAfterInfla;

	cout << "Enter the cost of goods : ";
	cin >> cost;
	cout << "Enter the quantity purchased per year : ";
	cin >> quantity;
	cout << "Enter the inflation rate. : ";
	cin >> inflationRate;
	cout << "Enter the period : ";
	cin >> period;

	totalCost = cost * quantity;

	for (int i = 0; i < period; i++)
	{
		costAfterInfla = totalCost * (1 + (inflationRate / 100));
		cout << "Applied iflation rate, total cost of goods " << costAfterInfla << " dollars." << endl;
		totalCost = costAfterInfla;
	}

	return 0;
}