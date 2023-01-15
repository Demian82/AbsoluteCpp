/*숫자 n의 제곱근을 계산하는 바빌론 알고리즘은 다음과 같다.
1. 대답에 대한 guess를 만들라(초기 추정을 n/2로 정할 수 있다.)
2. r = n / guess를 계산하라.
3. guess = (guess + r) / 2로 정하라.
4. 필요한 만큼 2단계로 돌아가서 반복하라. 2단계와 3단계가 반복될수록 guess는 n의 제곱근과 더육 유사한 값이 될 것이다.

정수 n을 입력하고 바빌론 알고리즘을 5번 반복하여 소수점 둘째자리까지 double형으로 대답을 출력하라.
여러분의 대답은 n의 작은 값에 대해 더욱 정확할 것이다.*/

#include <iostream>
using namespace std;

int main()
{
	double guess, num, r;

	cout << "Input number what want to know : ";
	cin >> num;

	guess = num / 2;

	int i = 0;
	while ( i < 5 )
	{
		r = num / guess;
		guess = (guess + r) / 2;
		i++;
	}

	cout << guess;

	return 0;
}