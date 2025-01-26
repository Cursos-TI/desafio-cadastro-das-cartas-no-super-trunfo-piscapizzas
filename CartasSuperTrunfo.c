//CONCLUIDO00
#include <stdio.h>
#include <string.h>
#include <wchar.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    /*
    Nota do Aluno que desenvolveu este código: 
    caro professor ou o revisor deste código, eu enfrentei alguns problemas mediante ao desafio proposto por vocês, a utilização por completo das ferramentas printf e scanf para a minha sintaxe de declaração de váriaveis estava dando muitos problemas, após pesquisar e analisar bastante, notei que a utilização de scanf para nomes que contenha um espaço, por exemplo: São Paulo, irá apenas armazenar "São", e o resto será ignorado, utilizando-se de underline ( _ ) consegui corrigir este problema temporariamente, pois me falta mais conhecimento e noção para solucioná-los.
                                                             com atenção, aluno Haroldo
    ----------------------------TIPOS DE DADOS UTILIZADOS-------------------------
    int
    float
    char
    ----------------------------DIRETIVA(S) UTILIZADO(S)------------------------------------------
    #include <string.h>----> declaração das funções e definições relacionadas a manipulação de strings, correto, revisor?
    #include <wchar.h>-----> acabei-me por utilizar essa diretiva pois achei que solucionaria alguns problemas que eu enfrentei com caracteres especiais: " à " " á "  " ã ", porém não consegui solucionar.
    -------------------------PROBLEMAS A SEREM SOLUCIONADOS-----------------------------------------
    utilização de espaço em nomes completos, por exemplo: São Paulo ----> apenas"São" é armazenado no scanf
    utilização de caracteres especiais como por exemplo: Ãã Áá Çç
    ---------------------------FERRAMENTAS UTILIZADAS------------------------------------------
    printf-----imprimir a mensagem
    scanf------responder perguntas?
    fgets-----tentativas de solucionar o problema de não reconhecer nomes mais complexos
    getchar-para limpar o buffer
    */

   //SINTAXE ESTADOS----------------------------------------------------------------------------------

   //ESTADO:A      ESTADO:B     ESTADO:C     ESTADO:D     ESTADO:E     ESTADI:F     ESTADI:G     ESTADO:H 
 char estado1[10], estado2[10], estado3[10], estado4[10], estado5[10], estado6[10], estado7[10], estado8[10];

//-------SINTAXE CÓDIGOS CIDADES: A --> CÓDIGOS & CIDADES-----CÓDIGOS(cod_xy) & CIDADES(cid_xy)-------

    char cod_A01[10],cod_A02[10],cod_A03[10],cod_A04[10];
       char cid_A01[30],cid_A02[30],cid_A03[30],cid_A04[30];

//--------------SINTAXE CÓDIGOS CIDADES: B----> CÓDIGOS(cod_xy) & CIDADES(cid_xy)---------

            char cod_B01[10],cod_B02[10],cod_B03[10],cod_B04[10];
                char cid_B01[30],cid_B02[30],cid_B03[30],cid_B04[30];

//--------------------SINTAXE CÓDIGOS CIDADES: C----> CÓDIGOS(cod_xy) & CIDADES(cid_xy)---------

                            char cod_C01[10],cod_C02[10],cod_C03[10],cod_C04[10];
                        char cid_C01[30],cid_C02[30],cid_C03[30],cid_C04[30];

//-------------SINTAXE CÓDIGOS ESTADO CIDADES: D----> CÓDIGOS(cod_xy) & CIDADES(cid_xy)---------

                char cod_D01[10],cod_D02[10],cod_D03[10],cod_D04[10];
            char cid_D01[30],cid_D02[30],cid_D03[30],cid_D04[30];

//------SINTAXE CÓDIGOS CIDADES: E----> CÓDIGOS(cod_xy) & CIDADES(cid_xy)--------------------

    char cod_E01[10],cod_E02[10],cod_E03[10],cod_E04[10];
char cid_E01[30],cid_E02[30],cid_E03[30],cid_E04[30];

//----------SINTAXE CÓDIGOS CIDADES: F----> CÓDIGOS(cod_xy) & CIDADES(cid_xy)-------------------

                char cod_F01[10],cod_F02[10],cod_F03[10],cod_F04[10];
                    char cid_F01[30],cid_F02[30],cid_F03[30],cid_F04[30];

//----SINTAXE CÓDIGOS CIDADES: G----> CÓDIGOS(cod_xy) & CIDADES(cid_xy)-------------------

                char cod_G01[10],cod_G02[10],cod_G03[10],cod_G04[10];
            char cid_G01[30],cid_G02[30],cid_G03[30],cid_G04[30];

