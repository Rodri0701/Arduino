/* Entrada hacia el arduino */
int entrada1 = A0;
int entrada2 = A1;
int entrada3 = A2;
int entrada4 = A3;
/* Fin entrada del arduino */

/* Salida hacia el display */
int a = 2;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
int f = 9;
int g = 10;
/* Salidas del segundo display */
int a1 = 0;
int b2 = 1;
int c3 = 3;
int d4 = 4;
int e5 = 11;
int f6 = 12;
int g7 = 13;
/* Fin de las salidad del display */
int Estadoentrada1 =0;
int Estadoentrada2 =0;
int Estadoentrada3 =0;
int Estadoentrada4 =0;

void setup() {
  /* Asginando el modo de cada pin */
  pinMode(entrada1 , INPUT);
  pinMode(entrada2 , INPUT);
  pinMode(entrada3 , INPUT);
  pinMode(entrada4 , INPUT);
  pinMode(a , OUTPUT);
  pinMode(b , OUTPUT);
  pinMode(c , OUTPUT);
  pinMode(d , OUTPUT);
  pinMode(e , OUTPUT);
  pinMode(f , OUTPUT);
  pinMode(g , OUTPUT);

  pinMode(a1 , OUTPUT);
  pinMode(b2 , OUTPUT);
  pinMode(c3 , OUTPUT);
  pinMode(d4 , OUTPUT);
  pinMode(e5 , OUTPUT);
  pinMode(f6 , OUTPUT);
  pinMode(g7 , OUTPUT);

}

void loop() {
/* Con LOW se prende el display porque es anodo común
y con HGH se apaga */
/* Detención de entradas y su lectura digital */
Estadoentrada1=digitalRead(entrada1);
Estadoentrada2=digitalRead(entrada2);
Estadoentrada3=digitalRead(entrada3);
Estadoentrada4=digitalRead(entrada4);


if (Estadoentrada1 == LOW && Estadoentrada2 == LOW && Estadoentrada3 == LOW && Estadoentrada4 == LOW)
{
cero0(0,0,0,0);  
cero(0,0,0,0); /* Se llama la función cero */
    /*A,B,C,D*/
} 
  else if (Estadoentrada1 == HIGH && Estadoentrada2 == LOW && Estadoentrada3 == LOW && Estadoentrada4 == LOW){ /* Inicio de uno */
cero (0,0,0,0);
uno1(1,0,0,0);
    /*A,B,C,D */
  }
  else if (Estadoentrada1 == LOW && Estadoentrada2 == HIGH && Estadoentrada3 == LOW && Estadoentrada4 == LOW) { /* Inicio de dos */
dos2 (0,1,0,0);
cero (0,0,0,0);
    /*A,B,C,D */
  } /* Fin del dos */
  else if (Estadoentrada1 ==  HIGH && Estadoentrada2 == HIGH && Estadoentrada3 == LOW && Estadoentrada4 == LOW){
tres3(1,1,0,0);
cero(0,0,0,0);
  } /* Fin del tres */
  else if (Estadoentrada1 ==  LOW && Estadoentrada2 == LOW && Estadoentrada3 == HIGH && Estadoentrada4 == LOW){
cuatro4(0,0,1,0);
cero(0,0,0,0);
  }/* Fin del cuatro */
  else if (Estadoentrada1 ==  HIGH && Estadoentrada2 == LOW && Estadoentrada3 == HIGH && Estadoentrada4 == LOW){
cinco5(1,0,1,0);
cero(0,0,0,0);
  }/* Fin del quinto */
  else if (Estadoentrada1 ==  LOW && Estadoentrada2 == HIGH && Estadoentrada3 == HIGH && Estadoentrada4 == LOW){
seis6(0,1,1,0);
cero(0,0,0,0);
  } /* Fin del sexto */
  else if (Estadoentrada1 ==  HIGH && Estadoentrada2 == HIGH && Estadoentrada3 == HIGH && Estadoentrada4 == LOW){
siete7(1,1,1,0); /* Fin del septimo */
cero(0,0,0,0);
  }
  else if(Estadoentrada1 ==  LOW && Estadoentrada2 == LOW && Estadoentrada3 == LOW && Estadoentrada4 == HIGH){
ocho8(0,0,0,1);
cero(0,0,0,0);
  }/* fin del octavo */
  else if (Estadoentrada1 ==  HIGH && Estadoentrada2 == LOW && Estadoentrada3 == LOW && Estadoentrada4 == HIGH){
nueve9(1,0,0,1);    
cero(0,0,0,0);
  } /* Número 09 */
  else if (Estadoentrada1 ==  LOW && Estadoentrada2 == HIGH && Estadoentrada3 == LOW && Estadoentrada4 == HIGH){
uno(1,0,0,0);
cero0(0,0,0,0);  
  } /* número 10 */
  else if (Estadoentrada1 == HIGH && Estadoentrada2 == HIGH && Estadoentrada3 == LOW && Estadoentrada4 == HIGH){
uno(1,0,0,0);
uno1(1,0,0,0);
  }/* Número 11 */
  else if (Estadoentrada1 == LOW && Estadoentrada2 == LOW && Estadoentrada3 == HIGH && Estadoentrada4 == HIGH){
    uno(1,0,0,0);
    dos2(0,1,0,0);
  }/* Número 12 */
  else if (Estadoentrada1 == HIGH && Estadoentrada2 == LOW && Estadoentrada3 == HIGH && Estadoentrada4 == HIGH){
    uno(1,0,0,0);
    tres3(1,1,0,0);
  }/* Número 13 */
  else if (Estadoentrada1 == LOW && Estadoentrada2 == HIGH && Estadoentrada3 == HIGH && Estadoentrada4 == HIGH){
    uno(1,0,0,0);
  cuatro4(0,0,1,0); 
  }/* Número 14 */
  else if (Estadoentrada1 == HIGH && Estadoentrada2 == HIGH && Estadoentrada3 == HIGH && Estadoentrada4 == HIGH){
    uno(1,0,0,0);
    cinco5(1,0,1,0);
  }
} /* Fin del ciclo foop */ 

 /* Inicio de las funcinoes de cada número del segundo diplay */
