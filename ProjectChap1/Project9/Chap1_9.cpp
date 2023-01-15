/*여러분의 지역 게임센터의 비디오게임 기계는 게임을 얼마나 잘하느냐에 따라 쿠폰을 출력한다.
여러분은 10개의 쿠폰을 캔디바 하나와 바꾸거나 3개의 쿠폰을 풍선껌으로 바꿀 수 있다.
여러분은 풍선껌보다 캔디바를 좋아한다.
여러분이 얻은 쿠폰의 수를 입력하고 모든 쿠폰을 첫 번째로 캔디바를 위해서 사용하고 남은 쿠폰을 풍선껌을 얻기위해 사용한다면 얼마나 많은 캔디바와 풍선껌을 얻을 수 있는지 출력하는 프로그램을 작성하라.*/

#include <iostream>
using namespace std;

int main()
{
	int coupon, candybar, bubblegum;

	cout << "Enter the number of coupon : ";
	cin >> coupon;

	candybar = coupon / 10;
	bubblegum = (coupon % 10) / 3;

	cout << "You can have " << candybar << " candybars and " << bubblegum << " bubblegums." << endl;

	return 0;
}