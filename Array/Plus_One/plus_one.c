/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

/*
https://leetcode.com/problems/plus-one/description/
*/

 /*
* Sortir tous les chiffres, mettre tout les chiffres dans un seul int
* Faire +1 a ce integer
* mettre chaque digit dans un tableau ou toutes les digits seront mis une par une
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int number = 0;
    int *board_numbers;
    for (int i = 0; i < digitsSize; i++)
        number = (number * 10) + digits[i]; 
    number += 1;
    int tmp = number, height = 0;
    while (tmp > 0)
    {
        tmp /= 10;
        height++;
    }
    board_numbers = malloc(sizeof(int) * (height));
    for (int i = height - 1; i >= 0; i--)
    {
        board_numbers[i] = number % 10;
        number /= 10;
    }
    digits = malloc(sizeof(int) * height);
    returnSize[0] = height; 
    for (int i = 0; i < height; i++)
        digits[i] = board_numbers[i];
    #ifdef DEBUG
    for (int i = 0; i < height; i++)
        printf("%d = %d|", i,board_numbers[i]);
    printf("\nreturn Size = %d", *returnSize);
    #endif
    return (digits);
}
