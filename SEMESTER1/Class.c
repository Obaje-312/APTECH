#include <stdio.h>
int main(){
    float add=0.0;
    float temperature [4]= {23.5, 25.0, 22.8, 24.1};
    int i = 0;
    while(i < 4){
        printf("temperature[%d] = %.2f\n", i+1, temperature[i]);
        add=add+temperature[i];
        i++;
    }
    printf("the average temperature is %.2f\n", add/4);
}