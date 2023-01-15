/*한 정부의 연구실은 다이어트 음료수에서 일반적으로 사용되는 인공 감미료가 실험쥐를 죽음에 이르게 할 수 있다고 추정했다.
여러분의 한 친구는 살을 빼기를 원하지만 음료수를 포기할 수는 없다고 한다.
그는 죽지 않는 한도 내에서 얼마나 많은 다이어트 음료수를 마실 수 있는지 알고 싶어 한다.
이 질문에 다발 수 있는 프로그램을 만들라.
이 프로그램의 입력 변수는, 쥐를 죽게 할 인공 감미료의 양, 쥐의 체중과 다이어트를 원하는 사람의 몸무게이다.
여러분 친구의 안전을 보장하기 위해서 (그의 현재 몸무게가 아닌) 다이어트를 연속적으로 하지 않았을 경우의 몸무게를 프로그램에 입력하라.
다이어트 음료수는 인공 감미료 1%의 10분의 1을 포함하고 있다고 가정하여 보자.
이러한 다이어트 음료수에 이름을 부여하기 위해 변경자 const를 사용하여 변수를 선언하라.
여러분은 double형 0.001로 퍼센트를 표현하고 싶을 수도 있다.
이 문제에서 음료 1ml는 1g과 같다고 정의한다.*/

#include <iostream>
using namespace std;

const double msgPerDrink = 0.001;

int main()
{
	double msgKillMouse=5, mouseWeight=100, dieterWeight, ableToDrink;

	cout << "When mouse's weighs is 100g, 5g of sweetener is enought to kill the mouse." << endl;
	cout << "Input weight in kilograms when your friend didn't diet continually. : ";
	cin >> dieterWeight;

	ableToDrink = (((dieterWeight * 1000) / mouseWeight) * msgKillMouse) / msgPerDrink;

	cout << "Your friend can drink Diet Drink " << ableToDrink << "ml" << endl;

	return 0;
}