# FEAoeneye - T-QTS BOX
**Formula:** `t = S / T`
**LPU=MAIN.CFG NPU=OQM.h BUS=OMQ.sh**

## Verified Phia Job
- URL: https://jobs.ashbyhq.com/phia/d54a3c16-d4a1-4ed7-b551-af165e7fd16f/application
- Size: 26364 bytes
- SHA256 14:27: 9fb2b6089a9aceb20b5612d7cd13af0b7ff7ce0534922042d0cc2b1b243c11f4
- SHA256 14:30: 9f4dddc03ab3e4e3d776602eee6cffc865a56326cfba8c001654d700a00db9c1
- Note: dynamic due to CSRF token

## Curl DIY Macro
TQTS_CURL_GET(url, file) = curl + sha256 + t=S/T
TQTS_CURL_CHECK(url) = checksum pipe

## Build
gcc MATRIX.c -o MATRIX.EXE -lm
./MATRIX.EXE
