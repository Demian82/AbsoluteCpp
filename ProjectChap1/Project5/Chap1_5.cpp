/*���� �ڵ��� �Ǹ� �븮���� ���忡 ���õǾ��� �ڵ����� �����ϴ� �Һ����� ���,
�ڵ����� ��ü ������ 4% ������ ��ϼ��� �߰� �δ��ؾ� �ǰ� ���� ��ü ������ 2%�� ���༼,
2.5%�� �ڵ������պ����, 1.25%�� �ڵ��� �����Ⱓ ���� ������� �����ؾ� �Ѵ�.
���� �ڵ��� �����ڴ� �ڽ��� �߰������� �δ��ϴ� ���(��ϼ�, ���༼, �ڵ������պ����, �ڵ��� �����Ⱓ ����)�� 12%�� �ش��ϴ� �ݾ��� �Һ񼼷� �����ؾ� �Ѵ�.
�Һ��ڰ� �ڵ����� ������ �� �ڵ����� ������ �Է��ϴ� �κа� ��ϼ�, ���༼, �����, �����Ⱓ ����, �Һ񼼸� ����ϰ�, ���������� �Һ��ڰ� �δ��ϴ� �Ѻ���� ����϶�.*/

#include <iostream>
using namespace std;

int main()
{
	double carPrice, registTax, travelingTax, insuranceTax, termOfEnsuring, consumptionTax, totalPrice;

	cout << "Car price : ";
	cin >> carPrice;

	registTax = carPrice * 0.04;
	travelingTax = carPrice * 0.02;
	insuranceTax = carPrice * 0.025;
	termOfEnsuring = carPrice * 0.0125;
	consumptionTax = (registTax + travelingTax + insuranceTax + termOfEnsuring) * 0.12;
	totalPrice = carPrice + registTax + travelingTax + insuranceTax + termOfEnsuring + consumptionTax;

	cout << "Total price : " << totalPrice << endl;

	return 0;
}