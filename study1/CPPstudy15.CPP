#include <iostream>
#include <string.h>

using namespace std;

string str = "panda"; //배열과 같음 i++로 증가하는 함수를 통해 출력하게 되면 p부터 순서대로 출력함


int main()
{
    //while문, do while문
    int i = 0;
    bool a = true;
    bool b = false;
    int j = 0;


    //while문 내부에 카운터를 선언할 수 있는 공간이 없기 때문에 while 문에서 사용할 코드는 밖에서 먼저 선언되어야 한다.

    while(b){
        cout << "hello\n";
    }

    do {
        cout << "hello\n";
    } while (b);
    //do while 문의 특징은 반복을 실행하고 조건을 검사한다.
    //조건에서 부정이 되더라도 최초 1회는 실행된다.

    /*
    while(str[i] != '\0'){
        cout << str[i] << endl;
        i++;
    }
    */
    return 0;
}