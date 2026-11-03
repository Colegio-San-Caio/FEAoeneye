#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){
  srand(time(0));
  printf("FEAoeneye T-QTS BOX - MATRIX MODE t=S/T\n");
  for(int i=0;i<50;i++){
    for(int j=0;j<40;j++) printf("%c", 33 + rand()%94);
    printf("  t=%.2f S=100 T=2\n", 100.0/2.0);
    usleep(100000);
  }
  return 0;
}
