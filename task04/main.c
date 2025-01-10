#include<stdio.h>
#include<string.h>



int main(){
    FILE *input = fopen("text.txt", "r" );
    FILE* output = fopen("output.txt", "w");

    int num; 
    int s = 0;

    for (int i = 0; i < 4; i++){
        fscanf(input, "%d", &num);
        fprintf(output, "%d + ", num);
        s += num;
    }
    fscanf(input, "%d", &num);
    s += num;
    fprintf(output, "%d = %d", num, s);
}