/*������ ���ڵ��� ���� ����ϴ� ���α׷��� �ۼ��϶�.
���� ��� ���� �Էµ� ���ڰ� 12349��� ���ڵ��� ���� 9 + 4 + 3 + 2 + 1 = 19�̴�.*/

#include <iostream>
using namespace std;

int main()
{
    int num, sum=0;

    cout << "Enter num : ";
    cin >> num;

    do
    {
        sum = num % 10;
        num = num / 10;
    } while (num > 0);

    cout << "Sumation : " << sum << endl;

    return 0;
}