#!/bin/bash
echo "test 0"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
./a
rm ./a

echo "test 1"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
./b
rm b
echo "test 2"

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c
./c
rm c
echo "test 3"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
./d
rm d

echo "test 4"
 gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
./e
rm ./e

echo "test 5"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
./f
rm ./f

echo "test 6"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h
./h
rm ./h

lscpu | head

echo "test 7"
./crackme3 `cat 101-password`
