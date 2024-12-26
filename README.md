# self-reproducing-program
A simple example of self reproducing program written in C. *For educational Purposes Only*

## Usage:

Installation

Clone the repository and navigate to the project directory:
```
git clone https://github.com/0xRavenspar/self-reproducing-program.git
cd self-reproducing-program
```

Compile the code and Execute: 
``` 
gcc self.c -o self
./self
```

Output:
```
#include <stdio.h>
#define COMMENT "this program outputs itself to std::out"

// this program outputs itself to std::out
int main() {
    /* The source code string */
    char *s = "#include <stdio.h>%c#define COMMENT "%s"%c%c// this program outputs itself to std::out%cint main() {%c    /* The source code string */%c    char *s = %c%s%c;%c    /* Print it twice - once as code, once as data */%c    printf(s, 10, COMMENT, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10);%c    return 0;%c}";
    /* Print it twice - once as code, once as data */
    printf(s, 10, COMMENT, 10, 10, 10, 10, 10, 34, s, 34, 10, 10, 10);
    return 0;
}
```
