#include <stdio.h>
#define PTR_T char
#define CITE_T char
// proof some concept when adding to a pointer
int main()
{
    char s[] = "0123456789";
    char* p = s;
    int i;
    for (i = 0; *(CITE_T *)((PTR_T *)p+i); ++i) {
        printf("%.2d: ", i);
        printf("%p | %c\n", (PTR_T *)p+i, *(CITE_T *)((PTR_T *)p+i));
    }
    return 0;
}
