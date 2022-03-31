#include <iostream>

using namespace std; 

int main(){
    //1. 변수란? 변할 수 있는 수
    //cf) 상수 : 변할 수 없는 수

    /*
    1. 변수의 자료형
    2. 변수의 이름
    3. 변수가 어디에 저장되는가(메모리 영역)*/


    /*
    1. 숫자로 시작할 수 없음
    2. c++에서 사용하고 있는 키워드는 사용할 수 없다.
    3. white space를 사용할 수 없다.
    */

   /*
   int 77aaa;
   int return;
   int aaa  a;
    위와같이는 불가능
    */

   int a; //자료형을 명시하고 이름을 명시하는 것을 선언이라고 함
   a = 7; //선언된 변수에 값을 넣는것을 대입이락 한다.

   int b = 3; //선언과 동시에 값을 대입하는것을 초기화라고 한다.

   cout << "a = " << a << "b = " << b << endl;

    return 0;
}