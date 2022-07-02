#include <iostream>

using namespace std;

int main(){

    //CPP : 객체지행 프로그래밍
    /*
    컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
    ex) 배열을 하나 생성하고자 한다. 
    배열 생성 
    - 재래적 절차적 프로그래밍 : 배열의 크기가 미리 결정
    - 객체지향 프로그래밍 : 배열의 크기를 실행 시간 결정(변수로 배열의 크기를 결정할 수 있다.)

    포인터 : 사용할 주소에 이름을 붙인다.
    즉, 포인터는 포인터의 이름이 주소를 나타낸다.
    간접값 연산자, 간접 참조 연산자*

    ex) int* c, d  //c는 포인터 변수, d는 int형 변수가된다.
    */
   
    int a = 6;
    int* b;

    b = &a;

    cout << "a의 값 " << a << endl;
    cout << "*b의 값 " << *b << endl;

    cout << "a의 주소 " << &a << endl;
    cout << "*b의 주소 " << b << endl;

    *b = *b + 1;

    cout << "이제 a의 값은 " << a << endl;
     
    return 0;
}