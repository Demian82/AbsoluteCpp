/*�� ������ �������� ���̾�Ʈ ��������� �Ϲ������� ���Ǵ� �ΰ� ���̷ᰡ �����㸦 ������ �̸��� �� �� �ִٰ� �����ߴ�.
�������� �� ģ���� ���� ���⸦ �������� ������� ������ ���� ���ٰ� �Ѵ�.
�״� ���� �ʴ� �ѵ� ������ �󸶳� ���� ���̾�Ʈ ������� ���� �� �ִ��� �˰� �;� �Ѵ�.
�� ������ �ٹ� �� �ִ� ���α׷��� �����.
�� ���α׷��� �Է� ������, �㸦 �װ� �� �ΰ� ���̷��� ��, ���� ü�߰� ���̾�Ʈ�� ���ϴ� ����� �������̴�.
������ ģ���� ������ �����ϱ� ���ؼ� (���� ���� �����԰� �ƴ�) ���̾�Ʈ�� ���������� ���� �ʾ��� ����� �����Ը� ���α׷��� �Է��϶�.
���̾�Ʈ ������� �ΰ� ���̷� 1%�� 10���� 1�� �����ϰ� �ִٰ� �����Ͽ� ����.
�̷��� ���̾�Ʈ ������� �̸��� �ο��ϱ� ���� ������ const�� ����Ͽ� ������ �����϶�.
�������� double�� 0.001�� �ۼ�Ʈ�� ǥ���ϰ� ���� ���� �ִ�.
�� �������� ���� 1ml�� 1g�� ���ٰ� �����Ѵ�.*/

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