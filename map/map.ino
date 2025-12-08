const int NUM_BUTTONS = 5;
const int BUTTON_PINS[NUM_BUTTONS] = {34, 35, 32, 33, 25};
const int SUBMIT_PIN = 26;

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < NUM_BUTTONS; i++) {
    pinMode(BUTTON_PINS[i], INPUT);
  }
  pinMode(SUBMIT_PIN, INPUT_PULLUP);
}

void loop() {
  for (int i = 0; i < NUM_BUTTONS; i++) {
    int raw = digitalRead(BUTTON_PINS[i]);
    int logicalState = (raw == LOW) ? 1 : 0;
    Serial.print(logicalState);
    Serial.print(" ");
  }

  int submitRaw = digitalRead(SUBMIT_PIN);
  int submitState = (submitRaw == LOW) ? 1 : 0;
  Serial.println(submitState);

  delay(200);
}
