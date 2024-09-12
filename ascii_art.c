#include <stdio.h>

void ascii_art(char choice)
{
    if (choice == 'r')
    {
        printf("      _______\n");
        printf("     /        \\\n");
        printf("____/         __]\n");
        printf("              __]\n");
        printf("____          __]\n");
        printf("    \\        __]\n");
        printf("     \\________/\n");
    }
    else if (choice == 's')
    {
        printf("      _______     __\n");
        printf("     /        \\ / /\n");
        printf("____/           / /\n");
        printf("                \\ \\\n");
        printf("____             \\_\\\n");
        printf("    \\        __]\n");
        printf("     \\________/\n");
    }
    else if (choice == 'p')
    {
        printf("      __________\n");
        printf("     /           \\\n");
        printf("____/       ______]\n");
        printf("             ______]\n");
        printf("____         ______]\n");
        printf("    \\       ______]\n");
        printf("     \\________/\n");
    }
}