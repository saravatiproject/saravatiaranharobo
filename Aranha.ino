#include <Servo.h>


Servo giro1;
Servo vert1;
Servo giro2;
Servo vert2;
Servo giro3;
Servo vert3;
Servo giro4;
Servo vert4;

#define g4min 50
#define g3min 50
#define g2min 50
#define g1min 50


#define g4max 110
#define g3max 110
#define g2max 110
#define g1max 110

#define h0 100

void setup() {
  // put your setup code here, to run once:
    giro1.attach(2);vert1.attach(3);
    giro2.attach(4);vert2.attach(5);
    giro3.attach(6);vert3.attach(7);
    giro4.attach(8);vert4.attach(9);

  abaixa();
  delay(1000);
  levanta();
  delay(1000);
  abaixa();
  delay(1000);  
  hzero();
  //while(true){}
}


void loop() {
  andar(10);
  while(true){
    
  }
}



void andar( int passos){
// input:
  hzero();
  for( int i = 0 ; i<passos; i++){
    
    vert1.write(50); delay(100); giro1.write(g1max); delay(100);vert1.write(h0); delay(100);
    vert4.write(50); delay(100); giro4.write(g4max); delay(100);vert4.write(h0); delay(100);
    giro4.write(g1min);giro1.write(g4min);  

    vert3.write(50); delay(100); giro3.write(g1min); delay(100);vert3.write(h0); delay(100);
    vert2.write(50); delay(100); giro2.write(g4min); delay(100);vert2.write(h0); delay(100);
    giro2.write(g1max);giro3.write(g4max);
  }
  hzero();
}


void abaixa(){
    giro1.write(90);vert1.write(50);
    giro2.write(90);vert2.write(50);
    giro3.write(90);vert3.write(50);
    giro4.write(90);vert4.write(50);  
}

void levanta(){
    giro1.write(90);vert1.write(100);
    giro2.write(90);vert2.write(100);
    giro3.write(90);vert3.write(100);
    giro4.write(90);vert4.write(100);  
}

void hzero(){
  vert1.write(h0);
  vert2.write(h0);
  vert3.write(h0);
  vert4.write(h0);
}
