	/*POV 5x8 LED  */
	/***************************************************************************************************************/
<<<<<<< HEAD
	int A[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,1,1,1,1,1,1,1};
	int B[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 0,1,1,0,1,1,1,0};
	int C[] = {0,0,1,1,1,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1};
	int D[] = {1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,0,0,0,0,1,0, 0,0,1,1,1,1,0,0};
	int E[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1, 1,0,0,1,0,0,0,1};
	int F[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0};
	int G[] = {0,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0};
	int H[] = {1,1,1,1,1,1,1,1, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 1,1,1,1,1,1,1,1};
	int I[] = {1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1};
	int J[] = {0,0,0,0,0,1,1,0, 0,0,0,0,1,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0};
	int K[] = {1,1,1,1,1,1,1,1, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 0,1,0,0,0,0,1,0, 1,0,0,0,0,0,0,1};
	int L[] = {1,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1};
	int M[] = {1,1,1,1,1,1,1,1, 0,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 1,1,1,1,1,1,1,1};
	int N[] = {1,1,1,1,1,1,1,1, 0,0,1,0,0,0,0,0, 0,0,0,1,1,0,0,0, 0,0,0,0,0,1,0,0, 1,1,1,1,1,1,1,1};
	int O[] = {0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 1,0,0,0,0,0,0,1, 0,1,1,1,1,1,1,0};
	int P[] = {1,1,1,1,1,1,1,1, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 1,0,0,1,0,0,0,0, 0,1,1,0,0,0,0,0};
	int Q[] = {0,1,1,1,1,1,1,0, 1,0,0,0,0,0,0,1, 1,0,0,0,0,1,0,1, 0,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1};
	int R[] = {1,1,1,1,1,1,1,1, 1,0,0,1,1,0,0,0, 1,0,0,1,0,1,0,0, 1,0,0,1,0,0,1,0, 0,1,1,0,0,0,0,1};
	int S[] = {0,1,1,1,0,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,0,0,1, 1,0,0,0,1,1,1,0};
	int T[] = {1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0, 1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,0, 1,0,0,0,0,0,0,0};
	int U[] = {1,1,1,1,1,1,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 1,1,1,1,1,1,1,0};
	int V[] = {1,1,1,1,1,1,0,0, 0,0,0,0,0,0,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,0,0};
	int W[] = {1,1,1,1,1,1,1,1, 0,0,0,0,0,0,1,0, 0,0,0,0,0,1,0,0, 0,0,0,0,0,0,1,0, 1,1,1,1,1,1,1,1};
	int X[] = {1,1,0,0,0,0,1,1, 0,0,1,0,0,1,0,0, 0,0,0,1,1,0,0,0, 0,0,1,0,0,1,0,0, 1,1,0,0,0,0,1,1};
	int Y[] = {1,1,0,0,0,0,0,0, 0,0,1,0,0,0,0,0, 0,0,0,1,1,1,1,1, 0,0,1,0,0,0,0,0, 1,1,0,0,0,0,0,0};
	int Z[] = {1,0,0,0,0,1,1,1, 1,0,0,0,1,0,0,1, 1,0,0,1,0,0,0,1, 1,0,1,0,0,0,0,1, 1,1,0,0,0,0,0,1};
	//****************************************************************************************************************
	int a[] = {0,0,0,0,0,0,1,0, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,0,1,1,1,1};
	int b[] = {0,1,1,1,1,1,1,1, 0,0,0,0,1,0,0,1, 0,0,0,1,0,0,0,1, 0,0,0,1,0,0,0,1, 0,0,0,0,1,1,1,0};
	int c[] = {0,0,0,0,1,1,1,0, 0,0,0,1,0,0,0,1, 0,0,0,1,0,0,0,1, 0,0,0,1,0,0,0,1, 0,0,0,0,0,0,1,0};
	int d[] = {0,0,0,0,1,1,1,0, 0,0,0,1,0,0,0,1, 0,0,0,1,0,0,0,1, 0,0,0,0,1,0,0,1, 0,1,1,1,1,1,1,1};
	int e[] = {0,0,0,0,1,1,1,0, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,0,1,1,0,0};
	int f[] = {0,0,0,0,1,0,0,0, 0,0,1,1,1,1,1,1, 0,1,0,0,1,0,0,0, 0,1,1,0,0,0,0,0, 0,0,1,0,0,0,0,0};
	int g[] = {0,0,0,0,1,0,0,0, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,1,1,1,1,0};
	int h[] = {0,1,1,1,1,1,1,1, 0,0,0,0,1,0,0,0, 0,0,0,1,0,0,0,0, 0,0,0,1,0,0,0,0, 0,0,0,0,1,1,1,1};
	int i[] = {0,0,0,0,0,0,0,0, 0,0,0,0,1,0,0,1, 0,1,0,1,1,1,1,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,0};
	int j[] = {0,0,0,0,0,0,1,0, 0,0,0,0,0,0,0,1, 0,0,0,1,0,0,0,1, 0,1,0,1,1,1,1,0, 0,0,0,0,0,0,0,0};
	int k[] = {0,1,1,1,1,1,1,1, 0,0,0,0,0,1,0,0, 0,0,0,0,1,0,1,0, 0,0,0,1,0,0,0,1, 0,0,0,0,0,0,0,0};
	int l[] = {0,0,0,0,0,0,0,0, 0,1,0,0,0,0,0,1, 0,1,1,1,1,1,1,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,0};
	int m[] = {0,0,0,1,1,1,1,1, 0,0,0,1,0,0,0,0, 0,0,0,0,1,1,1,1, 0,0,0,1,0,0,0,0, 0,0,0,0,1,1,1,1};
	int n[] = {0,0,0,1,1,1,1,1, 0,0,0,0,1,0,0,0, 0,0,0,1,0,0,0,0, 0,0,0,1,0,0,0,0, 0,0,0,0,1,1,1,1};
	int o[] = {0,0,0,0,1,1,1,0, 0,0,0,1,0,0,0,1, 0,0,0,1,0,0,0,1, 0,0,0,1,0,0,0,1, 0,0,0,0,1,1,1,0};
	int p[] = {0,0,0,1,1,1,1,1, 0,0,0,1,0,1,0,0, 0,0,0,1,0,1,0,0, 0,0,0,1,0,1,0,0, 0,0,0,0,1,0,0,0};
	int q[] = {0,0,0,0,1,0,0,0, 0,0,0,1,0,1,0,0, 0,0,0,1,0,1,0,0, 0,0,0,0,1,1,0,0, 0,0,0,1,1,1,1,1};
	int r[] = {0,0,0,0,0,0,1,0, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,0,1,1,1,1};
	int s[] = {0,0,0,0,1,0,0,1, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,1,0,1,0,1, 0,0,0,0,0,0,1,0};
	int t[] = {0,0,0,1,0,0,0,0, 0,1,1,1,1,1,1,0, 0,0,0,1,0,0,0,1, 0,0,1,0,0,0,0,1, 0,0,0,0,0,0,1,0};
	int u[] = {0,0,1,1,1,1,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,1,0, 0,0,1,1,1,1,1,1};
	int v[] = {0,0,0,1,1,1,0,0, 0,0,0,0,0,0,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,1,0, 0,0,0,1,1,1,1,0};
	int w[] = {0,0,0,1,1,1,1,0, 0,0,0,0,0,0,0,1, 0,0,0,0,0,1,1,0, 0,0,0,0,0,0,0,1, 0,0,0,1,1,1,1,0};
	int x[] = {0,0,0,1,0,0,0,1, 0,0,0,0,1,0,1,0, 0,0,0,0,0,1,0,0, 0,0,0,0,1,0,1,0, 0,0,0,1,0,0,0,1};
	int y[] = {0,0,0,1,1,0,0,0, 0,0,0,0,0,1,0,1, 0,0,0,0,0,1,0,1, 0,0,0,0,0,1,0,1, 0,0,0,1,1,1,1,1};
	int z[] = {0,0,0,1,0,0,0,1, 0,0,0,1,0,0,1,1, 0,0,0,1,0,1,0,1, 0,0,0,1,1,0,0,1, 0,0,0,1,0,0,0,1};
	//******************** NUMBERS**********************************************************************
	int _1[]= {0,0,0,0,0,0,0,0, 0,0,1,0,0,0,0,1, 0,1,1,1,1,1,1,1, 0,0,1,0,0,0,0,1, 0,0,0,0,0,0,0,0};
	int _2[]= {0,0,1,0,0,0,0,1, 0,1,0,0,0,0,1,1, 0,1,0,0,0,1,0,1, 0,1,0,0,1,0,0,1, 0,0,1,1,0,0,0,1};
	int _3[]= {0,1,0,0,0,0,1,0, 0,1,0,0,0,0,0,1, 0,1,0,1,0,0,0,1, 0,1,0,0,1,0,0,1, 0,1,0,0,0,1,1,0};
	int _4[]= {0,0,0,0,1,1,0,0, 0,0,0,1,0,1,0,0, 0,0,1,0,0,1,0,0, 0,1,0,1,1,1,1,1, 0,0,0,0,0,1,0,0};
	int _5[]= {0,1,1,1,0,0,1,0, 0,1,0,1,0,0,0,1, 0,1,0,1,0,0,0,1, 0,1,0,1,0,0,0,1, 0,1,0,0,1,1,1,0};
	int _6[]= {0,0,0,1,1,1,1,1, 0,0,1,0,1,0,0,1, 0,1,0,0,1,0,0,1, 0,1,1,0,1,0,0,1, 0,0,0,0,0,1,1,0};
	int _7[]= {0,1,1,0,0,0,0,0, 0,1,0,0,0,0,0,0, 0,1,0,0,0,1,1,1, 0,1,0,0,1,0,0,0, 0,1,1,1,0,0,0,0};
	int _8[]= {0,0,1,1,0,1,1,0, 0,1,0,0,1,0,0,1, 0,1,0,0,1,0,0,1, 0,1,0,0,1,0,0,1, 0,0,1,1,0,1,1,0};
	int _9[]= {0,0,1,1,0,0,0,0, 0,1,0,0,1,0,0,1, 0,1,0,0,1,0,0,1, 0,1,0,0,1,0,1,0, 0,0,1,1,1,1,0,0};
	int _0[]= {0,0,1,1,1,1,1,0, 0,1,0,0,0,1,0,1, 0,1,0,0,1,0,0,1, 0,1,0,1,0,0,0,1, 0,0,1,1,1,1,1,0};
	// Special Characters**********************************************************************************************
	int Space[]	    	    = {0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};//space
	int _[]          	    = {0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,1,0,0,0};//- character
	int comma[]       	    = {0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,1,0,1, 0,0,0,0,0,1,1,0, 0,0,0,0,0,0,0,0};//, character
	int point[]             = {0,0,0,0,0,0,0,0, 0,0,0,0,0,0,1,1, 0,0,0,0,0,0,1,1, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};//. character
	int __[]				= {0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1, 0,0,0,0,0,0,0,1};//_ character
	int rightArrow[] 	    = {0,1,0,0,0,0,0,1, 0,0,1,0,0,0,1,0, 0,0,0,1,0,1,0,0, 0,0,0,0,1,0,0,0, 0,0,0,0,0,0,0,0};//> character
	int leftArrow[]		    = {0,0,0,0,1,0,0,0, 0,0,0,1,0,1,0,0, 0,0,1,0,0,0,1,0, 0,1,0,0,0,0,0,1, 0,0,0,0,0,0,0,0};//< character
	int hagTag[]			= {0,0,0,1,0,1,0,0, 0,1,1,1,1,1,1,1, 0,0,0,1,0,1,0,0, 0,1,1,1,1,1,1,1, 0,0,0,1,0,1,0,0};//# character
	int semicolon[]		    = {0,0,0,0,0,0,0,0, 0,0,1,1,0,1,0,1, 0,0,1,1,0,1,1,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};//; character
	int doublePoint[]		= {0,0,0,0,0,0,0,0, 0,0,1,1,0,1,1,0, 0,0,1,1,0,1,1,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};//: character
	int Parenthese_1[]	    = {0,1,0,0,0,0,0,1, 0,0,1,0,0,0,1,0, 0,0,0,1,1,1,0,0, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};//) character
	int Parenthese_2[]	    = {0,0,0,1,1,1,0,0, 0,0,1,0,0,0,1,0, 0,1,0,0,0,0,0,1, 0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0};//( character

