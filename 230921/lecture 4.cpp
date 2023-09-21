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

        printf("�ùķ��̼� Ƚ��: %d, ���� ������ pi�� �ٻ簪: %lf\n", sim, pi);
    }

    return 0;
}
