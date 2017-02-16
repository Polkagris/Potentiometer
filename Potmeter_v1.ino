int potMeter = A0;  //analog pin zero
int ReadValue;
int redLED1 = A1;   //analog pin
int redLED2 = A2;   //analog pin
int redLED3 = A3;   //analog pin
int redLED4 = A4;   //analog pin
int redLED5 = A5;   //analog pin

void setup() {

pinMode(ReadValue,INPUT);   //input from user by turning knob
pinMode(redLED1,OUTPUT);
pinMode(redLED2,OUTPUT);
pinMode(redLED3,OUTPUT);
pinMode(redLED4,OUTPUT);
pinMode(redLED5,OUTPUT);
Serial.begin(9600);

}

void loop() {

ReadValue = analogRead(potMeter);   //read from pin A0 and send to ReadValue
Serial.println(ReadValue);          //print potMeter value
delay(500);

if(ReadValue <= 250 && ReadValue >= 1){
  analogWrite(redLED1,200);                 //if potmeter value between 250 and 1 turn on LED1
}
else if(ReadValue <= 400 && ReadValue >= 251){
  analogWrite(redLED2,200);                 //if potmeter value between 400 and 251 turn on LED2
}
else if(ReadValue <= 550 && ReadValue >= 401){
  analogWrite(redLED3,200);                 //if potmeter value between 550 and 401 turn on LED3
}
else if(ReadValue <= 800 && ReadValue >= 551){
  analogWrite(redLED4,200);                  //if potmeter value between 800 and 551 turn on LED4
}
else if(ReadValue <= 1023 && ReadValue >= 801){
  analogWrite(redLED5,200);                  //if potmeter value between 1023 and 801 turn on LED5
}

else if(ReadValue == 0)   //if ReadValue is zero then turn off all LEDs
{
  analogWrite(redLED1,0);    //potmeter value to LED1
  analogWrite(redLED2,0);    //potmeter value to LED2
  analogWrite(redLED3,0);    //potmeter value to LED3
  analogWrite(redLED4,0);    //potmeter value to LED4
  analogWrite(redLED5,0);    //potmeter value to LED5
 }
}


