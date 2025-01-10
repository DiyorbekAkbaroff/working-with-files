#include<stdio.h>
#include<string.h>

int main(){
    char  word[50], min[50], max[50];

    FILE *input = fopen("text.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL){
        perror("input file yuq");
    }

    fscanf(input, "%s", word);
    strcpy(min, word);
    strcpy(max, word);

    while (!feof(input)){
        fscanf(input, "%s", word);
        
        if (strlen(min) > strlen(word))
        {
            strcpy(min, word);
        }
        if (strlen(max) < strlen(word))
        {
            strcpy(max, word);
        }
    }
    fprintf(output, "Eng kalta so`z: %s\nEng uzun so`z: %s", min, max);
}