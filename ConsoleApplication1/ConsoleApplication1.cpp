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
/*

상수(Constant)
    - 변하지 않는 수
    - 코드의 안정성과 가독성을 높여줌.
     (매직넘버 회피에 좋다)
     (매크로 와는 달리 타입체크가 가능하다) 
*/

/*

비교 연산자
    - 비교를 하는 연산자.(참이냐 거짓이냐가 결과로 나옴)
    - >, <m >=, <=, ==

    int a = 10;
    int b = 20;
    boll result = a > b;   // 결과는 거짓이니까 result = false;



    int a = 100;
    int b = 20;
    a > b;  // 결과는 참 이니니까 result = true;

    int a = 50;
    int b = 50;
    bool result = a == b; //결과는 참이니까 result = ture;

*/

/* 간단실습 반지름을 입력하면 넓이가 나오는 계산기
#include <iostream>

int main()
{
    
   //float number1 = 10.f; // 10이라는 float 값을 loat인 number1 에 넣기
    //float number2 = 15.0; // 15라는 double 타입 값을  float인 number2에 넣기
    const float Pi = 3.14f; // 상수 선언후 정의
    float ban = 0.f;
    float ner = 0.f;

    
    printf("원의 반지름을 입력해 주세요 : ");
    std::cin >> ban;

    ner = ban * ban * Pi;

    printf("원의 넓이는 %f 입니다", ner);
    
    return 0;
}
*/



/*
int main()
{
    int square = 0;

    printf("정사각형의 한변으 길이를 입력하세여 : ");
    std::cin >> square;
    printf("정사각형의 넓이는 %d 입니다." , square * square);

    // int 변수를 사용해서 큰수를 입력 후 출력하면 범위를 넘어 오버플로어가 발생함

    return 0;
}
*/



/*
#include <iostream>

int main()

{

    float a = 10.0f;
    float b = 0.0f;
    std::cin >> b;

    b = b * 123.0f;


    bool result = a == b; // F9 : 브레이크 포인트 설정/해재 (코드가 실했되던 중 포인트에서 멈춤)

    float 타입을 ==로 비교할 땐 반드시 아래와 같이 진행해야함
    float epsilon = 0.001f;
    a < (b + epsilon);
    a < (b - epsilon);

    return 0;
}
*/


/*

제어문
    - 프로그램의 흐름을 제어하는 문 (statement)
     -조건문 : 조건에 따라 프로그램의 흐름을 변경하는 문
        -if, else if, else
        -swich
        -삼향연결자
     -바복문 : 일정 조건에 따라 코드를 반복하는 문

     if : 소괄호 안이 true면 중괄호 안에 있는 코드를 실행한다.

*/



#include <iostream>
#include <stdio.h>

/*
int main() {



    int a = 10;
    int b = 0;

    printf("a는 10\n b를 입력하세요 : ");

    std::cin >> b;
}

if (a > b)

{

    printf("if가 성공했다.\n");
    printf("b가 %d라서 a가 더 크다", b);

}
if (a <= b)
{
    printf("b가 %d 라서 a가 더 작거나 같다", b);

}
  return 0;
  */

/*
 삼항연산자
    ex )  c = ( a > b ) ? (a * 2 + b) : (a + b * 2);
*/ 

/*

논리 연산자
    - bool 값을 양변에 받아 bool로 된 결과를 낸다.
&& (And) &&의 양쪽이 둘다 true 면 true. 그외는 false
|| (or) ||의  양쪽에 하나라도 ture 가 있으면 true, 아니면 false
! (not) !의 뒤의 bool이 ture면 false, false면  true

*/

