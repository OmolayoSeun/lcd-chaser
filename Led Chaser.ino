int led_1 = 4;
int led_2 = 5;
int led_3 = 6;
int led_4 = 7;
int pin = 1;
int button = 8;
int buttonState;
int ledState = 0;
int delayT = 1000;
void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(button, INPUT);
  pinMode(pin, OUTPUT);
}
void loop() {
  buttonState = digitalRead(button);

  if (buttonState == LOW) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(250);
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
  }
  if (ledState == HIGH) {
    digitalWrite(led_1, HIGH);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(delayT);
    
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, HIGH);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(delayT);
    
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, HIGH);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(delayT);
    
    digitalWrite(led_3, LOW);
    digitalWrite(led_4, HIGH);
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(delayT);
    
    digitalWrite(led_4, LOW);
  }
  else{
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);   
    digitalWrite(led_4, LOW); 
  }
}