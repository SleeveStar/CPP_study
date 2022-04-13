#include <iostream>

using namespace std;

int main() {

    //char : 작은 문자형
    //bool : 
   
    //cpp에선 null 문자 '\0'을 만나야 문자열에서 출력이 끝남
    //"" >> 명시적으로 null문자가 포함되어 있음
    //char 형은 한가지 문자만 저장할 수 있으므로 ""를 사용하면 null문자도 포함된거랑 마찬가지이기 때문에 사용 불가능
    
    //char b = 'a';

    //bool : 0 혹은 1만 나타낼 수 있음 0 = false, 1 = true

    bool a = 0;
    bool b = 1;
    bool c = 10;

    cout << a << " " << b << " " << c << endl;

    return 0;
}