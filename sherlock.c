#include <stdio.h>

int main() {

    int t, i, l,j,flag=0;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
//testcases
    while (t >0)
    {
        printf("Enter the number of array elements: ");
        scanf("%d", &l);

        int arr[l];//dynamic array
         printf("Enter the array elements: ");
            for (i = 0; i < l; i++) {
                scanf("%d", &arr[i]);
            }
            flag = 0;
        for(i=0;i<l;i++)
        {
            int sum_l=0,sum_r=0;
            //left sum
            for(j=0;j<i;j++)
            {
                sum_l+=arr[j];
            }
            //right sum
            for(j=i+1;j<l;j++)
            {
                sum_r+=arr[j];
            }
            //check left and right sum
            if(sum_l==sum_r)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        t--;
    }

    return 0;
}
