/*근로자가 1달을 기준으로 해서 규정시간에 업무를 수행할 때는 1시간당 $40의 임금을 받는다.
그리고 근로자는 1달에 최소한 125시간 이상의 근로시간을 가지며 야근을 하는 경우에는 1시간당 $60의 임금이 지불된다.
근로자의 전체 소득 중에서 5%는 연금으로 공제되고, 10%는 근로소득 세금, 2.5%는 의료보험료로 공제된다.
또한 구내식당 이용을 위해서 매달 $50가 월급에서 공제된다.
근로자가 주 단위로 근무하는 근로시간을 입력하는 부분과 1달을 기준으로 해서 근로자의 전체 소득, 공제되는 금액 및 근로자가 실제로 수령하는 월급을 출력하는 프로그램을 작성하라.*/

//최소 근로시간 125시간을 초과하는 근무시간은 야근으로 계산한다.
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