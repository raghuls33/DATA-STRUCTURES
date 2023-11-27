#include<stdio.h>
int main(){
	int i,j,n,arr[100];
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the values: ");
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
printf("After sorting: ");
for(int i=0;i<n;i++){
	printf("%d\n", arr[i]);
}
}
