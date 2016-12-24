#include <stdio.h>
#define counting_use_MACRO(begin, end) {\
    for (int j = begin; j <= end; ++j) {\
        if (str[i] == j) result[j]++;\
    }\
}

#define macro_print(begin, end) {\
    for (int i = begin; i <= end; ++i) {\
        printf("%c: %d\t", i, result[i]);\
    }\
    printf("\n");\
}

#define get_size_of_string {\
    for (int i = 0; i < (int)sizeof(str); ++i) {\
        if (str[i] == 0) break ;\
        lth++;\
    }\
}

int main(void)
{
    int result[128] = {0};
    char str[100] = {0};
    int lth = 0;

    printf("Please input a string for character counting.\n");
    fgets(str, sizeof(str), stdin);

    get_size_of_string;
    for (int i = 0; i < lth; ++i) {
        counting_use_MACRO('a', 'z'); // use macro with parameter
        counting_use_MACRO('A', 'Z');
        counting_use_MACRO('0', '9');
    }

    macro_print('a', 'z');
    macro_print('A', 'Z');
    macro_print('0', '9');

    return 0;
}

/*ps: macro is just simple `string substitution`*/
