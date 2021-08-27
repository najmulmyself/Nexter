#include <stdio.h>
int main() {
  
  float a , b , c , max , small , sec_max;
  printf("Enter 3 numbers:\n");
  scanf("%f%f%f", &a, &b, &c);
// using ternary operator

    max = (a >=b && a >=c) ? a : ((b >= a && b >=c) ? b : ((c >=a && c >=b)? c : 1));
    printf("Highest : %.2f \n",max);

    small = (a <=b && a <=c) ? a : ((b <=a && b <=c) ? b : (c <=a && c <=b)? c : 1);
    printf("Lowest : %.2f \n", small);

    sec_max = (a < max && a > small) ? a : (b < max && b > small) ? b : (c < max && c > small) ? c : 1 ;
    printf("2nd Highest : %.2f \n",sec_max);

  return 0;
}