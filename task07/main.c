#include <stdio.h>
#include <string.h>

int main(){
    FILE *input = fopen("text.txt", "r");
    FILE *text = fopen("text2.txt", "r");
    FILE *output1 = fopen("output.txt", "a");

    if (input == NULL){
        perror("input file yuq");
        return 1;
    }

    char matn1[50];

    while (!feof(input)) {
        fscanf(input, "%s", matn1);
        fprintf(output1, "%s\n", matn1);
    }
    while (!feof(text)){
        fscanf(text, "%s", matn1);
        fprintf(output1, "%s\n", matn1);
    }
}