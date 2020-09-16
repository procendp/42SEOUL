#include <unistd.h>             //unistd를 써야 write함수 쓸 수 있다.

void ft_putchar(char c)         //출력 가능한 임의의 함수 만들어주고
{
    write(1, &c, 1);            //write함수를 통해 출력 가능.(1번째글자부터 1번째글자까지.. &c형태로)
    return 0;
}