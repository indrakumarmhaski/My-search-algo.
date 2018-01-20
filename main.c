#include <stdio.h>
#include <stdlib.h>

int arr[10]={11,33,22,55,44,77,66,99,88,21};

int mysearch(int data)   //The searching logic whichi is modified version of leniar seach
{                        //Here instead of searching form one end of list I use two pointers
    int low=0;           //one starts from begning of list and another is form the end of list
    int heigh=9;         //and the loop continues untill the low is less then high pointer
    int flage=0;
    while(low<heigh)
    {
        if(arr[low]==data || arr[heigh]==data)
        {
            flage=1;
            break;
        }
        else
        {
            low++;
            heigh--;
        }

    }
    return(flage);
}

void main()
{

    int result=mysearch(97);
    if(result==1)
    {
        printf("\nThe element is present in the list");
    }
    else if(result==0)
    {
        printf("\nThe element is not present in the list");
    }
    getch();

}
