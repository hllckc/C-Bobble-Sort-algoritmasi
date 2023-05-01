#include <stdio.h>

#define diziboyutu 10

int main(int argc, char const *argv[])
{
	
    int arr[diziboyutu] = {5,3,4,1,2,89,5,12,-1,89};
    int i,j,temp,flag;

    for(i=0;i<diziboyutu;i++){
        flag=0;
        //flag'in görevi alttaki dongude yer degiştirme yapılmazsa dizi sıralanmıs olucak ve tektradan calısmak zorunda kalmıycak
    	for(j=0;j<diziboyutu-i-1;j++){
          
           if(arr[j] > arr[j+1]){
            temp =arr[j];
            arr[j] = arr[j+1];
            arr[j+1] =temp;
            flag=1;
        }
            
       }
       if(flag==0)
          break;

    }

      printf("Siralanmis dizi : \n");
     for (int i = 0; i < diziboyutu; ++i)
     {
	printf("%d  ",arr[i]);
      }

	return 0;
}