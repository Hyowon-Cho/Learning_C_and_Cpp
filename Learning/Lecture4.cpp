#include <iostream>

int main() {
  int math = 90, korean = 95, english = 96;
  float sum = math + korean + english;
  double avg = sum / 3;

  printf("%f\n", avg);
}

/* float vs double Difference

float = 4 bytes,  In general, 7 decimal digits precision.

double = 8 bytes, In general, 15 decimal digits precision */
