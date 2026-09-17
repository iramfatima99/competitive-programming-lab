#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    printf("Enter the index of the element: ");
    scanf("%d", &index);

    printf("Effective Address = %p\n", (void*)&arr[index]);

    return 0;
}
