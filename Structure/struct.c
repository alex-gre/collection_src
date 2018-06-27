#include<stdio.h>

#define STRUCTDAT "my.dat"

int main(){
/*Указатель на тип FILE определенный в stdio.h */
FILE *f;
/*Описание структуры goods*/
struct goods{
   char name[45];
   long price;
   float percent;
   int vol;
   char date[25];
  };
  /*структуре goods присвоить coat*/
struct goods coat;

  printf("\nПрием товара на складе: ");
  printf("\nВведите наименование:\n");
  scanf("%s",&coat.name);
  
  printf("\nВведите оптовую цену в руб.\n");
  scanf("%ld",&coat.price);
  
  printf("\nВведите наценку:\n");
  scanf("%f",&coat.percent);
  
  printf("\nВведите объем партии штук:\n");
  scanf("%d",&coat.vol);
 
  printf("\nДата поставки:\n");
  scanf("%s",&coat.date);
  
   if ((f = fopen(STRUCTDAT,"wt"))==NULL) //a->apend t->text
 {
   printf("Ошибка открытия файла!");
   return 1;
 }
  
   
  fprintf(f,"\nПрием товара на складе: \n");
  fprintf(f,"\nНаименование: %s ",coat.name);
  fprintf(f,"\nОптовая цена в руб. %ld ",coat.price);
  fprintf(f,"\nНаценка на товар: %f ",coat.percent);
  fprintf(f,"\nПартии штук: %d ",coat.vol);
  fprintf(f,"\nДата поставки: %s \n",coat.date);
  
  
  fclose(f);
  

  return 0;

}
