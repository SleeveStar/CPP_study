#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*
    //�迭 ��� �ݺ���
    int a[5] = {1, 3, 5, 7, 9};
    for(int i = 0; i < 5; i++) {
        cout << a[i];
    }
    cout << "\n";

    for(int i : a) {
     cout << i;
    }
    */

    //��ø ���� : 2���� �迭 (�迭���� �迭) ��� ���� �������� ���� ����
    //ex) temp[���Ǽ�][���Ǽ�]

    int temp[4][5] = 
    {
        {1, 2, 3, 4, 5},
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35}
    };
    
    for(int row = 0; row < 4; row++){
        for(int col = 0; col < 5; col++){
            cout << temp[row][col] << " ";
        }
        cout << "\n";
    }

    return 0;
}