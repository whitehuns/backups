#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#define MAX 1000

int count_letters(char*, int);
int count_words(char*, int);
int count_sentences(char*, int);
void index_calc(int, int, int);

//modular is good!

int main()
{
    char text[MAX];
    printf("Text: ");
    fgets(text, MAX, stdin);
    int length = strlen(text);
    int letters = count_letters(text, length);
    int words = count_words(text, length);
    int sentences = count_sentences(text, length);
    index_calc(letters, words, sentences);
    return 0;
}

int count_letters(char *text, int length)
{
    int letters = 0;
    for (int i = 0; i < length; i++){
        if (isalpha(*(text + i)) != 0){
            letters++;
        }
    }
    return letters;
}

int count_words(char *text, int length)
{
    int spaces = 0;
    for (int i = 0; i < length; i++){
        if (isblank(*(text + i)) != 0){
            spaces++;
        }
    }
    int words = spaces + 1;
    return words;
}

int count_sentences(char *text, int length)
{
    int sentences = 0;
    for (int i = 0; i < length; i++){
        if (*(text + i) == '.' || *(text + i) == '!' || *(text + i) == '?'){
            sentences++;
        }
    }
    return sentences;
}

void index_calc(int letters, int words, int sentences)
{
    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index >= 16){
        printf("Grade 16+\n");
    }
    else if (index < 1){
        printf("Before Grade 1\n");
    }
    else{
        printf("Grade %d\n", index);
    }
    return;
}
