#include <stdio.h>
#include "OQM.h"
#include "CURLDIY.h"

int main(){
  printf("FEAoeneye T-QTS BOX v2 - curl DIY macro\n");
  printf("Formula: t = S / T\n\n");
  
  // Your Phia job with curl macro
  TQTS_CURL_GET("https://jobs.ashbyhq.com/phia/d54a3c16-d4a1-4ed7-b551-af165e7fd16f/application", "phia_job.html");
  
  // checksum only
  TQTS_CURL_CHECK("https://jobs.ashbyhq.com/phia/d54a3c16-d4a1-4ed7-b551-af165e7fd16f/application");
  
  return 0;
}
