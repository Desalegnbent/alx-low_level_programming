#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...) {
    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; i++) {
        printf("%d", va_arg(args, int));
        if (i < n - 1 && separator != NULL) {
            printf("%s", separator);
        }
    }

    va_end(args);
    
    printf("\n");
}

int main() {
    print_numbers(", ", 5, 1, 2, 3, 4, 5);
    print_numbers(" - ", 4, 10, 20, 30, 40);
    print_numbers(NULL, 3, 100, 200, 300);
    return 0;
}
