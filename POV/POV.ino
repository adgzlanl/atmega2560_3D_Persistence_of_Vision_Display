	/*POV 5x8 LED  */
	/***************************************************************************************************************/
 #include <SoftwareSerial.h>

  int writeCode=0;
  /***********************************************************************************/ 
 /*****************Variables*******************/
//int leds[]={2,3,4,5,6,7,8,9};
byte Length=0; 
char Letter;   
String Word;
String spaceLetterSettings;
String dotTimeSettings;
String spaceletterValue;
String dotTimeValue;
int spaceLetter=0;
int dotTime=0;
int letterDebug;
SoftwareSerial mySerial(2, 3); // RX, TX
/**************************************************/
void cleanLed()
{
  for(int i=0;i<8;i++)
    {
      digitalWrite(i+2,LOW);
    } 
}
/**************************************************/

//*******************************************
void printLetter(int character[])
{
  int y;

 //************ 1. Column***************************
  for (y=0; y<8; y++)
  { 
    digitalWrite(y+2, character[y]);
  }
  delay(dotTime);
  cleanLed();
 
 
 //************ 2. Column***************************
  for (y=0; y<8; y++)
  {
    digitalWrite(y+2, character[y+8]);
  }
  delay(dotTime);
    cleanLed();
   
 
 //************ 3. Column***************************
  for (y=0; y<8; y++)
  {   
    digitalWrite(y+2, character[y+16]);
  }
  delay(dotTime);
    cleanLed();
	
  //************ 4. Column*************************** 

  for (y=0; y<8; y++)
  {
    digitalWrite(y+2, character[y+24]);
  }
  delay(dotTime);
    cleanLed();
 
 //************ 5. Column*************************** 
  for (y=0; y<8; y++)
  {
    digitalWrite(y+2, character[y+32]);
  }
  delay(dotTime);
    cleanLed();
	
   	

//********************Clean All Led************************

  for (y=0; y<8; y++)
  {
    digitalWrite(y+2, 0);
  }
  
  delay(spaceLetter);
}
//*********************************************

void setup()
 {
	 spaceLetter=10;
     dotTime=3;
	 
	 for(int i=2;i<10;i++)
	 {		
		pinMode(i, OUTPUT);
	 }
		mySerial.begin(9600);
		Serial.begin(9600);
		mySerial.flush();
 }
 
 void loop()
 {
  
      	 if (mySerial.available())
        {
          
          mySerial.flush(); 
          Word="";
          spaceLetterSettings="";
          dotTimeSettings="";
          spaceletterValue =""; 
              while (mySerial.available() >0)
              {      
                 delay(5);
                 Letter = mySerial.read(); 
                 Word = Word+Letter;
                 
             } 
                 
                 spaceLetterSettings=Word.substring(0,13);
                 dotTimeSettings=Word.substring(0,9);
                 
                  
                  if(spaceLetterSettings=="<spaceLetter>")
                  {
                    writeCode=2;
                    spaceletterValue=Word.substring((spaceLetterSettings.length()),Word.indexOf('|'));
                    spaceLetter=spaceletterValue.toInt();

                  }
                  
                  if(dotTimeSettings=="<dotTime>")
                  {
                    writeCode=1;
                    dotTimeValue=Word.substring((dotTimeSettings.length()),Word.indexOf('|'));
                    dotTime=dotTimeValue.toInt();
                  }
         
         } 



              

           if (writeCode==0)
        
           {
            
               Length = Word.length(); 
           for(int i=0;i<Length;i++)
              {
                char Character = Word.charAt(i);
                
                letterDebug=(Character-'0');
          
                
                  if (letterDebug>0) 
                  {
                 //Serial.println(Character);                                                                                                                           
                       switch (Character)
                        {
        
                  case 'A':
                  printLetter(A);
                  break;
                  case 'B':
                  printLetter(B);
                  break;
                  case 'C':
                  printLetter(C);
                  break;
                  case 'D':
                  printLetter(D);
                  break;
                  case 'E':
                  printLetter(E);
                  break;   
                  case 'F':
                  printLetter(F);
                  break;             
                  case 'G':
                  printLetter(G);
                  break;              
                  case 'H':    
                  printLetter(H);
                  break;              
                  case 'I':      
                  printLetter(I);
                  break;              
                  case 'J':
                  printLetter(J);
                  break;              
                  case 'K':
                  printLetter(K);
                  break;     
                  case 'L':
                  printLetter(L);
                  break;   
                  case 'M':
                  printLetter(M);
                  break;   
                  case 'N':
                  printLetter(N);
                  break;   
                  case 'O':
                  printLetter(O);
                  break;   
                  case 'P':
                  printLetter(P);
                  break;   
                  case 'Q':
                  printLetter(Q);
                  break;                   
                  case 'R':
                  printLetter(R);
                  break;   
                  case 'S':
                  printLetter(S);
                  break;  
                  case 'T':
                  printLetter(T);
                  break;  
                  case 'U':
                  printLetter(U);
                  break;  
                  case 'V':
                  printLetter(V);
                  break;
                  case 'W':
                  printLetter(W);
                  break;
                  case 'X':
                  printLetter(X);
                  break;      
                  case 'Y':
                  printLetter(Y);
                  break;  
                  case 'Z':
                  printLetter(Z);
                  break;  
                  case 'a':
                  printLetter(a);
                  break;
                  case 'b':
                  printLetter(b);
                  break;
                  case 'c':
                  printLetter(c);
                  break;
                  case 'd':
                  printLetter(d);
                  break;
                  case 'e':
                  printLetter(e);
                  break;
                  case 'f':
                  printLetter(f);
                  break;   
                  case 'g':
                  printLetter(g);
                  break;             
                  case 'i':
                  printLetter(i);
                  break;              
                  case 'j':    
                  printLetter(j);
                  break;              
                  case 'k':      
                  printLetter(k);
                  break;              
                  case 'l':
                  printLetter(l);
                  break;              
                  case 'm':
                  printLetter(m);
                  break;     
                  case 'n':
                  printLetter(n);
                  break;   
                  case 'o':
                  printLetter(o);
                  break;   
                  case 'p':
                  printLetter(p);
                  break;   
                  case 'q':
                  printLetter(q);
                  break;   
                  case 'r':
                  printLetter(r);
                  break;   
                  case 's':
                  printLetter(s);
                  break;                   
                  case 't':
                  printLetter(t);
                  break;   
                  case 'u':
                  printLetter(u);
                  break;  
                  case 'v':
                  printLetter(v);
                  break;  
                  case 'w':
                  printLetter(w);
                  break;  
                  case 'x':
                  printLetter(x);
                  break;
                  case 'y':
                  printLetter(y);
                  break;
                  case 'z':
                  printLetter(z);
                  break;      
                  case '1':
                  printLetter(_1);
                  break;  
                  case '2':
                  printLetter(_2);
                  break;  
                  case '3':
                  printLetter(_3);
                  break;  
                  case '4':
                  printLetter(_4);
                  break;
                  case '5':
                  printLetter(_5);
                  break;  
                  case '6':
                  printLetter(_6);
                  break;  
                  case '7':
                  printLetter(_7);
                  break;  
                  case '8':
                  printLetter(_8);
                  break;
                  case '9':
                  printLetter(_9);
                  break;  
                  case '0':
                  printLetter(_0);
                  break;  
        
                  
        
                         }  
                         
                     }  
                
             }
           
           
           }
   

 }
