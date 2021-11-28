#include <stdio.h>

int main()
{
	int *p = NULL;  // int* p == int * p 모두 같음
	int num = 15;

	p = &num;

	printf("int 변수 num의 주소 : %d \n", &num);
	printf("포인터 p의 값 : %d \n", p);
	printf("포인터 p가 가리키는 값 : %d \n", *p);

	return 0;
}
//

https://edu.goorm.io/learn/lecture/201/%ED%95%9C-%EB%88%88%EC%97%90-%EB%81%9D%EB%82%B4%EB%8A%94-c%EC%96%B8%EC%96%B4-%EA%B8%B0%EC%B4%88/lesson/1268168/%EB%B0%98%EB%B3%B5%EB%AC%B8-do-while
