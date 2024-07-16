#include <stdio.h>


int main()
{
    //Find an element in an array that is not repeated twice
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int res = 0;

    for (int i = 0; i < 11; i++){
        res = res ^ arr[i];
    }

    printf("%d",res);
    return 0;
}