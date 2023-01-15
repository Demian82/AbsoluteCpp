/* 미터 톤은 35,273.92온스이다. 온스 단위로 시리얼의 패키지 무게를 읽을 수 있는 프로그램을 작성하고,
시리얼의 미터 톤을 출력할 필요가 있는 박스의 개수와 미터 톤으로 무게를 출력하라.*/
//미터 톤 = 1ton = 35,273.92oz

#include <iostream>
using namespace std;

int main()
{
	double ounceCereals, tonsCereals;

	cout << "How many cereals do you have? : " << endl;
	cin >> ounceCereals;

	tonsCereals = ounceCereals / 35273.92;

	cout << "You have " << tonsCereals << "tons of cereals." << endl;

	return 0;
}