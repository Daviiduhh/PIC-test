/*P1_1 "Testeo"
 Vamos a realizar un programa que al cumplir una condicion (presionar un boton)
 muestre las dos primeras letras de un alumno y encienda los LEDs en las
 posiciones pares, y si no se cumple mostrará las dos primeras letras del
 nombre del otro estudiante y encenderá los LEDs en las posiciones impares.
 Este codigo está diseñado por medio de directivas.
 Lunes 6 de Marzo del 2020 7I2
 David Madrid Nápoles 17100201
 Romina Irene Martínez Ortega 17100212*/
#INCLUDE <16F887.H>
#USE DELAY(CLOCK=4000000)
#FUSES INTRC_IO,NOWDT,NOPUT,NOMCLR,NOPROTECT,NOCPD,NOBROWNOUT
#FUSES NOIESO,NOFCMEN,NOLVP,NODEBUG,NOWRT,BORV21
 
 #USE FAST_IO(A)
 #USE FAST_IO(B)
 #USE FAST_IO(C)
 #USE FAST_IO(D)
 
 VOID MAIN()
 {
 SET_TRIS_A(0X00);
 SET_TRIS_B(0X00);
 SET_TRIS_C(0XFF);
 SET_TRIS_D(0X00);
 
OUTPUT_A(0X00);
OUTPUT_C(0X00);
OUTPUT_D(0X00);

    WHILE (TRUE)
    {
    IF((INPUT(PIN_C7))==0)
      {
      OUTPUT_A(0X0A);//MUESTRA r
      OUTPUT_B(0XFC);//MUESTRA o
      OUTPUT_D(0B01010101);//ENCIENDEN LOS LEDS EN BITS PARES
      }
      ELSE
      {
      OUTPUT_A(0X7A);//MUESTRA d
      OUTPUT_B(0XEE);//MUESTRA A
      OUTPUT_D(0B10101010);//ENCIENDEN LOS LEDS EN BITS IMPARES
      }
    }
}
