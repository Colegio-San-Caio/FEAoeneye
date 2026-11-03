KAIOLAFKETELHUT - FEAoeneye T-QTS BOX
Patreon: https://www.patreon.com/c/KAIOLAFKETELHUT
GitHub: https://github.com/Colegio-San-Caio/FEAoeneye
Commit: aacd7bd - `curl.ximg = virus.exe = 7.3K`

🇧🇷 PT - O que é virus.exe / curl.ximg ?
**NÃO É VÍRUS!** É meu extrator curl.

- Nome `virus.exe` é meme do projeto - ele "infecta" páginas dinâmicas
- O que faz: `curl + sha256 + t=S/T` -> extrai dados da Phia (Ashby)
- Problema que resolve: Ashby injeta `csrfToken` novo a cada request, então SHA256 muda
    - 14:27: `9fb2b60...`
    - 14:30: `9f4ddd...`
- Solução `virus.exe`: filtra com `sed` para SHA256 estável
    - `22f483144eacf5f68e17fa0164fc1713b38a7b8172680f0f7435c47725c51540` (constante)
- `curl.ximg` é cópia idêntica, só outro nome para pipeline de imagem
- Código fonte aberto em `virus.c` + `CURLDIY.h` - pode compilar e verificar
- `gcc virus.c -o virus.exe -lm` - sem rede escondida, sem malware

🇺🇸 EN - What is virus.exe / curl.ximg ?
**NOT MALWARE!** It's my curl extractor.

- Name `virus.exe` is project meme - it "infects" dynamic pages
- What it does: `curl + sha256 + t=S/T` -> extracts Phia job data (Ashby)
- Problem solved: Ashby injects fresh `csrfToken` per request, so SHA256 rotates
    - 14:27: `9fb2b60...`
    - 14:30: `9f4ddd...`
- Solution `virus.exe`: `sed` strip for stable SHA256
    - `22f483144eacf5f68e17fa0164fc1713b38a7b8172680f0f7435c47725c51540` (constant)
- `curl.ximg` is identical copy, just alternate name for image pipeline
- Open source in `virus.c` + `CURLDIY.h` - you can compile and audit
- `gcc virus.c -o virus.exe -lm` - no hidden network, no malware

Verified Data Extracted (by curl)
- Title: `Pitch Yourself`
- Company: Phia - $43M raised, 1.5M users, 9.6k+ brands
- Salary: $60k - $220k / YEAR - NYC
- URL: `jobs.ashbyhq.com/phia/d54a3c16...`

How to verify
```bash
git clone https://github.com/Colegio-San-Caio/FEAoeneye.git
cd FEAoeneye
cat virus.c  # read source
gcc virus.c -o virus.exe -lm
./virus.exe  # will curl + strip + show stable hash
Supporters get `CURLDIY.h` macro + stable parser.

t = S / T - Time is data.
