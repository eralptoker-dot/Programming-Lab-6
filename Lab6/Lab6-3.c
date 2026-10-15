#include <stdio.h>
#include <stdlib.h>
int fibonacci(int term);
int main(){
    int terms;
    printf("Input: ");
    scanf("%d",&terms);
    for(int i = 0; i<terms; i++){
        printf("%d, ",fibonacci(i));
    }
}

int fibonacci(int term){
    if(term == 0){
        return 0;
    }
    if(term ==1){
        return 1;
    }
    return(fibonacci(term-1) + fibonacci(term-2));

}