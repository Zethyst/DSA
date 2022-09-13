#include <stdio.h>
struct Distance {
   float kilometer;
   float meter;
} d1, d2, result;

 int main() {
   printf("Enter 1st distance\n");
   printf("Kilometer: ");
   scanf("%f", &d1.kilometer);
   fflush(stdin);
   printf("Meter: ");
   scanf("%f", &d1.meter);
  
   printf("\nEnter 2nd distance\n");
   printf("Kilometer: ");
   scanf("%f", &d2.kilometer);
   fflush(stdin);
   printf("Meter: ");
   scanf("%f", &d2.meter);
  
   result.kilometer = d1.kilometer + d2.kilometer;
   result.meter = d1.meter + d2.meter;
   printf("\nSum of kilometers = %.2f km\n", result.kilometer);
   printf("\nSum of meters = %.2f m\n", result.meter);
   result.meter=result.meter/1000;

   if (result.meter >= 1000) 
   {
      result.meter = result.meter/1000;
      result.kilometer++;
   }
   float sum=result.kilometer + result.meter;
   printf("\nSum of both the distances in kilometers = %.2f km\n", sum);
   return 0;
}