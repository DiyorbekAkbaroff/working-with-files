#include <stdio.h>

int main() {
    FILE *input_file = fopen("text.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    int number; 
    double s = 0;

    for (int i = 0; i < 10; i++)
    {
        fscanf(input_file, "%d", &number);
        s += number;
    }

    fprintf(output_file, " Natija = %lf", s/10);

    fclose(input_file);
    fclose(output_file);
}