#pragma once
#include <stdio.h>
#include <stdlib.h>

// DIY curl macro - no libcurl needed, uses system curl + checksum
#define TQTS_CURL_GET(url, outfile) do { \
  char _cmd[1024]; \
  snprintf(_cmd, sizeof(_cmd), \
  "curl -L -A \"FEAoeneye-TQTS/2.0\" -o %s \"%s\" && echo \"[TQTS] DOWNLOADED:\" && ls -lh %s && echo \"[TQTS] CHECKSUMS:\" && sha256sum %s && md5sum %s", \
  outfile, url, outfile, outfile, outfile); \
  printf("[TQTS] RUN: t=S/T curl %s\n", url); \
  int _t = system(_cmd); \
  double _S = 100; double _T = (_t==0?1:2); \
  printf("[TQTS] RESULT t=S/T => t=%.2f [S=%.0f T=%.0f]\n", _S/_T, _S, _T); \
} while(0)

#define TQTS_CURL_CHECK(url) do { \
  char _cmd2[1024]; \
  snprintf(_cmd2, sizeof(_cmd2), \
  "curl -sL -A \"FEAoeneye-TQTS/2.0\" \"%s\" | sha256sum", url); \
  system(_cmd2); \
} while(0)
