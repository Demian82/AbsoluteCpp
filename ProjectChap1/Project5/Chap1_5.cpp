/*잘의 자동차 판매 대리점의 매장에 전시되었던 자동차를 구매하는 소비자의 경우,
자동차의 전체 가격의 4% 정도를 등록세로 추가 부담해야 되고 또한 전체 가격의 2%는 주행세,
2.5%는 자동차종합보험료, 1.25%는 자동차 보증기간 연장 명목으로 지불해야 한다.
또한 자동차 구매자는 자신이 추가적으로 부담하는 비용(등록세, 주행세, 자동차종합보험료, 자동차 보증기간 연장)의 12%에 해당하는 금액을 소비세로 지불해야 한다.
소비자가 자동차를 구매할 때 자동차의 가격을 입력하는 부분과 등록세, 주행세, 보험료, 보증기간 연장, 소비세를 출력하고, 최종적으로 소비자가 부담하는 총비용을 출력하라.*/

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