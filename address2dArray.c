#include <stdio.h>

int main() {
    int arr[3][3];
    int row, col;

    printf("Enter row index: ");
    scanf("%d", &row);

    printf("Enter column index: ");
    scanf("%d", &col);

    printf("Effective Address = %p\n", (void*)&arr[row][col]);

    return 0;
}
