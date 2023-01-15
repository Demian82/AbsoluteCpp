/*사용자가 초단위의 시간을 입력하고 자유낙하를 하는 데 걸린 시간이 있다면 얼마나 높은데서 물체가 떨어졌는지를 출력할 수 있는 프로그램을 작성하라.
공기에 대한 마찰과 저항은 없고 중력에 의해 초당 32피트의 상수 가속도가 있다고 가정하자.
방정식을 사용하라.
거리 = 1/2 * 가속도 * 시간 ^(2) */

#include <iostream>
using namespace std;

const int accelation = 32; // feet/sec
int main()
{
	int second;
	double heights;

	cout << "Enter the time in second : ";
	cin >> second;

	heights = 0.5 * accelation * second * second;

	cout << "Height is " << heights << " feets." << endl;

	return 0;
}