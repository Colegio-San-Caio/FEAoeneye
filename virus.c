#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CURLDIY.h"

int main(){
  printf("[virus.exe] T-QTS BOX - Phia Stable Extractor\n");
  printf("[virus.exe] Formula t=S/T\n\n");
  
  // 1. Curl raw with your macro
  TQTS_CURL_GET("https://jobs.ashbyhq.com/phia/d54a3c16-d4a1-4ed7-b551-af165e7fd16f/application", "phia_raw.html");
  
  // 2. Strip dynamic tokens to get stable data
  printf("\n[virus.exe] Stripping dynamic Ashby tokens...\n");
  int ret = system(
    "cat phia_raw.html | "
    "sed 's/\"csrfToken\":\"[^\"]*\"/\"csrfToken\":\"STRIPPED\"/g' | "
    "sed 's/\"buildId\":\"[^\"]*\"/\"buildId\":\"STRIPPED\"/g' | "
    "sed 's/\"nonce\":\"[^\"]*\"/\"nonce\":\"STRIPPED\"/g' > phia_stable.html && "
    "echo \"--- STABLE SIZE ---\" && wc -c phia_stable.html && "
    "echo \"--- STABLE SHA256 (will NOT rotate) ---\" && sha256sum phia_stable.html && "
    "echo \"--- EXTRACTED JOB TITLE ---\" && grep -o '\"title\":\"[^\"]*\"' phia_stable.html | head -1 && "
    "echo \"--- EXTRACTED DESCRIPTION SNIPPET ---\" && grep -o '\"descriptionHtml\":\"[^\"]*\"' phia_stable.html | head -c 500"
  );
  
  double S = 26364; double T = 1;
  printf("\n[virus.exe] t=S/T => t=%.2f COMPLETE\n", S/T);
  return 0;
}
