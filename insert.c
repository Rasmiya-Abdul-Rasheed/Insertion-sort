#include<stdio.h>
int i,j,s,temp,array[20],size;

int sort(int *array)
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


printf("\nenter the size: ");
scanf("%d",&size);
for(i=0;i<size;i++)
scanf("%d",&array[i]);
return 0;
}



int main(){

 
read();
 sort(array);

  printf("After sorting: ");
  for(i=0;i<size;i++)
      printf(" %d",array[i]);
printf("\n");

  return 0;
}
