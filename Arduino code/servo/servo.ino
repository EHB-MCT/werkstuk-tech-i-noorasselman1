//tilt sensor met led

  int tiltsensor = 2;
  
  void setup()
  {
    pinMode(tiltsensor, INPUT);
    //initialize communication at 9600 bits per second
    Serial.begin(9600);
  }

  void loop()
  {
    //print the value on the serial monitor
    //Go to Tools->Serial Monitor to see the values
    Serial.println(digitalRead(tiltsensor));
    delay(100);
  }
