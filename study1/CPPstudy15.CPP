#include <iostream>
#include <string.h>

using namespace std;

string str = "panda"; //�迭�� ���� i++�� �����ϴ� �Լ��� ���� ����ϰ� �Ǹ� p���� ������� �����


int main()
{
    //while��, do while��
    int i = 0;
    bool a = true;
    bool b = false;
    int j = 0;


    //while�� ���ο� ī���͸� ������ �� �ִ� ������ ���� ������ while ������ ����� �ڵ�� �ۿ��� ���� ����Ǿ�� �Ѵ�.

    while(b){
        cout << "hello\n";
    }

    do {
        cout << "hello\n";
    } while (b);
    //do while ���� Ư¡�� �ݺ��� �����ϰ� ������ �˻��Ѵ�.
    //���ǿ��� ������ �Ǵ��� ���� 1ȸ�� ����ȴ�.

    /*
    while(str[i] != '\0'){
        cout << str[i] << endl;
        i++;
    }
    */
    return 0;
}