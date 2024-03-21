#include "your_header_file.h" // Include the header file containing the definition of dlistint_t

size_t print_dlistint(const dlistint_t *h) {
    const dlistint_t *current = h;
    size_t count = 0;

    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
        count++;
    }

    return count;
}