=======

 #include "font.h"
 #include <SoftwareSerial.h>
  int writeCode=0;
>>>>>>> 6ead057004488e43fa4ca9840eff28e417b2612a
  /***********************************************************************************/ 
 /*****************Variables*******************/
int leds[]={5,6,7,8,9,10,11,12};
byte Length=0; 
char Letter;   
String Word;
<<<<<<< HEAD
=======
String spaceLetterSettings;
String dotTimeSettings;
String spaceletterValue;
String dotTimeValue;
String reverseSettings;
String normalSettings;
int reverse=0;
>>>>>>> 6ead057004488e43fa4ca9840eff28e417b2612a
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
<<<<<<< HEAD
		Serial3.begin(9600);
		Serial3.flush();
=======
	  Serial.begin(9600);
		mySerial.begin(9600);
		mySerial.flush();
>>>>>>> 6ead057004488e43fa4ca9840eff28e417b2612a
 }
 
 void loop()
 {
<<<<<<< HEAD
	 if (Serial3.available())
  {
    
    Serial3.flush(); 
    Word="";
       
    while (Serial3.available() >0)
    {      
       delay(5);
       Letter = Serial3.read(); 
       Word = Word+Letter;
     
     } 
   }  
   
   Length = Word.length(); 
   
   
   
   for(int i=0;i<Length;i++)
      {
        char Character = Word.charAt(i);
        
        letterDebug=(Character-'0');
	
        
          if (letterDebug>0) 
          {
                                                                                                                                                                                                                                                          
               switch (Character)
                {
=======
  
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

>>>>>>> 6ead057004488e43fa4ca9840eff28e417b2612a

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

					// *******************************special characters**************************************************************
					case ' ':
					printLetter(Space);
					break;  
					case '-':
					printLetter(_);
					break;
					case ',':
					printLetter(comma);
					break;
					case '_':
					printLetter(__);
					break;
					case '.':
					printLetter(point);
					break;  
					case '>':
					printLetter(rightArrow);
					break;
					case '<':
					printLetter(leftArrow);
					break;
					case '#':
					printLetter(hagTag);
					break;
					case ';':
					printLetter(semicolon);
					break;  
					case ':':
					printLetter(doublePoint);
					break;
					case ')':
					printLetter(Parenthese_1);
					break;
					case '(':
					printLetter(Parenthese_2);
					break;
 					

<<<<<<< HEAD
                 }  
                 
             }  
        
     } 
   
   
   
 }
=======
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

>>>>>>> 6ead057004488e43fa4ca9840eff28e417b2612a
