#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    //반복문이란?
    /*
    char a[10] = {'a', 'b', 'c', 'd', 'e'};

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[3] << endl;
    cout << a[4] << endl;
    */

   for(int i = 0; i < 5; i++) {
        cout << i << "번째입니다." << endl;
   }

    int a = 10;
    int b = 10;

    cout << "a는" << a << ", b는" << b << endl;
    cout << "a++는" << a++ << endl; //
    cout << "++b는" << ++b << endl; // 결국 둘다 값은 11로 같지만 연산 순서에따라 출력 위치에 따라 달라진다
    
    cout << "a는" << a << ", b는" << b << endl;

    /*
    1. 반복문에 사용할 카운터의 값을 초기화
    2. 반복문을 진행할 것인지 '조건 검사'
    3. 반복문 몸체를 수행한다.
    4. 카운터의 값을 변화한다.
    */

    return 0;
}