//------SINTAXE CÓDIGOS CIDADES: H----> CÓDIGOS(cod_xy) & CIDADES(cid_xy)--------------------

    char cod_H01[10],cod_H02[10],cod_H03[10],cod_H04[10];
char cid_H01[30],cid_H02[30],cid_H03[30],cid_H04[30];

//-----------------------------------------------------------------------------------

        //SINTAXE CÓDIGOS CIDADES: A01 A02 A03 A04 --> 

//------------------------POPULAÇAO----------------------------------------
//POPULAÇÃO:A01 A02 A03 A04 
    int popu_A01, popu_A02, popu_A03, popu_A04;
//POPULAÇÃO:B01 B02 B03 B04
            int popu_B01, popu_B02, popu_B03, popu_B04;
//POPULAÇÃO:C01 C02 C03 C04
                int popu_C01, popu_C02, popu_C03, popu_C04;
//POPULAÇÃO:D01 D02 D03 D04
                    int popu_D01, popu_D02, popu_D03, popu_D04;
//POPULAÇÃO:E01 E02 E03 E04
                    int popu_E01, popu_E02, popu_E03, popu_E04;
//POPULAÇÃO:F01 F02 F03 F04                           
                int popu_F01, popu_F02, popu_F03, popu_F04;
//POPULAÇÃO:G01 G02 G03 G04                               
            int popu_G01, popu_G02, popu_G03, popu_G04; 
//POPULAÇÃO:H01 H02 H03 H04
    int popu_H01, popu_H02, popu_H03, popu_H04;
//--------------------------TURISMO--------------------------------------------
//TURISMO:A01 A02 A03 A04
    int turism_A01, turism_A02, turism_A03, turism_A04;
//TURISMO:A01 A02 A03 A04
        int turism_B01, turism_B02, turism_B03, turism_B04;
//TURISMO:A01 A02 A03 A04
            int turism_C01, turism_C02, turism_C03, turism_C04;
//TURISMO:A01 A02 A03 A04
                int turism_D01, turism_D02, turism_D03, turism_D04;
//TURISMO:A01 A02 A03 A04
            int turism_E01, turism_E02, turism_E03, turism_E04;
//TURISMO:A01 A02 A03 A04
        int turism_F01, turism_F02, turism_F03, turism_F04;
//TURISMO:A01 A02 A03 A04
    int turism_G01, turism_G02, turism_G03, turism_G04; 
//TURISMO:A01 A02 A03 A04           
 int turism_H01, turism_H02, turism_H03, turism_H04; 
//-----------------------------PIB-----------------------
//PIB:A01 A02 A03 A04
    float pib_A01, pib_A02, pib_A03, pib_A04;
//PIB:A01 A02 A03 A04
        float pib_B01, pib_B02, pib_B03, pib_B04;   
//PIB:A01 A02 A03 A04
            float pib_C01, pib_C02, pib_C03, pib_C04;
//PIB:A01 A02 A03 A04
                float pib_D01, pib_D02, pib_D03, pib_D04;
//PIB:A01 A02 A03 A04
            float pib_E01, pib_E02, pib_E03, pib_E04;
//PIB:A01 A02 A03 A04
        float pib_F01, pib_F02, pib_F03, pib_F04;
//PIB:A01 A02 A03 A04
    float pib_G01, pib_G02, pib_G03, pib_G04;
//PIB:A01 A02 A03 A04
float pib_H01, pib_H02, pib_H03, pib_H04;
//-----------------------------ÁREA--------------------------------------------------
//ÁREA:A01 A02 A04
    float are_A01, are_A02, are_A03, are_A04;
//ÁREA:A01 A02 A04
        float are_B01, are_B02, are_B03, are_B04;
//ÁREA:A01 A02 A04
            float are_C01, are_C02, are_C03, are_C04;
//ÁREA:A01 A02 A04
                float are_D01, are_D02, are_D03, are_D04;
//ÁREA:A01 A02 A04
            float are_E01, are_E02, are_E03, are_E04;
//ÁREA:A01 A02 A04
        float are_F01, are_F02, are_F03, are_F04;
//ÁREA:A01 A02 A04
    float are_G01, are_G02, are_G03, are_G04;
//ÁREA:A01 A02 A04
float are_H01, are_H02, are_H03, are_H04;
//----------------------------------------------------------------------------------          
                            
                             //ESTADO A
                          printf("digite o Estado: \n");    
                //CIDADE A01
fgets(estado1, sizeof(estado1), stdin);
      estado1[strcspn(estado1, "\n")] = '\0'; 
           
            printf("Código da carta \n");
                fgets(cod_A01, sizeof(cod_A01), stdin);
                     cod_A01[strcspn(cod_A01, "\n")] = '\0'; 

