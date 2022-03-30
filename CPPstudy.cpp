#include <iostream>

using namespace std; //이 문장이 없다면 std::cout , std::endl < 이런식으로 사용하여야함

//' ; ' 종결자로서 활용

int main()
{
    //c++ 코드에는 반드시 main의 이름을 가지고 있는 함수가 있어야 한다.
   
    cout << "Hello, World!" << endl;
    //cout은 다음에 나오는 문장을 콘솔창에 출력을 함
    //endl은 줄바꿈의 역할을 한다 C에서는 /n
    //<<는 데이터의 흐름, 데이터의 방향을 의미함 줄을 바꾼다 > 문장 > cout으로 출력
    cout << "Goodbye, World!" << endl;


    return 0;
}