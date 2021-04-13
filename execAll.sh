#!/bin/sh
A=""
echo "Pressione enter para iniciar ex00" && read A && gcc -Wall -Wextra -Werror exec00.c && ./a.out ; read A && clear
echo "Pressione enter para iniciar ex01" && read A && gcc -Wall -Wextra -Werror exec01.c && ./a.out ; read A && clear
echo "Pressione enter para iniciar ex02" && read A && gcc -Wall -Wextra -Werror exec02.c && ./a.out ; read A && clear
echo "Pressione enter para iniciar ex03" && read A && gcc -Wall -Wextra -Werror exec03.c && ./a.out ; read A && clear
echo "Pressione enter para iniciar ex04" && read A && gcc -Wall -Wextra -Werror exec04.c && ./a.out ; read A && clear
echo "Pressione enter para iniciar ex05" && read A && gcc -Wall -Wextra -Werror -lbsd exec05.c && ./a.out ; read A && clear