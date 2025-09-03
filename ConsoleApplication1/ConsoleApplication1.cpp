// 2025 09 03 공부 내용

/*

이진수(Bainaary)
    - 컴퓨터는 0과 1만 알 수 있기 때문ㅇ 기본적으로 이진수를 사용한다.

    int number = 10; // 사람이 알아보기 위해 10진수로 값을 대입한것
                     // 실제 메모리에는 0000 0000 0000 0000 0000 000 0000 1010
                     // ex) 7을 2진수로 나누면 0111 모르겠음 계산기 갔다 쓰자
*/

/*


데이터 타입

int : 정수형 (일반적으로 32 bit, 범위는 대충 -21억 ~ 21억)
float : 실수형 (32bit , '태생적으로 오차가 있음' 총 소숫점 7자리부터 오차 발생
        ex)3.1415921 - 여기서 짜름
        ex)출력을 %f 로 함
        ex)출력시 %.2f 라고 하면 소수점 두자리 수까지만 출력함 
double : 실수형. 64bit
bool : 불리언 ('true/false 만 저장')
char : 캐릭터 ( 글자 하나를 저장하는 데이터 타입.'8bit 정수형')
        ex) char alpha = 'a';
        ex) char alpha = '64';
std::string : 스트링(문자열을 쉽게 다루 수 있는 자료형)
        문자열이란? : 글자 여러개가 연결된 것
        ex) std::string str = "Hello World!";
            char* str;
            char str[32];



*/

/* 간단실습 반지름을 입력하면 넓이가 나오는 계산기
#include <iostream>

int main()
{
   //float number1 = 10.f; // 10이라는 float 값을 loat인 number1 에 넣기
    //float number2 = 15.0; // 15라는 double 타입 값을  float인 number2에 넣기

    float ban = 0.f;
    float ner = 0.f;

    
    printf("원의 반지름을 입력해 주세요 : ");
    std::cin >> ban;

    ner = ban * ban * 3.14;

    printf("원의 넓이는 %f 입니다", ner);
    
    return 0;
}
*/