printf("Nome da cidade: \n");
    fgets(cid_A01, sizeof(cid_A01), stdin);
       cid_A01[strcspn(cid_A01, "\n")] = '\0';

printf("População: \n");
    scanf("%d", &popu_A01);
            
             while (getchar() != '\n');

printf("Área: \n");
    scanf("%f", &are_A01);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_A01);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_A01);

        printf("\n\n----Dados Registrados com sucesso!----\n\n");
            printf("\n\n---Próxima cidade---\n\n");
//CIDADE A02---------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_A02);
             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_A02, sizeof(cod_A02), stdin);
       cod_A02[strcspn(cod_A02, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_A02);
            
printf("Área: \n");
    scanf("%f", &are_A02);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_A02);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_A02);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//CIDADE A03-----------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_A03);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_A03, sizeof(cod_A03), stdin);
       cod_A03[strcspn(cod_A03, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_A03);
            

printf("Área: \n");
    scanf("%f", &are_A03);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_A03);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_A03);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");


//CIDADE A04-------------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_A04);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_A04, sizeof(cod_A04), stdin);
       cod_A04[strcspn(cod_A04, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_A04);
            
printf("Área: \n");
    scanf("%f", &are_A04);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_A04);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_A04);

    printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");

    printf("\n\n---PRÓXIMO ESTADO---\n\n");

            while(getchar() != '\n');

//-----------------------------------ESTADO B----------------------------------

printf("digite o Estado: \n");    
    fgets(estado2, sizeof(estado2), stdin);
      estado2[strcspn(estado2, "\n")] = '\0'; 

//---------------------------------CIDADE B01-----------------------------------
           
            printf("Código da carta \n");
                fgets(cod_B01, sizeof(cod_B01), stdin);
                     cod_B01[strcspn(cod_B01, "\n")] = '\0'; 

                    printf("Nome da cidade: \n");
                fgets(cid_B01, sizeof(cid_B01), stdin);
            cid_B01[strcspn(cid_B01, "\n")] = '\0';

printf("População: \n");
    scanf("%d", &popu_B01);
            
                     while (getchar() != '\n');

printf("Área: \n");
    scanf("%f", &are_B01);
            
                    while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_B01);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_B01);

        printf("\n\n----Dados Registrados com sucesso!----\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//---------------------------------CIDADE B02---------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_B02);
             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_B02, sizeof(cod_B02), stdin);
       cod_B02[strcspn(cod_B02, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_B02);
            
printf("Área: \n");
    scanf("%f", &are_B02);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_B02);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_B02);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//----------------------------CIDADE B03-----------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_B03);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_B03, sizeof(cod_B03), stdin);
       cod_B03[strcspn(cod_B03, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_B03);
            
printf("Área: \n");
    scanf("%f", &are_B03);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_B03);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_B03);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");


//-------------------------CIDADE B04----------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_B04);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_B04, sizeof(cod_B04), stdin);
       cod_B04[strcspn(cod_B04, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_B04);
            
printf("Área: \n");
    scanf("%f", &are_B04);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_B04);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_B04);

    printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");

    printf("\n\n---PRÓXIMO ESTADO---\n\n");

                    while (getchar() != '\n');

//-----------------------------------ESTADO C----------------------------------
printf("digite o Estado: \n");    
    fgets(estado3, sizeof(estado3), stdin);
      estado3[strcspn(estado3, "\n")] = '\0'; 

//---------------------------------CIDADE C01-----------------------------------
           
            printf("Código da carta \n");
                fgets(cod_C01, sizeof(cod_C01), stdin);
                     cod_C01[strcspn(cod_C01, "\n")] = '\0'; 


                    printf("Nome da cidade: \n");
                fgets(cid_C01, sizeof(cid_C01), stdin);
            cid_C01[strcspn(cid_C01, "\n")] = '\0';

printf("População: \n");
    scanf("%d", &popu_C01);
            
                     while (getchar() != '\n');

printf("Área: \n");
    scanf("%f", &are_C01);
            
                    while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_C01);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_C01);

        printf("\n\n----Dados Registrados com sucesso!----\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//---------------------------------CIDADE C02---------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_C02);
             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_C02, sizeof(cod_C02), stdin);
       cod_C02[strcspn(cod_C02, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_C02);
            

printf("Área: \n");
    scanf("%f", &are_C02);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_C02);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_C02);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//----------------------------CIDADE C03-----------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_C03);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_C03, sizeof(cod_C03), stdin);
       cod_C03[strcspn(cod_C03, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_C03);
            

printf("Área: \n");
    scanf("%f", &are_C03);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_C03);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_C03);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");


