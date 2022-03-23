#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
        // CHECKING FOR ENOUGH ARGS
        if (argc != 8)
                return 1;

        // PRINTING FETCH
        printf ("\033[96m      /\\\033[0m         \033[96m■\033[34m os      %s\n", argv[1]);
        printf ("\033[96m     /  \\\033[0m        \033[96m■\033[34m wm      %s\n", argv[2]);
        printf ("\033[96m    /\\   \\\033[0m       \033[96m■\033[34m pkgs    %s\n", argv[3]);
        printf ("\033[34m   / > ω <\\\033[0m      \033[96m■\033[34m comp    %s\n", argv[4]);
        printf ("\033[34m  /   __   \\\033[0m     \033[96m■\033[34m kern    %s\n", argv[5]);
        printf ("\033[34m / __|  |__-\\\033[0m    \033[96m■\033[34m up      %s\n", argv[6]);
        printf ("\033[34m/_-''    ''-_\\\033[0m   \033[96m■\033[34m shell   %s\n", argv[7]);
        return 0;
}
