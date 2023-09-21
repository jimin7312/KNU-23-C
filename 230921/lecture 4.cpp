#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define num 100

int main() {
    int a, j, count;
    double x, y, pi;

    srand(time(NULL));

    for (a = 1; i <= num; i++) {
        count = 0;
        int sim = (a * 10000); 

        for (j = 0; j < sim; j++) {
            x = (double)rand() / RAND_MAX; 
            y = (double)rand() / RAND_MAX; 

           
            double distance = x * x + y * y;

            if (distance <= 1.0) {
                count++;
            }
        }

    
        pi = 4.0 * count / sim;

        printf("시뮬레이션 횟수: %d, 계산된 원주율 pi의 근사값: %lf\n", sim, pi);
    }

    return 0;
}
