// C++ code
//

#define A 9
#define B 10
#define C 11
#define D A2
#define E A3
#define F A5
#define G A4

int numero;

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

  

  
}


void loop()
{
   if(digitalRead(8)==HIGH){
    numero = random(1,6);
    
    switch(numero){
  
    case 1:
      digitalWrite(2,LOW);
  	  digitalWrite(3,LOW);
  	  digitalWrite(4,LOW);
  	  digitalWrite(5,LOW);
  	  digitalWrite(6,HIGH);
  	  digitalWrite(7,LOW);
      
      analogWrite(A, 0); //LOW
  	  analogWrite(B, 255);//HIGH
      analogWrite(C, 255);
      analogWrite(D, 0);
      analogWrite(E, 0);
      analogWrite(F, 0);
      analogWrite(G, 0);
      
      delay(1000);
      
      analogWrite(A, 0);
  	  analogWrite(B, 0);
      analogWrite(C, 0);
      analogWrite(D, 0);
      analogWrite(E, 0);
      analogWrite(F, 0);
      analogWrite(G, 0);
      
      numero = 0;
      break;
      
    case 2:
      digitalWrite(2,LOW);
  	  digitalWrite(3,LOW);
  	  digitalWrite(4,LOW);
  	  digitalWrite(5,HIGH);
  	  digitalWrite(6,LOW);
  	  digitalWrite(7,HIGH);
      
      analogWrite(A, 255);
  	  analogWrite(B, 255);
      analogWrite(C, 0);
      analogWrite(D, 255);
      analogWrite(E, 255);
      analogWrite(F, 0);
      analogWrite(G, 255);
      
      delay(1000);
      
      analogWrite(A, 0);
  	  analogWrite(B, 0);
      analogWrite(C, 0);
      analogWrite(D, 0);
      analogWrite(E, 0);
      analogWrite(F, 0);
      analogWrite(G, 0);
      
      numero = 0;
      break;
      
    case 3:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      
      analogWrite(A, 255);
  	  analogWrite(B, 255);
      analogWrite(C, 255);
      analogWrite(D, 255);
      analogWrite(E, 0);
      analogWrite(F, 0);
      analogWrite(G, 255);
      
      delay(1000);
      
      analogWrite(A, 0);
  	  analogWrite(B, 0);
      analogWrite(C, 0);
      analogWrite(D, 0);
      analogWrite(E, 0);
      analogWrite(F, 0);
      analogWrite(G, 0);
      
      numero = 0;
      break;
      
    case 4:
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      
      analogWrite(A, 0);
  	  analogWrite(B, 255);
      analogWrite(C, 255);
      analogWrite(D, 0);
      analogWrite(E, 0);
      analogWrite(F, 255);
      analogWrite(G, 255);
      
      delay(1000);
      
      analogWrite(A, 0);
  	  analogWrite(B, 0);
      analogWrite(C, 0);
      analogWrite(D, 0);
      analogWrite(E, 0);
      analogWrite(F, 0);
      analogWrite(G, 0);
      
      numero = 0;
      break;
      
    case 5:
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,HIGH);
      
      analogWrite(A, 255);
  	  analogWrite(B, 0);
      analogWrite(C, 255);
      analogWrite(D, 255);
      analogWrite(E, 0);
      analogWrite(F, 255);
      analogWrite(G, 255);
      
      delay(1000);
      
      analogWrite(A, 0);
  	  analogWrite(B, 0);
      analogWrite(C, 0);
      analogWrite(D, 0);
      analogWrite(E, 0);
      analogWrite(F, 0);
      analogWrite(G, 0);
      
      numero = 0;
      break;
      
    default:
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      
      analogWrite(A, 255);
  	  analogWrite(B, 0);
      analogWrite(C, 255);
      analogWrite(D, 255);
      analogWrite(E, 255);
      analogWrite(F, 255);
      analogWrite(G, 255);
      
      delay(1000);
      
      analogWrite(A, 0);
  	  analogWrite(B, 0);
      analogWrite(C, 0);
      analogWrite(D, 0);
      analogWrite(E, 0);
      analogWrite(F, 0);
      analogWrite(G, 0);
      
      numero = 0;
      break;
  }
  }else{
     digitalWrite(2,LOW);
  	 digitalWrite(3,LOW);
  	 digitalWrite(4,LOW);
  	 digitalWrite(5,LOW);
  	 digitalWrite(6,LOW);
  	 digitalWrite(7,LOW);
     
     analogWrite(A, 0);
  	 analogWrite(B, 0);
     analogWrite(C, 0);
     analogWrite(D, 0);
     analogWrite(E, 0);
     analogWrite(F, 0);
     analogWrite(G, 0);
  }
  
}
















