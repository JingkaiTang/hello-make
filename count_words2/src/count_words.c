#include <stdio.h>
#include <counter.h>

int main (int argc, char **argv) {
    int counts[4];
    counter(counts);
    printf("%d ", counts[0]);
    printf("%d ", counts[1]);
    printf("%d ", counts[2]);
    printf("%d \n", counts[3]);
    return 0;
}
