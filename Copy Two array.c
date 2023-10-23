// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n[5]={1,2,3,4,5};
    int m[5]={6,7,8,9,10};
    int ans[10];
    for(int i=0; i<10; i++)
    {
    ans[i]=n[i];
    }
    int i=5;
    for(int j=0; j<5; j++)
    {
        ans[i]=m[j];
        i++;
    }
    
    for(int i=0; i<10; i++)
    {
        printf("%d ", ans[i]);
    }
    
    
    
    return 0;
}
