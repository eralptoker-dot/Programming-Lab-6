#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR_SIZE 100
char* extractVowels(char [MAX_STR_SIZE]);
char* extractConstants(char [MAX_STR_SIZE]);


int main(){
    char word[MAX_STR_SIZE];

    printf("Enter any String: " );
    scanf("%s",&word);
    //printf("%stest",word);
    char *vowels = extractVowels(word);
    char* constants = extractConstants(word);
    printf("VOWEL Characters are: %s\n",vowels);
    free(vowels);
    printf("CONSONANT Characters are: %s\n",constants);
    free(constants);
    return 0;
}


char* extractVowels(char word[MAX_STR_SIZE] ){
     char* result = (char*)malloc(MAX_STR_SIZE * sizeof(char));
    char vowels[MAX_STR_SIZE];
    
    int inc = 0;
    for(int i = 0; i< MAX_STR_SIZE; i++){
        if(word[i]=='\0'){
            break;
        }
        if(word[i]== 'a'||word[i]== 'e'||word[i]== 'i'||word[i]== 'o'||word[i]== 'u'||word[i]== 'y'){
            vowels[inc] = word[i];
            inc++;
        }

    }
    vowels[inc] = '\0';
    strcpy(result,vowels);
    //printf("Return value:%s\n",result);
    return result;
}
char* extractConstants(char word[MAX_STR_SIZE]){
    char* result = (char*)malloc(MAX_STR_SIZE * sizeof(char));
    int inc = 0;
     char vowels[MAX_STR_SIZE];
    for(int i = 0; i< MAX_STR_SIZE; i++){
        if(word[i]=='\0'){
            break;
        }
        if(!(word[i]== 'a'||word[i]== 'e'||word[i]== 'i'||word[i]== 'o'||word[i]== 'u'||word[i]== 'y')){
            vowels[inc] = word[i];
            inc++;
        }

    }
    vowels[inc] = '\0';
    strcpy(result,vowels);
   // printf("Return value:%s\n",result);
    return result;
}
