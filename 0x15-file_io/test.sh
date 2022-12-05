#!/bin/bash

echo "test 0"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
./a Requiescat
rm ./a

echo "test 1"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
./b hello world
ls -l hello
cat hello
echo 
rm ./b

echo "test 2"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
./c hello  World!
cat hello
rm ./c

echo "test 3"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp

echo "test 4"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-elf_header.c -o elf_header
./elf_header ubuntu64
readelf --version
readelf -h ubuntu64
./elf_header /lib/ld-linux.so.2
readelf -h /lib/ld-linux.so.2
 ./elf_header netbsd32
 ./elf_header sortix32
 ./elf_header solaris32
 ./elf_header sparc32
