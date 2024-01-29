#include <stdio.h>

void input_array(int a[],int N);
void output_array(int a[], int N,char msg[]);
int linear_search (int a[],int N, int search_data);

int main(void)
{
        int N=8;
        int arr[8];
        int search_data;
        int index;

        input_array(arr,N);
        output_array(arr,N,"Array after inputting valued from the enduser");
        scanf("%d",&search_data);

        index=linear_search(arr, N, search_data);

        if(index >= 0)
                printf("%d is found in arry for the first time at index %d",search_data,index);
        else if(index == -1)
                printf("%d is not in arry\n",search_data);



        return(0);
}


void input_array(int a[] , int N)
{
        int i;
                for(i=0 ; i < N ; i++)
                {
                        printf("Enter value for element at index %d-:",i);
                        scanf("%d",&a[i]);
                }

}



void output_array(int a[], int N ,char msg[])
{
        int i;
        puts(msg);
        for(i=0; i<N ; ++i)
                printf("a[%d]:%d\n",i,a[i]);


}

int linear_search(int a[] ,int N, int search_data)
{
        int i;
        for(i=0; i < N ; ++i)
        {
                if(a[i]==search_data)
                        break;
        }

        if(i < N)
                return(i);
        else if(i==N)
                return (-1);

}

