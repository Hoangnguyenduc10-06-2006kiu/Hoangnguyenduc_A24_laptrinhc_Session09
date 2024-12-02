#include<stdio.h>
int main(){
	int index;
	int n=0,q,h;
	 int arr[100]={1,2,4,5,6};
	 for (int i=4;i<n;i--){
	 	arr[i]=arr[i-1];
	 }
  printf("ban muon sua vao vi tri:  ");
	 scanf("%d",&q);
	 printf("\nban muon sua thanh so may:  ");
	 scanf("%d",&h);
	 arr[q-1]=h;
	 for(int i=0;i<5;i++){
	 	printf("%d",arr[i]);
	 }
	 return 0;
}