//-------------------------CIDADE C04----------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_C04);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_C04, sizeof(cod_C04), stdin);
       cod_C04[strcspn(cod_C04, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_C04);
            
printf("Área: \n");
    scanf("%f", &are_C04);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_C04);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_C04);

    printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");

    printf("\n\n---PRÓXIMO ESTADO---\n\n");

        while(getchar() != '\n');

//-----------------------------------ESTADO D----------------------------------

printf("digite o Estado: \n");    
    fgets(estado4, sizeof(estado4), stdin);
      estado4[strcspn(estado4, "\n")] = '\0'; 

//---------------------------------CIDADE D01-----------------------------------
           
            printf("Código da carta \n");
                fgets(cod_D01, sizeof(cod_D01), stdin);
                     cod_D01[strcspn(cod_D01, "\n")] = '\0'; 

                    printf("Nome da cidade: \n");
                fgets(cid_D01, sizeof(cid_D01), stdin);
            cid_D01[strcspn(cid_D01, "\n")] = '\0';

printf("População: \n");
    scanf("%d", &popu_D01);
            
                     while (getchar() != '\n');

printf("Área: \n");
    scanf("%f", &are_D01);
            
                    while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_D01);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_D01);

        printf("\n\n----Dados Registrados com sucesso!----\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//---------------------------------CIDADE D02---------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_D02);
             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_D02, sizeof(cod_D02), stdin);
       cod_D02[strcspn(cod_D02, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_D02);
            

printf("Área: \n");
    scanf("%f", &are_D02);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_D02);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_D02);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//----------------------------CIDADE D03-----------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_D03);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_D03, sizeof(cod_D03), stdin);
       cod_D03[strcspn(cod_D03, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_D03);
            

printf("Área: \n");
    scanf("%f", &are_D03);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_D03);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_D03);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");


//-------------------------CIDADE D04----------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_D04);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_D04, sizeof(cod_D04), stdin);
       cod_D04[strcspn(cod_D04, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_D04);
            
printf("Área: \n");
    scanf("%f", &are_D04);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_D04);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_D04);

    printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");

    printf("\n\n---PRÓXIMO ESTADO---\n\n");

                    while(getchar() != '\n');

//-----------------------------------ESTADO E----------------------------------
printf("digite o Estado: \n");    
    fgets(estado5, sizeof(estado5), stdin);
      estado5[strcspn(estado5, "\n")] = '\0'; 

//---------------------------------CIDADE E01-----------------------------------
           
            printf("Código da carta \n");
                fgets(cod_E01, sizeof(cod_E01), stdin);
                     cod_E01[strcspn(cod_E01, "\n")] = '\0'; 

                    printf("Nome da cidade: \n");
                fgets(cid_E01, sizeof(cid_E01), stdin);
            cid_E01[strcspn(cid_E01, "\n")] = '\0';

printf("População: \n");
    scanf("%d", &popu_E01);
            
                     while (getchar() != '\n');

printf("Área: \n");
    scanf("%f", &are_E01);
            
                    while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_E01);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_E01);

        printf("\n\n----Dados Registrados com sucesso!----\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//---------------------------------CIDADE E02---------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_E02);
             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_E02, sizeof(cod_E02), stdin);
       cod_E02[strcspn(cod_E02, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_E02);
            

printf("Área: \n");
    scanf("%f", &are_E02);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_E02);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_E02);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//----------------------------CIDADE E03-----------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_E03);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_E03, sizeof(cod_E03), stdin);
       cod_E03[strcspn(cod_E03, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_E03);
            

printf("Área: \n");
    scanf("%f", &are_E03);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_E03);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_E03);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");


//-------------------------CIDADE E04----------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_E04);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_E04, sizeof(cod_E04), stdin);
       cod_E04[strcspn(cod_E04, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_E04);
            
printf("Área: \n");
    scanf("%f", &are_E04);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_E04);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_E04);

    printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");

    printf("\n\n---PRÓXIMO ESTADO---\n\n");

                    while(getchar() != '\n');

    //-----------------------------------ESTADO F----------------------------------
printf("digite o Estado: \n");    
    fgets(estado6, sizeof(estado6), stdin);
      estado6[strcspn(estado6, "\n")] = '\0'; 

//---------------------------------CIDADE F01-----------------------------------
           
            printf("Código da carta \n");
                fgets(cod_F01, sizeof(cod_F01), stdin);
                     cod_F01[strcspn(cod_F01, "\n")] = '\0'; 

                    printf("Nome da cidade: \n");
                fgets(cid_F01, sizeof(cid_F01), stdin);
            cid_F01[strcspn(cid_F01, "\n")] = '\0';

printf("População: \n");
    scanf("%d", &popu_F01);
            
                     while (getchar() != '\n');

