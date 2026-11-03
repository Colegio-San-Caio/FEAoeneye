#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "OQM.h"

int main(){
  srand(time(0));
  printf("FEAoeneye T-QTS BOX v2 - LPU=MAIN.CFG NPU=OQM.h BUS=OMQ.sh\n");
  printf("Formula: t = S / T\n");
  for(int i=0;i<100;i++){
    double S = 100.0 + rand()%100;
    double T = 1.0 + (rand()%10);
    double t = S / T;
    printf("MATRIX [%03d] ", i);
    for(int j=0;j<20;j++) printf("%c", 33 + rand()%94);
    printf(" | S=%.1f T=%.1f => t=%.2f\n", S, T, t);
    usleep(80000);
  }
  return 0;
}
