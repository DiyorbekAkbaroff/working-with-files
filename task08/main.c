#include <stdio.h>
#include <string.h>

int main(){
    FILE *input = fopen("input.txt", "r");
    FILE *output1 = fopen("output.txt", "w");

    if (input == NULL){
        perror("input file yuq");
        return 1;
    }

    int number;

    while (!feof(input)){
        fscanf(input, "%d", &number);
        fprintf(output1, "%c", number);
    }
}