#include <stdio.h>


int main() {
    int arr[] = {11,34,21,8,55,29,91};
    int len = sizeof(arr)/sizeof(arr[0]);

    // for (int i = 1; i < len; i++)
    // {
    //     for (int j = i; j >0; j--)
    //     {
    //         if (arr[j] < arr[j-1])
    //         {
    //             int tmp = arr[j-1];
    //             arr[j-1] = arr[j];
    //             arr[j] = tmp;
    //         }
    //     }   
    // }
    

    for (int i = 1; i < len; i++)
    {
        int insert = arr[i];
        int j;
        for (j = i-1; j >= 0 && arr[j] > insert; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = insert;
    }
    

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    



    return 0;
}