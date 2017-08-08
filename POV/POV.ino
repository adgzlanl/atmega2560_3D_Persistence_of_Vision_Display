	/*POV 5x8 LED  */
	/***************************************************************************************************************/

 #include "font.h"
 #include <SoftwareSerial.h>
  int writeCode=0;
  /***********************************************************************************/ 
 /*****************Variables*******************/
int leds[]={5,6,7,8,9,10,11,12};
byte Length=0; 
char Letter;   
String Word;
String spaceLetterSettings;
String dotTimeSettings;
String spaceletterValue;
String dotTimeValue;
String reverseSettings;
String normalSettings;
int reverse=0;
int spaceLetter=0;
int dotTime=0;
int letterDebug;
SoftwareSerial mySerial(2, 3);
/**************************************************/
void cleanLed()
{
  for(int i=0;i<8;i++)
    {
	digitalWrite(leds[i],LOW);
    } 
}
/**************************************************/

//*******************************************
void printLetter(char ch)
{
  int y;
  int i;
  
  if (ch < 32 || ch > 126){
    ch = 32;
  }
  
  ch -= 32;
  

 for (i=4; i>-1; i--) {
	 
 byte b = font[ch][i];
 
  for (y=0; y<8; y++)
  { 
    digitalWrite(leds[y], bitRead(b,y));
  
  }
  delay(dotTime);
  cleanLed();

 
 }
 

  for (y=0; y<8; y++)
  {
    digitalWrite(leds[y], 0);
  }
  
  delay(spaceLetter);
}
//*********************************************

//*******************************************
void reverseprintLetter(char ch)
{
  int y;
  int i;
  
  if (ch < 32 || ch > 126){
    ch = 32;
  }
  
  ch -= 32;
  

 for (i=0; i<5; i++) {
   
 byte b = font[ch][i];
 
  for (y=0; y<8; y++)
  { 
    digitalWrite(leds[y], bitRead(b,7-y));
  
  }
  delay(dotTime);
  cleanLed();

 
 }
 

  for (y=0; y<8; y++)
  {
    digitalWrite(leds[y], 0);
  }
  
  delay(spaceLetter);
}
//*********************************************

void setup()
 {


	 spaceLetter=10;
     dotTime=3;
	 
	 for(int i=5;i<13;i++)
	 {		
		pinMode(i, OUTPUT);
	 }
	  Serial.begin(9600);
		mySerial.begin(9600);
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
          reverseSettings="";
          normalSettings="";
          spaceletterValue =""; 
              while (mySerial.available() >0)
              {      
                 delay(5);
                 Letter = mySerial.read(); 
                 Word = Word+Letter;
                 
             } 
                 
                 spaceLetterSettings=Word.substring(0,13);
                 dotTimeSettings=Word.substring(0,9);
                 reverseSettings=Word.substring(0,9);
                 normalSettings=Word.substring(0,8);
                  
                  if(spaceLetterSettings=="<spaceLetter>")
                  {
                    writeCode=2;
                    spaceletterValue=Word.substring((spaceLetterSettings.length()),Word.indexOf('|'));
                    spaceLetter=spaceletterValue.toInt();

                  }
                  
                  if(dotTimeSettings=="<dotTime>")
                  {
                    writeCode=2;
                    dotTimeValue=Word.substring((dotTimeSettings.length()),Word.indexOf('|'));
                    dotTime=dotTimeValue.toInt();
                  }

                  if(reverseSettings=="<Reverse>")
                  {

                    writeCode=2;
                    reverse=1;

                  }
                  if(reverseSettings=="<Normal>")
                  {

                    writeCode=2;
                    reverse=0;

                  }
         
         } 



              

           if (writeCode==0)
        
           {
            
               Length = Word.length(); 
           for(int i=0;i<Length;i++)
              {
                char Character = Word.charAt(i);
                
             if (reverse==0)
             {
                printLetter(Character);
             }  

             else if (reverse==1)
             {
                reverseprintLetter(Character);
             }   
					
                  
        
                         }  
                         
                     }  
                
             }

