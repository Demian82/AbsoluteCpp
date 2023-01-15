/*운동하는 동안 소비되는 에너지의 양을 측정하는 한 가지 방법은 MET(metabolic equivalants, 대사활동량)를 사용하는 것이다.
다음은 다양한 활동에 대한 METS이다.

달리기 6 MPH : 10 METS
농구 : 8METS
수면 : 1METS

분당 소모되는 칼로리의 양은 칼로리/분 = 0.0175 X 1MET X 몸무게(kg)의 식을 통해 측정할 수 있다.
파운드 단위로 물체의 몸무게, 활동에 대한 METS의 수 그리고 그러한 활동에 소요된 분을 입히고 소모된 전체 칼로리의 양에 대한 견적을 출력하는 프로그램을 만들라(1kg은 2.2파운드와 같다.)*/

#include <iostream>
using namespace std;

int main()
{
	double weightInPounds, mets, minutes, weightInKg, calorie;

	cout << "Input weight in pounds : ";
	cin >> weightInPounds;
	cout << "Input METS : ";
	cin >> mets;
	cout << "Input active time in minutes : ";
	cin >> minutes;

	weightInKg = weightInPounds / 2.2;
	calorie = 0.0175 * mets * weightInKg * minutes;

	cout << "Total consumed calories are " << calorie << "cal." << endl;

	return 0;
}