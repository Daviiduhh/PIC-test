/*P1_1 "If-Else"
 Vamos a realizar un programa que al cumplir una condicion (presionar un boton)
 muestre las dos primeras letras de un alumno y encienda los LEDs en las
 posiciones pares, y si no se cumple mostrará las dos primeras letras del
 nombre del otro estudiante y encenderá los LEDs en las posiciones impares.
 Este codigo está diseñado por medio de RAM.
 Lunes 6 de Marzo del 2020 7I2
 David Madrid Nápoles 17100201
 Romina Irene Martínez Ortega 17100212*/
 
  //BASE PROGRAM
#INCLUDE <16F887.H>
#USE DELAY(CLOCK=4000000)
#FUSES INTRC_IO,NOWDT,NOPUT,NOMCLR,NOPROTECT,NOCPD,NOBROWNOUT
#FUSES NOIESO,NOFCMEN,NOLVP,NODEBUG,NOWRT,BORV21

//DIRECTIVAS DE LOS PUERTOS A UTILIZAR
#BYTE TRISA = 0X85
#BYTE PORTA = 0X05
 
#BYTE TRISB = 0X86
#BYTE PORTB = 0X06
 
#BYTE TRISC = 0X87
#BYTE PORTC = 0X07

#BYTE TRISD = 0X88
#BYTE PORTD = 0X08

VOID MAIN()
{
TRISC=0XFF;//DECLARAMOS I/O
TRISD=0X00;
TRISA=0X00;
TRISB=0X00;

PORTA=0X00; //LIMPIAMOS O
PORTB=0X00;
PORTD=0X00;

   WHILE (TRUE)
   {
      IF(BIT_TEST(PORTC,7)==0)
      {
      PORTA=0X0A;//MUESTRA r
      PORTB=0XFC;//MUESTRA o
      PORTD=0B01010101;//ENCIENDEN LOS LEDS EN BITS PARES
      }
      ELSE 
      {
      PORTA=0X7A;//MUESTRA d
      PORTB=0XEE;//MUESTRA A
      PORTD=0B10101010;//ENCIENDEN LOS LEDS EN BITS IMPARES
      }
   }
}
