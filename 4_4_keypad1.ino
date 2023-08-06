#include <Keypad.h>
const byte rows = 4;
const byte cols= 4;

char hexkeypad[rows][cols]={{'1','2','3','A'},{'4','5','6','B'},{'7','8','9','C'},{'*','0','#','D'}};

byte rowspins[rows] = {2,3,4,5};
byte colspins[cols] = {6,7,8,9};

Keypad kpd = Keypad(makeKeymap(hexkeypad), rowspins, colspins, rows, cols);
byte i = 0;

void setup()
{
   Serial.begin(9600);
  for(i=0; i<8;i++){
    pinMode(i , OUTPUT);
  }
  
}

void loop()
{
  char keypressed = kpd.getKey();
  if(keypressed){
  	Serial.print("key pressed is");
    Serial.println(keypressed);
  }

      
    
  
}