#include <stdio.h>
#include <math.h>

float fahrenheit_to_celsius(float farenheit)
{
    float c = (farenheit-32.0) *5.0/9.0;
    return c;
}
float celsius_to_fahrenheit(float celcius)
{
    float f = (celcius*9.0) / 5.0 +32.0;
    return f;
}

int main() {
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f));  // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c));  // Expected output: 98.6

    return 0;
}