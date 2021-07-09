#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    scanf("%s",s);
    int arr[10] = {0},i;
    for(i = 0;i < strlen(s);i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
            arr[s[i] - '0']++;
    }
    for(i= 0;i < 10;i++)
        printf("%d ",arr[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
