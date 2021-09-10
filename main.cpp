/*
Universidade do Vale do Itajaí
Disciplina: Sistemas em tempo real
Curso: Engenharia de Computação
Professor: Felipe Viel
Aluno: Michael Douglas Cabral Alves

                                        Avaliação de Processos Críticos
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <iostream>

using namespace std;

//----------------------------- TUBULAÇÃO POÇO A ----------------------------
void tubulacaoA400(int num ){ //0-2


        if(num <=2)

            printf("falha tubulacao A sensor - inicio\n");
}

void tubulacaoA800(int num ){ //3-4


        if(num > 2 && num <=4 )

            printf("falha tubulacao A sensor - meio\n");
}

void tubulacaoA1200(int num ){ // 5-6
        int x;

        if(num > 4 && num <=6 )

            printf("falha tubulacao A sensor - final\n");
}

//----------------------------- TUBULAÇÃO POÇO B ----------------------------

void tubulacaoB400(int num ){ //7-8


        if(num > 6 && num <=8 )

            printf("falha tubulacao B sensor - inicio\n");
}

void tubulacaoB800(int num ){ //9-10


        if(num > 8 && num <=10 )

            printf("falha tubulacao B sensor - meio\n");
}

void tubulacaoB1200(int num ){ //11-12
        int x;

        if(num > 10 && num <=12 )

            printf("falha tubulacao B sensor - final\n");
}

//----------------------------- TUBULAÇÃO POÇO C ----------------------------

void tubulacaoC400(int num ){//13-14


        if(num > 12 && num <=14 )

            printf("falha tubulacao C sensor - inicio\n");
}

void tubulacaoC800(int num ){//15-16


        if(num > 14 && num <=16 )

            printf("falha tubulacao C sensor - meio\n");
}

void tubulacaoC1200(int num ){//17-18
        int x;

        if(num > 16 && num <=18 )

            printf("falha tubulacao C sensor - final\n");
}

//------------------------ POÇO A B C -----------------------------------------
int pocoA(int num){//19-20

    if (num >18 && num <=20)
         printf("falha sensor do poco A - DESLIGAMENTO\n");

}

int pocoB(int num){//21-22

    if (num >20 && num <=22)
         printf("falha sensor do poco B - DESLIGAMENTO\n");
}

int pocoC(int num){//23-24

    if (num >22 && num <=24)
         printf("falha sensor do poco C - DESLIGAMENTO\n");
}


int main(){

    int num=0;

    /*srand (time(NULL));   -------- atribuição de amostra ----------
  num = rand() %26 + 1; */

    num=31;
                        //  -------- chamada das subrotinas----------
    tubulacaoA400(num);
    tubulacaoA800(num);
    tubulacaoA1200(num);

    tubulacaoB400(num);
    tubulacaoB800(num);
    tubulacaoB1200(num);

    tubulacaoC400(num);
    tubulacaoC800(num);
    tubulacaoC1200(num);

    pocoA(num);
    pocoB(num);
    pocoC(num);

    printf("\n");

       return 0;
}
/*
tubulacaoA400(1);
    tubulacaoA800(3);
    tubulacaoA1200(5);

    tubulacaoB400(7);
    tubulacaoB800(9);
    tubulacaoB1200(11);

    tubulacaoC400(13);
    tubulacaoC800(15);
    tubulacaoC1200(17);

    pocoA(19);
    pocoB(21);
    pocoC(23);
*/
