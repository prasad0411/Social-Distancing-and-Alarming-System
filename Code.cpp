#include <Adafruit_NeoPixel.h>
// Pin assignments
int ledPin = 3;
int ledNo = 12;
int buzzerPin = 2;
int echoPin = 6;
int trigPin = 5;
int ledred = 10;
int ledyellow = 11;
int ledwhite = 9;
// Distance thresholds
int minDistance = 100;
int maxDistance = 300;

// NeoPixel strip initialization
Adafruit_NeoPixel strip = Adafruit_NeoPixel(ledNo, ledPin, NEO_RGB + NEO_KHZ800);

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledred, OUTPUT);
  pinMode(ledyellow, OUTPUT);
  pinMode(ledwhite, OUTPUT);
  strip.begin(); // Initialize NeoPixel strip
  strip.show();  // Turn off all LEDs on the strip
}

void loop() {
  int distance = calcDistance(); // Calculate the distance
  
  // Check distance against thresholds
  if (distance <= minDistance) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledred, HIGH);
    // Set NeoPixel strip to red color
    strip.fill(strip.Color(255, 0, 0));
  } else if (distance <= maxDistance) {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledred, HIGH);
    digitalWrite(ledyellow, HIGH);
    // Set NeoPixel strip to yellow color
    strip.fill(strip.Color(255, 255, 0));
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledred, HIGH);
    digitalWrite(ledyellow, HIGH);
    digitalWrite(ledwhite, HIGH);
    // Set NeoPixel strip to white color
    strip.fill(strip.Color(255, 255, 255));
  }
  
  strip.show(); // Update NeoPixel strip display
  delay(50);
}

int calcDistance() {
  long duration;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  int distance = (duration / 29) / 2;
  
  return distance;
}