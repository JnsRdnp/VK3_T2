#include <stdio.h>
#include <stdbool.h>
//Ohjelma kysyy käyttäjän nimen ja monta kertaa
//käyttäjä haluaa nimen tulostettavan näytölle

char userName[30];
int inputRepeatTimes;
int repeatTimes=0;

int thTime=1;

int main()
{
    printf("Kayttajan nimi: ");
    scanf("%s",&userName);
    printf("Monta kertaa nimesi tulostetaan naytolle?: ");
    scanf("%d",&inputRepeatTimes);

//    while(repeatTimes<=inputRepeatTimes-1){
//        printf("%d.%s\n",thTime,userName);
//        thTime +=1;
//        repeatTimes += 1;
//    }
    //--//
//    do
//    {
//        printf("%d.%s\n",thTime,userName);
//        thTime +=1;
//        repeatTimes += 1;

//    }while(repeatTimes<=inputRepeatTimes-1);

    for(repeatTimes;repeatTimes<inputRepeatTimes;repeatTimes++)
        printf("%s\n",userName);

    return 0;
}
