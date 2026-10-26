all:
nasm -f elf64 ASM.ASM -o ASM.o || echo "nasm not installed, skipping"
touch 1
echo "1 + '1 = 2" > 1
