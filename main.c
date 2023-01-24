
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int i,n,e;
    const int max = 30, min = 1;
    srand(time(NULL));
    n = (rand() % (max - min +1))+ min;
    printf("L'ordinateur a choisi un nombre entre 1 et 30. trouvez le nombre : \n");
    i=1;
    do {
            printf("Quel est le nombre : ");
            scanf("%d",&e);
            if (e>n)
            printf("C'est moin!\n\n");
            else if (e<n)
            printf("C'est grand!\n\n");
            else if (e==n){
            printf("\nBravo vous avez gagnez a %d essaies\n",i);
            break;}
    i++;
   }while(i!=n);
    return 0;
}
