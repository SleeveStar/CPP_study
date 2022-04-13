#include <iostream>
#include <climits>

using namespace std;

//정수형 : 소수부가 없는 수
//음의 정수, 0 양의 정수
//short, int, long, long long 각각 표현할수있는 수의 크기가 다름

int n_int = INT_MAX;
short n_short = SHRT_MAX;
long n_long = LONG_MAX;
long long n_llong = LLONG_MAX;

unsigned int a;
unsigned short b; // 0 ~ 65535의 크기 저장 가능
unsigned long c;
unsigned long long d;

int main(){
    //실수형 : 소수부가 있는 수

    float a = 3.14;
    int b = 3.14; //소수점이 버려지고 정수부분만 출력가능

    return 0;
}