#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    //�ݺ����̶�?
    /*
    char a[10] = {'a', 'b', 'c', 'd', 'e'};

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;
    */

   for(int i = 0; i < 5; i++) {
        cout << i << "��°�Դϴ�." << endl;
   }

    int a = 10;
    int b = 10;

    cout << "a��" << a << ", b��" << b << endl;
    cout << "a++��" << a++ << endl; //
    cout << "++b��" << ++b << endl; // �ᱹ �Ѵ� ���� 11�� ������ ���� ���������� ��� ��ġ�� ���� �޶�����
    
    cout << "a��" << a << ", b��" << b << endl;

    /*
    1. �ݺ����� ����� ī������ ���� �ʱ�ȭ
    2. �ݺ����� ������ ������ '���� �˻�'
    3. �ݺ��� ��ü�� �����Ѵ�.
    4. ī������ ���� ��ȭ�Ѵ�.
    */

    return 0;
}