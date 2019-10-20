#include <stdio.h>

int main(){
    int n = 0;
    scanf("%i", &n);
    int lst[n];
    for(int i = 0; i < n; i++){
        scanf("%i", &lst[i]);
    }
    int cursor = 0;
    for(int i = 0; i< n; i++){
        cursor = i;
        for(int j = i; j<n;j++){
            if(lst[j] < lst[cursor]){
                cursor = j;
            }
        }
        lst[cursor] = lst[i] + lst[cursor] - (lst[i] = lst[cursor]);
    }
    for(int i = 0; i<n; i++){
        printf("%i ", lst[i]);
    }

}