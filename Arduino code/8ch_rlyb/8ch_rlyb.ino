int RELAY1 = 4;
int RELAY2 = 5;
int RELAY3 = 6;
int RELAY4 = 7;
int RELAY5 = 8;
int RELAY6 = 9;
int RELAY7 = 10;
int RELAY8 = 11;

int UP_BTN = 2;
int DOWN_BTN = 3;

int DELAY = 100;

void setup() {
  pinMode(UP_BTN, INPUT_PULLUP);
  pinMode(DOWN_BTN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(UP_BTN), UP, CHANGE);
  attachInterrupt(digitalPinToInterrupt(DOWN_BTN), DOWN, CHANGE);

  for (int i = 4; i < 12; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  for (int i = 4; i < 12; i++) {
    digitalWrite(i, HIGH);
  }
  delay(DELAY);
  for (int i = 4; i < 12; i++) {
    digitalWrite(i, LOW);
  }
  delay(DELAY);
}

void UP() {
  if (DELAY < 5000) {
    DELAY++;
  }
}

void DOWN() {
  if (DELAY > 100) {
    DELAY--;
  }
}
