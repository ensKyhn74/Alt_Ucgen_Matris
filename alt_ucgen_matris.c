#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ALT ÜÇGEN MATRİS Oluştur(Satır ve Sütun Sayısı kesinlikle aynı)
// asal köşegenin üst kısmı tamamen 0
// 3 x 3 lük alt üçgen matris örneği aşağıdadır
/* 1 0 0
   3 1 0
   2 7 5
*/

int main() 

{
    
  int i,j;  
  
  int ikiBoyutluDizi[10][10];
  
  srand(time(0));
  
  for(i = 0 ; i < 10 ; i++) 
 {                                          
     
  for(j = 0 ; j < 10 ; j++)  
  {
   if(i >= j)
   {
    ikiBoyutluDizi[i][j] = 1 + rand()%9;  
   } 
      
   else
   {
    ikiBoyutluDizi[i][j] = 0;  // asal köşegenin üstündeki elemanlar 0 
   }
  }                              
     
 }
 
 // ekrana yazdırılıyor
 for(i = 0 ; i < 10 ; i++) 
 {                                               
   for(j = 0 ; j < 10 ; j++)  
  {
   printf("%d ",ikiBoyutluDizi[i][j]);
  }
   printf("\n");
 }
 
 return 0;
  
}