#include <stdio.h>
#include <string.h>

int main(){
    FILE *input = fopen("text.txt", "r");
    FILE *output1 = fopen("output.txt", "w");

    if (input == NULL) {
        perror("input file yuq");
        return 1;
    }

    char n;
    int plus = 0, minus = 0, slash = 0, kopay = 0, qvs_c = 0, qvs_o = 0;
    while (!feof(input)){
        fscanf(input, "%c", &n);
        switch (n)
        {
        case '+':
            plus++;
            break;
        case '*':
            kopay++;
            break;
        case '-':
            minus++;
            break;
        case '/':
            slash++;
            break;
        case '(':
            qvs_o++;
            break;
        case ')':
            qvs_c++;
            break;
        default:
            break;
        }
    }
    if (qvs_o == qvs_c){
        fprintf(output1, "+ %d ta\n - %d ta\n / %d ta\n * %d ta\n ()) %d ta\n ", plus, minus, slash,kopay,qvs_c);
    } else if (qvs_o > qvs_c) {
        fprintf(output1, "+ %d ta\n - %d ta\n / %d ta\n * %d ta\n () %d ta va ( %d ta ortiqcha\n ", plus, minus, slash, kopay, qvs_o, qvs_o - qvs_c);
    }else {
        fprintf(output1, "+ %d ta\n - %d ta\n / %d ta\n * %d ta\n () %d ta va ) %d ta ortiqcha\n ", plus, minus, slash, kopay, qvs_o, qvs_c - qvs_o);
    }
}