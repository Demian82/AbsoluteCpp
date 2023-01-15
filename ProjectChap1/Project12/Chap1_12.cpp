/*사람의 이상적인 몸무게는 처음 5피트당 110파운드를 할당하고 키가 1인치씩 증가할 때마다 5파운드를 더해서 추정할 수 있다.
사람의 키를 변수로 표현하기 위해서 피트(feet) 값을 한 변수에 그리고 인치(inch) 값을 다른 변수에 설정한 다음에, 키보드를 통하여 피트와 인치를 각각 읽어서 키를 표현하는 프로그램을 작성하라.
단, 프로그램을 작성할 때 사람의 키는 최소한 5피트 이상이라고 가정하자.
예를 들면 6피트 3인치의 키를 가진 사람의 경우 6은 한 변수에, 3은 다른 변수에 저장한 다음에 이 변수들의 값을 이용하여 이상적인 체중을 계산하는 프로그램을 작성하라.
12인치 = 1 피트*/

#include <iostream>
using namespace std;

int main()
{
	int feet, inch, pounds;

	cout << "Enter the height in feet and inches ( 5feet is minimum; feets inches ) : ";
	cin >> feet >> inch;

	pounds = 110 + (feet - 5) * 12 * 5 + inch * 5;

	cout << "The ideal weight for a " << feet << "-foot-" << inch << " height is " << pounds << " pounds." << endl;

	return 0;
}