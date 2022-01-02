#include <stdio.h>

int main(void) {
  typedef int typedef_Mode; // typedef 와 typedef_Mode  == int 중요!!
  typedef_Mode n = 20;
  printf("%d\n",n);
  printf("%d\n", sizeof(typedef_Mode));
}


// One more example

#include <stdio.h>

int main(void) {
  int point[2] = {3, 4};
  printf("(%d, %d\n", point[0], point[1]);
}

에서 Typedef 를 사용해보자

#include <stdio.h>

int main(void) {
  typedef int pair[2] // 두 개짜리 Int형 배열
  Pair point = {3, 4};
  printf("(%d, %d\n", point[0], point[1]);
}

// One more example

#include <stdio.h>

int main(void) {
  char *name= "kimmanjung"; // Char형 포인터에 문자열을 받을 수 있다.
  printf("%s\n", name);
}

이것을

#include <stdio.h>

int main(void) {
  typedef char* string;
  string name= "kimmanjung"; // 이렇게 변환이 가능하다.
  printf("%s\n", name);
}
