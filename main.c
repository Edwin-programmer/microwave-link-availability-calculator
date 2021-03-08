#include <stdio.h>
int main(){
    double avail_percent, outage_min;
    printf("Enter link availability in percentage: ");
    scanf("%lf", &avail_percent);
    // Calculating the outage or unavailability in minutes
    outage_min= (1-(avail_percent/100))*365*24*60;
    // Result up to 2 decimal points 
    printf("Annual Link outage in Minutes is=%.2lf", outage_min);

    return 0;
}
