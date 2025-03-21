#include<stdio.h>
int main (){
    int n, selected, greater_count=0, lesser_count=0, divisible_count=0;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element; ");
    for( i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    printf("Enter the selected element: ");
    scanf("%d",&selected);

    for(int i=0; i<n; i++){
        if (arr[i] > selected){
            greater_count++;
        }else if(arr[i] < selected){
            lesser_count++;
        }
        if(arr[i] !=0 && selected % arr[i]==0){
            divisible_count++;
        }
    }
    printf("Greater: %d\n", greater_count);
    printf("Lesser: %d\n", lesser_count);
    printf("Exactly divisible: %d\n ", divisible_count);
    return0;
}