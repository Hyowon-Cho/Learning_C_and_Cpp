#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int* ptr_a; // 포인터를 선언
	ptr_a = &a; // 포인터를 저장한 값 자체를 a의 주소로 바꿀 것이다

	*ptr_a = 20; // 포인터가 가리키는 변수 (a)에 20을 저장한다

	/*cout << "ptr_a의 값 : " << ptr_a << " " << endl; */
	printf("ptr_a + 1의 값 : %d\n", ptr_a);
	printf("ptr_a + 1의 값 : %d\n", ptr_a + 1);
}
