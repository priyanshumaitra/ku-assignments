// linear search in c

#include <stdio.h>
int main()
{
    int array[100], search, c, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter a digit to search: ");
    scanf("%d", &search);

    for (c = 0; c < n; c++)
    {
        if (array[c] == search) /* If required element is found */
        {
            printf("%d is present at position: %d \n", search, c + 1);
            break;
        }
    }
    if (c == n)
        printf("%d isn't present in the array\n", search);

    return 0;
}