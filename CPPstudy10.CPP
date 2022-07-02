#include <iostream>
using namespace std;

int main()
{
    //공용체(union) : 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.

    union MyUnion
    {
        int intVal;
        long longVal;
        float floatVal;
    };

/*
    MyUnion test;
    test.intVal = 3;
    std::cout << test.intVal <<std::endl;
    test.longVal = 33;
    std::cout << test.intVal <<std::endl;
    std::cout << test.longVal <<std::endl;
    test.floatVal = 3.3;
    std::cout << test.intVal <<std::endl;
    std::cout << test.longVal <<std::endl;
    std::cout << test.floatVal <<std::endl;
    //한 가지만 저장할 수 있기 때문에 동시에 사용하게되면 이전 데이터값이 소실되게 된다.
    //여러가지 데이터형을 사용할 수 있지만 동시 사용 불가하지만 데이터를 절약할 수 있다.
    
    //열거체(enum) : 기호 상수를 만드는 것에 대한 또다른 방법.
*/
    enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};

    /*
    1. spectrum을 새로운 데이터형 이름으로 만든다.
    2. spectrum에서 정의된 red, orange, yellow.. 0에서 부터 7까지 정수 값을 각각 나타내는 기호 상수로 만든다.
    3. 열거자들끼리의 산술연산은 지원되지 않는다.
    */

   spectrum a = orange;
   cout << a << endl;

    int b;
    b = blue;
    b = blue + 3;

    cout << b << endl;

    return 0;
};