printf("Área: \n");
    scanf("%f", &are_F01);
            
                    while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_F01);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_F01);

        printf("\n\n----Dados Registrados com sucesso!----\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//---------------------------------CIDADE F02---------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_F02);
             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_F02, sizeof(cod_F02), stdin);
       cod_F02[strcspn(cod_F02, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_F02);
            

printf("Área: \n");
    scanf("%f", &are_F02);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_F02);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_F02);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//----------------------------CIDADE F03-----------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_F03);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_E03, sizeof(cod_F03), stdin);
       cod_F03[strcspn(cod_F03, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_F03);
            

printf("Área: \n");
    scanf("%f", &are_F03);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_F03);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_F03);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");


//-------------------------CIDADE F04----------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_F04);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_E04, sizeof(cod_F04), stdin);
       cod_F04[strcspn(cod_F04, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_F04);
            
printf("Área: \n");
    scanf("%f", &are_F04);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_F04);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_F04);

    printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");

    printf("\n\n---PRÓXIMO ESTADO---\n\n");

                    while(getchar() != '\n');

//-----------------------------------ESTADO G----------------------------------
printf("digite o Estado: \n");    
    fgets(estado7, sizeof(estado7), stdin);
      estado7[strcspn(estado7, "\n")] = '\0'; 

//---------------------------------CIDADE G01-----------------------------------
           
            printf("Código da carta \n");
                fgets(cod_G01, sizeof(cod_G01), stdin);
                     cod_G01[strcspn(cod_G01, "\n")] = '\0'; 

                    printf("Nome da cidade: \n");
                fgets(cid_G01, sizeof(cid_G01), stdin);
            cid_G01[strcspn(cid_G01, "\n")] = '\0';

printf("População: \n");
    scanf("%d", &popu_G01);
            
                     while (getchar() != '\n');

printf("Área: \n");
    scanf("%f", &are_G01);
            
                    while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_G01);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_G01);

        printf("\n\n----Dados Registrados com sucesso!----\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//---------------------------------CIDADE G02---------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_G02);
             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_G02, sizeof(cod_G02), stdin);
       cod_G02[strcspn(cod_G02, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_G02);
            

printf("Área: \n");
    scanf("%f", &are_G02);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_G02);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_G02);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//----------------------------CIDADE G03-----------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_G03);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_G03, sizeof(cod_G03), stdin);
       cod_G03[strcspn(cod_G03, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_G03);
            

printf("Área: \n");
    scanf("%f", &are_G03);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_G03);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_G03);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");


//-------------------------CIDADE G04----------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_G04);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_G04, sizeof(cod_G04), stdin);
       cod_G04[strcspn(cod_G04, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_G04);
            
printf("Área: \n");
    scanf("%f", &are_G04);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_G04);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_G04);

    printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");

    printf("\n\n---PRÓXIMO ESTADO---\n\n");

                    while(getchar() != '\n');

//-----------------------------------ESTADO H----------------------------------
printf("digite o Estado: \n");    
    fgets(estado8, sizeof(estado8), stdin);
      estado8[strcspn(estado8, "\n")] = '\0'; 

//---------------------------------CIDADE G01-----------------------------------
           
            printf("Código da carta \n");
                fgets(cod_H01, sizeof(cod_H01), stdin);
                     cod_H01[strcspn(cod_H01, "\n")] = '\0'; 

                    printf("Nome da cidade: \n");
                fgets(cid_H01, sizeof(cid_H01), stdin);
            cid_H01[strcspn(cid_H01, "\n")] = '\0';

printf("População: \n");
    scanf("%d", &popu_H01);
            
                     while (getchar() != '\n');

printf("Área: \n");
    scanf("%f", &are_H01);
            
                    while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_H01);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_H01);

        printf("\n\n----Dados Registrados com sucesso!----\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//---------------------------------CIDADE H02---------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_H02);
             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_H02, sizeof(cod_H02), stdin);
       cod_H02[strcspn(cod_H02, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_H02);
            

printf("Área: \n");
    scanf("%f", &are_H02);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_H02);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_H02);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");

//----------------------------CIDADE H03-----------------------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_H03);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_H03, sizeof(cod_H03), stdin);
       cod_H03[strcspn(cod_H03, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_H03);
            

printf("Área: \n");
    scanf("%f", &are_H03);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_H03);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_H03);

        printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");
            printf("\n\n---Próxima cidade---\n\n");


//-------------------------CIDADE H04----------------------------------

printf("Nome da cidade: \n");
    scanf("%s", cid_H04);

             while (getchar() != '\n');

printf("Código da carta \n");
    fgets(cod_H04, sizeof(cod_H04), stdin);
       cod_H04[strcspn(cod_H04, "\n")] = '\0'; 

