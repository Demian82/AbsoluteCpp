/*한 회사의 직원드른 6개월 동안 소급하여 7.6%의 임금 인상을 확보하였다. ( 6개월 전의 월급 부터 7.6%의 인상된 임금을 받아야 한다. )
직원의 이전 연종을 입력으로 받고 지급 기일이 만기된 직원의 속브 비용의 액수, 새 연봉과 새 월급을 출력하는 프로그램을 작성하라.
임금 인상을 표현하기 위해 변경자 const를 사용하여 변수를 선언하라.*/

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