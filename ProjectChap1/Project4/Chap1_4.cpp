/*�Һ��� ������ �����ϴ� ���� �׻� ������������ �ʴ�.
������ �� ���ִ� ������ ���� �ۿ��ϴ� ���� �Һ� �����̴�.
�� ������ �׸鰡 $1,000, 15% �������� 18������ ���� �Ⱓ�� ������ �ִٰ� �����Ͽ� ����.
���ڴ� �׸鰡 $1,000�� 0.15�� ���Ͽ� $150�� ����ȴ�.
�� �׼��� ��ü ���ڷ� $225�� �����ϱ� ���� ���� ���� 1.5���� ���Ѵ�.
�׸鰡�κ��� �� �׼��� �����Ͽ� �Һ��ڿ��Դ� $775�� ���� �ȴ�.
�׸鰡�� ������� ������ �� �Һη� ������ �����Ѵ�.
�׷��Ƿ� �� �Һα��� $1,000�� 18�� ���� $55.56�̴�.
�̷��� ������ %775�� �ʿ��� �Һ��ڿ��� ���ڤ��� ������ $1,000�� �ʿ��� �Һ��ڿ��Դ� �� �� �����ϴ�.
3���� �Է� ���� �޴� ���α׷��� �����: �Һ��ڰ� �ޱ⸦ ���ϴ� �׼�, ������, �� �� ���� ���� ���ӱⰣ.
�� ���α׷��� �ʿ��� ���� �������� �Һ��ڸ� ���� �䱸�Ǵ� �׸鰡�� ����Ͽ��߸� �Ѵ�.*/

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