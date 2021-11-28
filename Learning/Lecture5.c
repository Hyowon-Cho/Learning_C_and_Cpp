#include <iostream>

int main() {
  float w;
  float h;

  float bmi = w / (h * h);
  
  printf("체중 입력 : \n");

  scanf("%f\n", &w);

  printf("키 입력 : \n");
  scanf("%f\n", &h);


  printf("당신의 BMI는 %f\n", bmi);

}

// Checking your BMI Project
