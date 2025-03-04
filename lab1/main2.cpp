#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define MAX_WORDS 100
#define MAX_LEN 100

int compare(const void *a, const void *b) {
    char *word1 = *(char **)a;
    char *word2 = *(char **)b;
    int len1 = strlen(word1), len2 = strlen(word2);

    if (len1 != len2)
        return len2 - len1;  // Sortare descrescătoare după lungime
    return strcmp(word1, word2);  // Sortare alfabetică pentru lungimi egale
}

int main() {
    char input[MAX_LEN];
    char words[MAX_WORDS][MAX_LEN];
    int count = 0;

    printf("Enter a sentence: ");
    fgets(input, MAX_LEN, stdin);

    char *token = strtok(input, " \n");
    while (token) {
        strcpy(words[count++],token);
        token = strtok(NULL, " \n");
    }

    for(int i=0;i<count;i++)
        for(int j=i+1;j<count;j++)
            if(strlen(words[i])<strlen(words[j]) || (strlen(words[i])==strlen(words[j]) && strcmp(words[i],words[j])>0))
                std::swap(words[i],words[j]);

    for (int i = 0; i < count; i++)
        printf("%s\n", words[i]);

    return 0;
}
