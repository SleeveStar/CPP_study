#include <iostream>
#include <cstring>

using namespace std;

    //구조체 : 다른 데이터형이 허용되는 데이터의 집합
    //cf) 배열 : 같은 데이터형의 집합

    //축구선수

int main(){
    struct MyStruct
    {
        string name;
        string position;
        int height;
        int weight;
    } B;
    
    MyStruct A;
    A.name = "Song";
    A.position = "Striker";
    A.height = 180;
    A.weight = 80;
    /*
    MyStruct A = {
        "Son",
        "Striker",
        183,
        77
    }
    */
    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    //위에 존재하는 MyStruct 뒤에 입력한 변수명이 있다면 새로 구조체를 만들어주지 않아도 아래처럼 B = {} 만으로 MyStruct B를 만들 수 있는것이다.
    //중괄호 내의 빈 값들은 0으로 초기화된 상태이다.

    B = {

    }; 

    cout << B.height << endl;

    //구조체역시 배열로 전환 가능하다.
    //구조체나 배열내 구분은 , 로 가능

    MyStruct C[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}
    };

    cout << C[0].height << endl;

   

    return 0;
}