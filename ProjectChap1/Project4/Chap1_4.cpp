/*소비자 대출을 협상하는 것은 항상 간단하지만은 않다.
대출의 한 혀애는 다음과 같이 작용하는 할인 할부 대출이다.
한 대출이 액면가 $1,000, 15% 이자율과 18개월의 존속 기간을 가지고 있다고 가정하여 보자.
이자는 액면가 $1,000에 0.15를 곱하여 $150로 산출된다.
그 액수에 전체 이자로 $225를 산출하기 위해 대출 기한 1.5년을 곱한다.
액면가로부터 그 액수를 공제하여 소비자에게는 $775만 남게 된다.
액면가를 기반으로 동일한 월 할부로 반제를 형성한다.
그러므로 월 할부금은 $1,000를 18로 나눈 $55.56이다.
이러한 계산법은 %775가 필요한 소비자에게 나쁘ㄱ지 않지만 $1,000가 필요한 소비자에게는 좀 더 복잡하다.
3개의 입력 값을 받는 프로그램을 만들라: 소비자가 받기를 원하는 액수, 이자율, 몇 달 안의 대출 지속기간.
이 프로그램은 필요한 양을 받으려는 소비자를 위해 요구되는 액면가를 계산하여야만 한다.*/

#include <iostream>
using namespace std;

int main()
{
	double necessaryExpenses, interestRate, lendingTerms, actualLoanedMoney;

	cout << "Input the necessary expenses : ";
	cin >> necessaryExpenses;
	cout << "Input the interest rate( 1 is 100% ) : ";
	cin >> interestRate;
	cout << "Input the leding term ( 1 is 1 year ) : ";
	cin >> lendingTerms;

	actualLoanedMoney = necessaryExpenses / (1 - (interestRate * lendingTerms));

	cout << "You need to lend " << actualLoanedMoney << "$ if you need " << necessaryExpenses << "$." << endl;

	return 0;
}