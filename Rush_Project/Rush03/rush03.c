void ft_putchar(char c);

void print(int i, int j, int a, int b)
{
    char c;
    if (i = 1 && (j == 1 || j == b))
    {
        c = 'A';
    }
        else if((i == 1 || i == b) && (j = 1))
        {
            c = 'C';
        }
        else if((i > 1) || (j > 1))
        {
            c = ' ';
        }
        else
        {
            c = 'B';
        }
        ft_putchar(c);
        if (j == a)
        {
            ft_putchar('\n');
        }
        
        
    
}

void rush(int a, int b)
{
    int i;
    int j;
    
    i = 1;
    while (i <= b)
    {
        j = 1;
        while (j <= a)
        {
            print(i, j, a, b);
        }
        j++;
        
    }
    i++;
}