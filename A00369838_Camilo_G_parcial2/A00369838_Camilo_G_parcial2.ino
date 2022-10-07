int PIN_LEDONE = 4;
int PIN_LEDTWO = 5;
int PIN_LEDTHREE = 6;
int PIN_LEDFOUR = 7;
int PIN_LEDFIVE = 8;
int BUTTON_PIN = 2;
int BZ_PIN = 3;
int SENSOR_HUMEDAD = A0;
int SENSOR_VALUE;
int limit = 300;

int myLeds[5] = {4,5,6,7,8};


void setup()
{
  
  Serial.begin(9600);
  for(int i=0;i<5;i++){
  pinMode(myLeds[i],OUTPUT);
  } 
}

void loop()
{
  
  SENSOR_VALUE = analogRead(SENSOR_HUMEDAD );
  Serial.print(SENSOR_VALUE);
  
  if (SENSOR_VALUE<limit) {
digitalWrite(BZ_PIN, HIGH);
    tone(BZ_PIN,100);
}
else if(SENSOR_VALUE>limit) {
digitalWrite(BZ_PIN, LOW);
  noTone(BZ_PIN);
 }
    for(int i=0;i<5;i++){
   if(SENSOR_VALUE = 100){
  digitalWrite(myLeds[i],1);
     delay(500);
  
   }else if(SENSOR_VALUE > 100){
     digitalWrite(myLeds[i],0);
    delay(50);
   }
      
      
      
  
  }

delay(500); 
}
  
