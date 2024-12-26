#include <stdio.h>
#define COMMENT "this program outputs itself to std::out"

// this program outputs itself to std::out
int main() {
    /* The source code string */
    char *s = "#include <stdio.h>%c#define COMMENT \"%s\"%c%c// this program outputs itself to std::out%cint main() {%c    /* The source code string */%c    char *s = %c%s%c;%c    /* Print it twice - once as code, once as data */%c    printf(s, 10, COMMENT, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10);%c    return 0;%c}";
    /* Print it twice - once as code, once as data */
    printf(s, 10, COMMENT, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10);
    return 0;
}

