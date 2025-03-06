int ledPin0 = 5;
int ledPin1 = 6;
int ledPin2 = 7;
int ledPin3 = 8;
int switch0 = 9;
int switch1 = 10;

int switch0State = 0;
int switch1State = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(switch0, INPUT);
  pinMode(switch1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  switch0State = digitalRead(switch0);
  switch1State = digitalRead(switch1);

  if (switch1State == 0){

    if (switch0State == 0){

      digitalWrite(ledPin0, HIGH);
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      }

    else{

      digitalWrite(ledPin0, LOW);
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      }
  }

  else{

    if (switch0State == 0){

      digitalWrite(ledPin0, LOW);
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, LOW);
      }

    else{

      digitalWrite(ledPin0, LOW);
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, HIGH);
      }
   }
}