printf("População: \n");
    scanf("%d", &popu_H04);
            
printf("Área: \n");
    scanf("%f", &are_H04);
            while (getchar() != '\n');

printf("PIB: \n");
    scanf("%f", &pib_H04);
        while (getchar() != '\n');

printf("Número de pontos turísticos: \n");
    scanf("%d", &turism_H04);

    printf("\n\n\n----Dados Registrados com sucesso!----\n\n\n");

    printf("\n\n---CONCLUIDO COM SUCESSO!\n\n---");


printf("\n--TESTE DE RESPOSTAS--\n");

//-----------------CIDADE A01-----------------------RESULTADO-----------------------

printf("Estado A: %s\n", estado1);

printf("Código da carta: %s\n", cod_A01);
printf("Nome da Cidade: %s\n", cid_A01);
printf("População: %d\n", popu_A01);
printf("Área: %0.2f km²\n", are_A01);
printf("PIB: %0.2f bilhões de reais\n", pib_A01);
printf("Número de pontos turisticos: %d\n", turism_A01);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//--------------------CIDADE A02---------RESULTADO--------------------------------

printf("Código da carta: %s\n", cod_A02);
printf("Nome da Cidade: %s\n", cid_A02);
printf("População: %d\n", popu_A02);
printf("Área: %0.2f km²\n", are_A02);
printf("PIB: %0.2f bilhões de reais\n", pib_A02);
printf("Número de pontos turisticos: %d\n", turism_A02);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//------------------------CIDADE A03----------RESULTADO-----------------------

printf("Código da carta: %s\n", cod_A03);
printf("Nome da Cidade: %s\n", cid_A03);
printf("População: %d\n", popu_A03);
printf("Área: %0.2f km²\n", are_A03);
printf("PIB: %0.2f bilhões de reais\n", pib_A03);
printf("Número de pontos turisticos: %d\n", turism_A03);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE A04----------RESULTADO-----------

printf("Código da carta: %s\n", cod_A04);
printf("Nome da Cidade: %s\n", cid_A04);
printf("População: %d\n", popu_A04);
printf("Área: %0.2f km²\n", are_A04);
printf("PIB: %0.2f bilhões de reais\n", pib_A04);
printf("Número de pontos turisticos: %d\n", turism_A04);

printf("\n\n PRÓXIMO ESTADO \n\n");








//CIDADE B01-------RESULTADO-----------

printf("Estado B: %s\n", estado2);

printf("Código da carta: %s\n", cod_B01);
printf("Nome da Cidade: %s\n", cid_B01);
printf("População: %d\n", popu_B01);
printf("Área: %0.2f km²\n", are_B01);
printf("PIB: %0.2f bilhões de reais\n", pib_B01);
printf("Número de pontos turisticos: %d\n", turism_B01);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE B02---------RESULTADO---------

printf("Código da carta: %s\n", cod_B02);

printf("Nome da Cidade: %s\n", cid_B02);
printf("População: %d\n", popu_B02);
printf("Área: %0.2f km²\n", are_B02);
printf("PIB: %0.2f bilhões de reais\n", pib_B02);
printf("Número de pontos turisticos: %d\n", turism_B02);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE B03----------RESULTADO---------

printf("Código da carta: %s\n", cod_B03);

printf("Nome da Cidade: %s\n", cid_B03);
printf("População: %d\n", popu_B03);
printf("Área: %0.2f km²\n", are_A03);
printf("PIB: %0.2f bilhões de reais\n", pib_B03);
printf("Número de pontos turisticos: %d\n", turism_B03);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE B04----------RESULTADO-----------

printf("Código da carta: %s\n", cod_B04);

printf("Nome da Cidade: %s\n", cid_B04);
printf("População: %d\n", popu_B04);
printf("Área: %0.2f km²\n", are_B04);
printf("PIB: %0.2f bilhões de reais\n", pib_B04);
printf("Número de pontos turisticos: %d\n", turism_B04);




printf("\n\n-------PRÓXIMO ESTADO------\n\n");



//CIDADE-------------------C01-------RESULTADO-----------

printf("Estado C: %s\n", estado3);

printf("Código da carta: %s\n", cod_C01);
printf("Nome da Cidade: %s\n", cid_C01);
printf("População: %d\n", popu_C01);
printf("Área: %0.2f km²\n", are_C01);
printf("PIB: %0.2f bilhões de reais\n", pib_C01);
printf("Número de pontos turisticos: %d\n", turism_C01);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE C02---------RESULTADO---------

printf("Código da carta: %s\n", cod_C02);

printf("Nome da Cidade: %s\n", cid_C02);
printf("População: %d\n", popu_C02);
printf("Área: %0.2f km²\n", are_C02);
printf("PIB: %0.2f bilhões de reais\n", pib_C02);
printf("Número de pontos turisticos: %d\n", turism_C02);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE C03----------RESULTADO---------