int cero0(int entrada1, int entrada2, int entrada3, int entrada4){ /* Inicio de la función 0 */
  if (entrada1 == 0 && entrada2 == 0 && entrada3 == 0 && entrada4 == 0){
    digitalWrite(a1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(c3, LOW);
    digitalWrite(d4, LOW);
    digitalWrite(e5, LOW);
    digitalWrite(f6, LOW);
    digitalWrite(g7, HIGH);
  }
  }/* Fin de mi función 0 */
int uno1(int entrada1, int entrada2, int entrada3, int entrada4)/* Inicio de la función 1 */{
     if (entrada1 == 1 && entrada2 == 0 && entrada3 == 0 && entrada4 == 0){
    digitalWrite(a1, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c3, LOW);
    digitalWrite(d4, HIGH);
    digitalWrite(e5, HIGH);
    digitalWrite(f6, HIGH);
    digitalWrite(g7, HIGH);
  }
  }/* Fin de la funcón 1 */
int dos2 (int entrada1, int entrada2, int entrada3, int entrada4)/* Inicio de la función 2 */{
  if (entrada1 == 0 && entrada2 == 1 && entrada3 == 0 && entrada4 == 0){
    digitalWrite(a1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(c3, HIGH);
    digitalWrite(d4, LOW);
    digitalWrite(e5, LOW);
    digitalWrite(f6, HIGH);
    digitalWrite(g7, LOW);
  }
  }/* Fin de la funcón 2 */
int tres3 (int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 3 */
  if (entrada1 == 1 && entrada2 == 1 && entrada3 == 0 && entrada4 == 0){
    digitalWrite(a1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(c3, LOW);
    digitalWrite(d4, LOW);
    digitalWrite(e5, HIGH);
    digitalWrite(f6, HIGH);
    digitalWrite(g7, LOW);
  }
  }/* Fin de la funcón 3 */  
int cuatro4(int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 4 */
   if (entrada1 == 0 && entrada2 == 0 && entrada3 == 1 && entrada4 == 0){
    digitalWrite(a1, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c3, LOW);
    digitalWrite(d4, HIGH);
    digitalWrite(e5, HIGH);
    digitalWrite(f6, LOW);
    digitalWrite(g7, LOW);
  } 
  }/* Fin de la función 4*/
int cinco5 (int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 5 */
  if (entrada1 == 1 && entrada2 == 0 && entrada3 == 1 && entrada4 == 0){
    digitalWrite(a1, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c3, LOW);
    digitalWrite(d4, LOW);
    digitalWrite(e5, HIGH);
    digitalWrite(f6, LOW);
    digitalWrite(g7, LOW);
  }  
  }/* Fin de la función 5 */
int seis6(int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 6 */
  if (entrada1 == 0 && entrada2 == 1 && entrada3 == 1 && entrada4 == 0){
    digitalWrite(a1, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c3, LOW);
    digitalWrite(d4, LOW);
    digitalWrite(e5, LOW);
    digitalWrite(f6, LOW);
    digitalWrite(g7, LOW);
  }  
  }/* Fin de la función 6 */
int siete7(int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 7 */
  if (entrada1 == 1 && entrada2 == 1 && entrada3 == 1 && entrada4 == 0){
    digitalWrite(a1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(c3, LOW);
    digitalWrite(d4, HIGH);
    digitalWrite(e5, HIGH);
    digitalWrite(f6, HIGH);
    digitalWrite(g7, HIGH);
  }
  }/* Fin de la función 7 */
int ocho8(int entrada1, int entrada2, int entrada3, int entrada4){ /* Inicio de la función 8 */
  if (entrada1 == 0 && entrada2 == 0 && entrada3 == 0 && entrada4 == 1){
    digitalWrite(a1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(c3, LOW);
    digitalWrite(d4, LOW);
    digitalWrite(e5, LOW);
    digitalWrite(f6, LOW);
    digitalWrite(g7, LOW);
  }
  }/* Fin de la función 8 */
int nueve9(int entrada1, int entrada2, int entrada3, int entrada4){ /*Inicio de la función 9*/ 
  if (entrada1 == 1 && entrada2 == 0 && entrada3 == 0 && entrada4 == 1){
    digitalWrite(a1, LOW);
    digitalWrite(b2, LOW);
    digitalWrite(c3, LOW);
    digitalWrite(d4, HIGH);
    digitalWrite(e5, HIGH);
    digitalWrite(f6, LOW);
    digitalWrite(g7, LOW);
  }
  }/* Fin de la función 9 */
/* Inicio de las funcinoes de cada número del primer diplay*/
int cero(int entrada1, int entrada2, int entrada3, int entrada4){ /* Inicio de la función 0 */
  if (entrada1 == 0 && entrada2 == 0 && entrada3 == 0 && entrada4 == 0){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
  }
  }/* Fin de mi función 0 */


int uno(int entrada1, int entrada2, int entrada3, int entrada4)/* Inicio de la función 1 */{
     if (entrada1 == 1 && entrada2 == 0 && entrada3 == 0 && entrada4 == 0){
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
  }/* Fin de la funcón 1 */

int dos (int entrada1, int entrada2, int entrada3, int entrada4)/* Inicio de la función 2 */{
  if (entrada1 == 0 && entrada2 == 1 && entrada3 == 0 && entrada4 == 0){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  }
  
  }/* Fin de la funcón 2 */

int tres (int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 3 */
  if (entrada1 == 1 && entrada2 == 1 && entrada3 == 0 && entrada4 == 0){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
  }
  }/* Fin de la funcón 3 */  

int cuatro(int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 4 */
   if (entrada1 == 0 && entrada2 == 0 && entrada3 == 1 && entrada4 == 0){
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  } 
  }/* Fin de la función 4*/
int cinco (int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 5 */
  if (entrada1 == 1 && entrada2 == 0 && entrada3 == 1 && entrada4 == 0){
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }  
  }/* Fin de la función 5 */
int seis(int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 6 */
  if (entrada1 == 0 && entrada2 == 1 && entrada3 == 1 && entrada4 == 0){
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }  
  }/* Fin de la función 6 */
int siete(int entrada1, int entrada2, int entrada3, int entrada4){/* Inicio de la función 7 */
  if (entrada1 == 1 && entrada2 == 1 && entrada3 == 1 && entrada4 == 0){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }
  }/* Fin de la función 7 */
int ocho(int entrada1, int entrada2, int entrada3, int entrada4){ /* Inicio de la función 8 */
  if (entrada1 == 0 && entrada2 == 0 && entrada3 == 0 && entrada4 == 1){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  }/* Fin de la función 8 */
int nueve(int entrada1, int entrada2, int entrada3, int entrada4){ /*Inicio de la función 9*/ 
  if (entrada1 == 1 && entrada2 == 0 && entrada3 == 0 && entrada4 == 1){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
  }/* Fin de la función 9 */

  




  
