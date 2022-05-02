#include <stdio.h>

int main() {
    
    int a, *p_a;    //vytvorime 2 premenne a a jej adresu p_a
    a = 56;         //nastavime hodnotu premennej a
    p_a = &a;       //nastavime adresu premennej a
    *p_a = 15;      //nastavime hodnotu premennej a na 15
    printf("POINTER p_a má hodnotu %d ukazuje na hodnotu %d", p_a, *p_a);

    return 0;

    /* 
    nastavovanie adresy premennej robime pomocou znaku & (operatoru),
    teraz chceme tam kam ukazuje pointer p_a nastavit hodnotu 15
    
    pre toto pouzijeme operator * a tym neulozime hodnotu ale tam kam ukazuje pointer p_a
    */
    
}