printf("Código da carta: %s\n", cod_C03);

printf("Nome da Cidade: %s\n", cid_C03);
printf("População: %d\n", popu_C03);
printf("Área: %0.2f km²\n", are_C03);
printf("PIB: %0.2f bilhões de reais\n", pib_C03);
printf("Número de pontos turisticos: %d\n", turism_C03);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE C04----------RESULTADO-----------

printf("Código da carta: %s\n", cod_C04);

printf("Nome da Cidade: %s\n", cid_C04);
printf("População: %d\n", popu_C04);
printf("Área: %0.2f km²\n", are_C04);
printf("PIB: %0.2f bilhões de reais\n", pib_C04);
printf("Número de pontos turisticos: %d\n", turism_C04);



printf("\n\n-------PRÓXIMO ESTADO------\n\n");



//CIDADE-------------------D01-------RESULTADO-----------

printf("Estado D: %s\n", estado4);

printf("Código da carta: %s\n", cod_D01);
printf("Nome da Cidade: %s\n", cid_D01);
printf("População: %d\n", popu_D01);
printf("Área: %0.2f km²\n", are_D01);
printf("PIB: %0.2f bilhões de reais\n", pib_D01);
printf("Número de pontos turisticos: %d\n", turism_D01);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE D02---------RESULTADO---------

printf("Código da carta: %s\n", cod_D02);

printf("Nome da Cidade: %s\n", cid_D02);
printf("População: %d\n", popu_D02);
printf("Área: %0.2f km²\n", are_D02);
printf("PIB: %0.2f bilhões de reais\n", pib_D02);
printf("Número de pontos turisticos: %d\n", turism_D02);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE D03----------RESULTADO---------

printf("Código da carta: %s\n", cod_D03);

printf("Nome da Cidade: %s\n", cid_D03);
printf("População: %d\n", popu_D03);
printf("Área: %0.2f km²\n", are_D03);
printf("PIB: %0.2f bilhões de reais\n", pib_D03);
printf("Número de pontos turisticos: %d\n", turism_D03);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE D04----------RESULTADO-----------

printf("Código da carta: %s\n", cod_D04);

printf("Nome da Cidade: %s\n", cid_D04);
printf("População: %d\n", popu_D04);
printf("Área: %0.2f km²\n", are_D04);
printf("PIB: %0.2f bilhões de reais\n", pib_D04);
printf("Número de pontos turisticos: %d\n", turism_D04);



printf("\n\n-------PRÓXIMO ESTADO------\n\n");



//CIDADE-------------------E01-------RESULTADO-----------

printf("Estado E: %s\n", estado5);

printf("Código da carta: %s\n", cod_E01);
printf("Nome da Cidade: %s\n", cid_E01);
printf("População: %d\n", popu_E01);
printf("Área: %0.2f km²\n", are_E01);
printf("PIB: %0.2f bilhões de reais\n", pib_E01);
printf("Número de pontos turisticos: %d\n", turism_E01);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE C02---------RESULTADO---------

printf("Código da carta: %s\n", cod_E02);

printf("Nome da Cidade: %s\n", cid_E02);
printf("População: %d\n", popu_E02);
printf("Área: %0.2f km²\n", are_E02);
printf("PIB: %0.2f bilhões de reais\n", pib_E02);
printf("Número de pontos turisticos: %d\n", turism_E02);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE C03----------RESULTADO---------

printf("Código da carta: %s\n", cod_E03);

printf("Nome da Cidade: %s\n", cid_E03);
printf("População: %d\n", popu_E03);
printf("Área: %0.2f km²\n", are_E03);
printf("PIB: %0.2f bilhões de reais\n", pib_E03);
printf("Número de pontos turisticos: %d\n", turism_E03);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE C04----------RESULTADO-----------

printf("Código da carta: %s\n", cod_E04);

printf("Nome da Cidade: %s\n", cid_E04);
printf("População: %d\n", popu_E04);
printf("Área: %0.2f km²\n", are_E04);
printf("PIB: %0.2f bilhões de reais\n", pib_E04);
printf("Número de pontos turisticos: %d\n", turism_E04);




printf("\n\n-------PRÓXIMO ESTADO------\n\n");



//CIDADE-------------------F01-------RESULTADO-----------

printf("Estado F: %s\n", estado6);

printf("Código da carta: %s\n", cod_F01);
printf("Nome da Cidade: %s\n", cid_F01);
printf("População: %d\n", popu_F01);
printf("Área: %0.2f km²\n", are_F01);
printf("PIB: %0.2f bilhões de reais\n", pib_F01);
printf("Número de pontos turisticos: %d\n", turism_F01);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE F02---------RESULTADO---------

