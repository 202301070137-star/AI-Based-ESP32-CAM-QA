/*
  AI-Based Smart Object Detection & Alert System
  Embedded prototype: ESP32-CAM + AI inference output

  Note:
  This starter code demonstrates the embedded alert/control layer.
  The AI model/inference function can be connected to a TinyML or
  Edge Impulse classifier in the next implementation stage.
*/

#define ALERT_LED 4
#define BUZZER_PIN 2

String aiClass = "UNKNOWN";
float confidence = 0.0;

void setup() {
  Serial.begin(115200);
  pinMode(ALERT_LED, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(ALERT_LED, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.println("AI-Based Smart Object Detection System Started");
}

void loop() {
  // Example AI inference result.
  // Replace these values with the output of the trained model.
  aiClass = "TARGET";
  confidence = 0.91;

  if (aiClass == "TARGET" && confidence >= 0.80) {
    digitalWrite(ALERT_LED, HIGH);
    tone(BUZZER_PIN, 1000);
    Serial.println("AI RESULT: Target detected - ALERT");
  } else {
    digitalWrite(ALERT_LED, LOW);
    noTone(BUZZER_PIN);
    Serial.println("AI RESULT: No target detected");
  }

  delay(1000);
}
