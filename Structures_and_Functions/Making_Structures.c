#include <stdio.h>

int main() {
  typedef struct { int x, y; } Point;
  Point p; 
  p.x = 3;
  p.y = 4;
  
  printf("(%d, %d)\n", p.x, p.y);

}
  
