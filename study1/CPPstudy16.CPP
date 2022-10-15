#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /*
    //배열 기반 반복문
    int a[5] = {1, 3, 5, 7, 9};
    for(int i = 0; i < 5; i++) {
        cout << a[i];
    }
    cout << "\n";

    for(int i : a) {
     cout << i;
    }
    */

    //중첩 루프 : 2차원 배열 (배열안의 배열) 행과 열의 개념으로 이해 가능
    //ex) temp[행의수][열의수]

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