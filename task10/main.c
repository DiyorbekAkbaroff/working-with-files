#include <stdio.h>
#include <string.h>

int main(){
    FILE *input = fopen("text.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL) {
        perror("input file yuq");
        return 1;
    }

    int number[100], count = 0;

    while (!feof(input)) {
        fscanf(input, "%d", &number[count]);
        count++;
    }

    fprintf(output, "%d  %d", number[0], number[count - 1]);
}