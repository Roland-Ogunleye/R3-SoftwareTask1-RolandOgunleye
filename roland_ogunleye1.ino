// C++ code
//
int SensorValue = 0;

int unnamed = 0;
int FirstDigit=0;
int SecondDigit =0;
int i = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
// Set the pins as outputs
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  // Read in value from A0 and then map from a range of 0-99
  SensorValue = analogRead(A0);
  SensorValue = map(SensorValue, 0, 1023, -9,99);
  
  // Detect the first two digits of the Sensorvalue
  FirstDigit = (SensorValue / 10) % 10;
  SecondDigit = SensorValue %10;
  //Display First, Second and Sensorvalue 
  Serial.println(SensorValue);
 Serial.println(SecondDigit);
  Serial.println(FirstDigit);
  
  // If statements to check what first digit to display on seven segments
  if ( FirstDigit == 0) 
  {
        digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    
  } 
   else if (FirstDigit == 1) {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, HIGH);
  }
   else if (FirstDigit == 2) {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(4, LOW);
  }
   else if (FirstDigit == 3) {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
  }
   else if (FirstDigit == 4) {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
  }
   else if (FirstDigit ==5) {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(4, HIGH);
  }
   else if (FirstDigit == 6) {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, LOW);
  }
   else if (FirstDigit == 7) {
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
  }
   else if (FirstDigit == 8) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
  }
   else if (FirstDigit == 9) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(4, HIGH);
  }
  // If statements to check what second digit to display on seven segments
   if ( SecondDigit == 0) {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(10, LOW);
  } 
   else if (SecondDigit == 1) {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
  }
   else if (SecondDigit == 2) {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
  }
   else if (SecondDigit == 3) {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(10, HIGH);
  }
   else if (SecondDigit == 4) {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(10, LOW);
  }
   else if (SecondDigit ==5) {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
  }
   else if (SecondDigit == 6) {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
  }
   else if (SecondDigit == 7) {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    digitalWrite(10, HIGH);
  }
   else if (SecondDigit == 8) {
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(10, LOW);
  }
   else if (SecondDigit == 9) {
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
  }
  
  

  
  delay(10); // Delay a little bit to improve simulation performance
}
