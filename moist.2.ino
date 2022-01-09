
byte pump1 = 7;
int sensor_pin = A0; // Soil Sensor input at Analog PIN A0
int output_value ;
void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
     Serial.begin(9600);
      while (!Serial);
        pinMode(pump1, OUTPUT); // variant low/high
   Serial.println("Reading From the Sensor ..."); s
}


  // put your main code here, to run repeatedly:

  void loop() {
   output_value= analogRead(sensor_pin);
 output_value = map(output_value,550,10,0,100);
   Serial.print("Mositure : ");
   Serial.print(output_value);
   Serial.println("%");
   if(output_value<36){
     digitalWrite(pump1, LOW);// pump1 activated
   }
   else {digitalWrite(pump1, HIGH); // pump1 deactivated
   }
}
