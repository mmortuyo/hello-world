#include <stdio.h>

int main () {
  char choice;
  float celsius, fahrenheit;
  printf("This is a temperature conversion program.\n");
  printf("Press [c] to convert Celsius to Fahrenheit.\n");
  printf("      [f] to convert Fahrenheit to Celsius.\n");
  printf("Choice: ");
  scanf("%c", &choice);
  if(choice=='c' || choice=='C'){
    printf("\nInput Celsius: ");
    scanf("%f", &celsius);
    fahrenheit=celsius*1.8 + 32;
    printf("\nFahrenheit is %.2f.\n", fahrenheit);
  }else if(choice=='f' || choice=='F'){
    printf("\nInput Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius=(fahrenheit-32.0)*5.0/9.0;
    printf("\Celsius is %.2f.\n", celsius);
  }else{
    printf("\nError: Invalid input.");
  }
  return 0;
}
