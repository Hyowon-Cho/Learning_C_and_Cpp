printf

\ = escape squence

%d  char, short, int  부호있는 10진수 정수
%ld  long  부호있는 10진수 정수
%lld  long long
%u  unsigned int
%o  unsigned int  8진수 정수 (%#o 로 출력하면 07과 같은 식으로)
%x, %X  unsigned int 16진수 정수 (%#x 로 출력하면 0x7과 같은 식으로)
%f  float, double
%lf  long double
%e, %E  float, double  10진수 방식의 부동소수점 실수
%g, %G  float, double  값에 따라 %f, %e 중 선택
%c  char, short, int  값에 대응하는 문자
%s  char*  문자열
%p  void*  포인터의 주소값

출력 시 필드 폭 지정하여 정돈하기 

%8d  필드 폭을 8칸 확보하고, 오른쪽 정렬한다.
%-8d  필드 폭을 8칸 확보하고, 왼쪽 정렬한다.


scanf

scanf("어떻게 받아들일래?", "어디에 저장할래?")

"float, double, long double 의 데이터 출력에 사용되는 서식문자는 각각 %f, %f, %Lf 이다."
                                                         입력                                        %f, %lf, %Lf



// while

while(CONDITION)
{
  // do
}

do {

} while (…)



// for

for (; ; ; ) {}
// 주의! for의 초기식 내에서 변수를 정의하지 않는다.

if (CONDITION)
{ 

} 
else 
{

}



// switch

switch (CONDITION)
{
case 1:
  …
  break;
default:
}



// goto (거의 사용하지 않는다.)

int main(void)
{

goto ONE;

ONE: 
     // do soemthing
     goto END;

END:
     return 0;

}
 


함수 정의

int add(int num1, int num2) { … }

void doNothing(void) // 리턴값과 파라미터를 받지 않는 경우 void를 명시한다.


!! 함수는 호출되기 전에 미리 정의되어야 한다.
단, 선언과 정의를 분리해 미리 선언해둔다면 문제 없다.

int add(int, int); // 매개변수 이름을 생략하고 선언



변수

- 메모리상에 존재하는 시간.
- 변수에 접근할 수 있는 범위


'지역 변수' = "중괄호" 내에 선언되는 변수. 지역 변수의 스콥은 중괄호다.
지역변수는 '스택(stack)'이라는 메모리 영역에 할당된다.
지역변수는 해당 선언문이 실행될 때 메모리 공간에 할당되었다가,
선언문이 존재하는 함수가 반환을 하면(종료를 하면) 메모리 공간에서 소멸된다.


'전역 변수' = 프로그램이 실행되면 메모리 공간에 할당되었다가, 종료될 때까지 메모리 공간에 남아있는 변수
별도의 값을 초기화하지 않으면 0으로 할당된다.


static 변수 = 지역변수에 static 선언이 붙게 되면, 이는 전역변수의 성격을 지니는 변수가 된다.
- 선언된 함수 내에서만 접근이 가능하다
- 딱 1회 초기화되고 프로그램 종료시까지 메모리 공간에 존재한다
(전역 변수와 같은 성격을 갖지만, 접근 범위를 해당 함수 내로 제한하기 위해서)

int i = 0;
for (i = 0; i < 5; i++)
{
  static int num = 0;
  printf("%d", num++);
}


register 변수 = CPU 내에 존재하는 '레지스터'라는 메모리 공간에 저장할 확률이 높이진다.
빈번히 사용하는 변수를 가장 접근이 빠른 레지스터에 저장하도록 한다.
하지만 최종 결정은 컴파일러가 내린다.
또한 지역 변수에만 선언 가능하다.
register int num = 3;



재귀함수
실제로 함수를 구성하는 명령문은 CPU로 이동이 되어서(복사되어) 실행된다.
그래서 재귀 호출이 가능한 것!
