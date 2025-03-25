#include<stdio.h>
int main(){
int a, k,index=0;
int arr[100];
printf("Enter the number");
scanf("%d",&a);
printf("Enter the kth number");
scanf("%d",&k);
for(int i=1;i<=a/2;i++){
    if(a%i==0){
        arr[index++]=i;
    }
}
 printf("Factors of %d are: ", a);
    for (int i = 0; i < index; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (k <= index && k >= 1) {
        printf("The %dth factor is: %d\n", k, arr[k - 1]);
    } else {
        printf("There are less than %d factors.\n", k);
    }


}
