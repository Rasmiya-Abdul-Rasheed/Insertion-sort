#include<stdio.h>
int i,j,s,temp,array[20];

int sort(int *array,int size)
{
 
  for(i=1;i<size;i++){
      temp=array[i];
      j=i-1;
      while((temp<array[j])&&(j>=0)){
      array[j+1]=array[j];
          j=j-1;
      }
      array[j+1]=temp;
	}
return 0;
}

int read()
{

int n;
printf("\nenter the size: ");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
return n;
}



int main(){

 
int size=read();
 sort(array,size);

  printf("After sorting: ");
  for(i=0;i<size;i++)
      printf(" %d",array[i]);
printf("\n");

  return 0;
}
