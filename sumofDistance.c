#include <stdio.h>

struct Distance{
   int ft;
   float in;
};

int main(){
    struct Distance dis1,dis2,resultant;
    printf("Enter distance-1\n");
    printf("Enter feet: ");
    scanf("%d", &dis1.ft);
    printf("Enter inch: ");
    scanf("%f", &dis1.in);
 
    printf("\nEnter distance-2\n");
    printf("Enter feet: ");
    scanf("%d", &dis2.ft);
    printf("Enter inch: ");
    scanf("%f", &dis2.in);
   
    resultant.ft = dis1.ft + dis2.ft;
    resultant.in = dis1.in + dis2.in;

    while (resultant.in >= 12.0){
        resultant.in = resultant.in - 12.0;
        ++resultant.ft;}
    printf("\nSum of distances = %d\'-%.1f\"", resultant.ft, resultant.in);
    return 0;
}
