#include <stdio.h>

int my_atoi(const char *str) {
    int num = 0, i = 0;
    while (str[i] >= '0' && str[i] <= '9') {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return num;
}

int main() {
    FILE *file = fopen("in.txt", "r");
    if (!file) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[100];
    int sum = 0;

    while (fgets(line, sizeof(line), file)) {
        sum += my_atoi(line);
    }

    fclose(file);
    printf("%d\n", sum);
    return 0;
}
