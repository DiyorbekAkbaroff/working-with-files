#include <stdio.h>
#include <string.h>

int main(){
    char word[200];

    FILE *input = fopen("text.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL){
        perror("input file yuq");
        return 1;
    }

    int count = 0, counttext;
    
    printf("nechanchi qatordagi so`zni tashlab ketmoqchisiz?\nBu erga kiriting: ");
    scanf("%d", &counttext);

    while (fgets(word, sizeof(word), input)){
        count++;
        if (count != counttext){
            fprintf(output, "%s\n", word);
            printf("%s\n", word);
        }
    }
    
}