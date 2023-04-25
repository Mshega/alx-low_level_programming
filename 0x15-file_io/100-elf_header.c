#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: cannot open file '%s'\n", argv[1]);
exit(98);
}
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, "Error: cannot read ELF header\n");
exit(98);
}
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1
|| header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Error: file '%s' is not an ELF file\n", argv[1]);
exit(98);
}
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header.e_ident[i]);
}
printf("\n");
printf("  Class:
%s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ?
"ELF32" : "ELF64");
printf("  Data:
%s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" :
"2's complement, big endian");
printf("  Version:
%d (current)\n", header.e_ident[EI_VERSION]);
printf("  OS/ABI:
%s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
"UNIX - System V" : "UNIX - Other");
printf("  ABI Version:
%d\n", header.e_ident[EI_ABIVERSION]);
printf("  Type:
%s\n", header.e_type == ET_EXEC ?
"EXEC (Executable file)" : header.e_type == ET_DYN ?
"DYN (Shared object file)" : "REL (Relocatable file)");
printf("  Entry point address:
%lx\n", header.e_entry);
printf("\n");
close(fd);
return (0);
}
