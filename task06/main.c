#include <stdio.h>
#include <string.h>

int main(){
    FILE *input = fopen("text1.txt", "r");
    FILE *input1 = fopen("text2.txt", "r");
    FILE *output1 = fopen("output.txt", "w");

    if (input == NULL) {
        perror("input file yuq");
        return 1;
    }

    char matn1[50], matn2[50];

    while (!feof(input)){
        fscanf(input, "%s", matn1);
        fscanf(input1, "%s", matn2);
        fprintf(output1, "%s - %s\n", matn1, matn2);
    }
}