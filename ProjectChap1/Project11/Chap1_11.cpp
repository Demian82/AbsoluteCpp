/*초 단위의 시간 길이를 표현하는 정수 값을 입력하는 프로그램을 작성하라.
이 프로그램은 초 단위의 시간과 일치하는 시, 분, 초 단위의 시간을 출력해야 한다.
예를 들어 사용자가 총 50,391초를 입력하면 13시간, 59분, 51초를 출력해야 한다.*/

#include <iostream>
using namespace std;

int main()
{
	int timeInSecond, hour, minute, second;

	cout << "Enter the time in second : ";
	cin >> timeInSecond;

	hour = timeInSecond / 3600;
	minute = (timeInSecond % 3600) / 60;
	second = (timeInSecond % 3600) % 60;

	cout << hour << "hours " << minute << "min " << second << "sec." << endl;

	return 0;
}