printf("Código da carta: %s\n", cod_F02);
printf("Nome da Cidade: %s\n", cid_F02);
printf("População: %d\n", popu_F02);
printf("Área: %0.2f km²\n", are_F02);
printf("PIB: %0.2f bilhões de reais\n", pib_F02);
printf("Número de pontos turisticos: %d\n", turism_F02);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE F03----------RESULTADO---------

printf("Código da carta: %s\n", cod_F03);
printf("Nome da Cidade: %s\n", cid_F03);
printf("População: %d\n", popu_F03);
printf("Área: %0.2f km²\n", are_F03);
printf("PIB: %0.2f bilhões de reais\n", pib_F03);
printf("Número de pontos turisticos: %d\n", turism_F03);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE F04----------RESULTADO-----------

printf("Código da carta: %s\n", cod_F04);
printf("Nome da Cidade: %s\n", cid_F04);
printf("População: %d\n", popu_F04);
printf("Área: %0.2f km²\n", are_F04);
printf("PIB: %0.2f bilhões de reais\n", pib_F04);
printf("Número de pontos turisticos: %d\n", turism_F04);


printf("\n\n-------PRÓXIMO ESTADO------\n\n");


//CIDADE-------------------H01-------RESULTADO-----------

printf("Estado G: %s\n", estado7);
printf("Código da carta: %s\n", cod_G01);
printf("Nome da Cidade: %s\n", cid_G01);
printf("População: %d\n", popu_G01);
printf("Área: %0.2f km²\n", are_G01);
printf("PIB: %0.2f bilhões de reais\n", pib_G01);
printf("Número de pontos turisticos: %d\n", turism_G01);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE F02---------RESULTADO---------

printf("Código da carta: %s\n", cod_G02);
printf("Nome da Cidade: %s\n", cid_G02);
printf("População: %d\n", popu_G02);
printf("Área: %0.2f km²\n", are_G02);
printf("PIB: %0.2f bilhões de reais\n", pib_G02);
printf("Número de pontos turisticos: %d\n", turism_G02);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE F03----------RESULTADO---------

printf("Código da carta: %s\n", cod_G03);
printf("Nome da Cidade: %s\n", cid_G03);
printf("População: %d\n", popu_G03);
printf("Área: %0.2f km²\n", are_G03);
printf("PIB: %0.2f bilhões de reais\n", pib_G03);
printf("Número de pontos turisticos: %d\n", turism_G03);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE F04----------RESULTADO-----------

printf("Código da carta: %s\n", cod_G04);
printf("Nome da Cidade: %s\n", cid_G04);
printf("População: %d\n", popu_G04);
printf("Área: %0.2f km²\n", are_G04);
printf("PIB: %0.2f bilhões de reais\n", pib_G04);
printf("Número de pontos turisticos: %d\n", turism_G04);



printf("\n\n-------PRÓXIMO ESTADO------\n\n");



printf("Estado H: %s\n", estado8);
printf("Código da carta: %s\n", cod_H01);
printf("Nome da Cidade: %s\n", cid_H01);
printf("População: %d\n", popu_H01);
printf("Área: %0.2f km²\n", are_H01);
printf("PIB: %0.2f bilhões de reais\n", pib_H01);
printf("Número de pontos turisticos: %d\n", turism_H01);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE H02---------RESULTADO---------

printf("Código da carta: %s\n", cod_H02);
printf("Nome da Cidade: %s\n", cid_H02);
printf("População: %d\n", popu_H02);
printf("Área: %0.2f km²\n", are_H02);
printf("PIB: %0.2f bilhões de reais\n", pib_H02);
printf("Número de pontos turisticos: %d\n", turism_H02);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE H03----------RESULTADO---------

printf("Código da carta: %s\n", cod_H03);
printf("Nome da Cidade: %s\n", cid_H03);
printf("População: %d\n", popu_H03);
printf("Área: %0.2f km²\n", are_H03);
printf("PIB: %0.2f bilhões de reais\n", pib_H03);
printf("Número de pontos turisticos: %d\n", turism_H03);

printf("\n\n---PRÓXIMA CIDADE---\n\n");

//CIDADE H04----------RESULTADO-----------

printf("Código da carta: %s\n", cod_H04);
printf("Nome da Cidade: %s\n", cid_H04);
printf("População: %d\n", popu_H04);
printf("Área: %0.2f km²\n", are_H04);
printf("PIB: %0.2f bilhões de reais\n", pib_H04);
printf("Número de pontos turisticos: %d\n", turism_H04);


printf("\n\n---FINALIZADO COM SUCESSO!!---\n\n");


return 0;
}
