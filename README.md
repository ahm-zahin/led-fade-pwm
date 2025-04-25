# LED Fade using PWM on Arduino

This simple Arduino project fades an LED in and out smoothly using Pulse Width Modulation (PWM). It's a great beginner-friendly project to understand how analogWrite works.

## 🧠 How It Works

The code gradually increases and decreases the brightness of the LED by modifying the PWM signal sent to the LED pin. The `fadeAmount` variable controls how much the brightness changes each step.

## 🛠️ Components Required

- Arduino Uno
- 1x LED
- 1x 220Ω resistor
- Breadboard & jumper wires

## ⚡ Circuit Connection

| LED Pin | Arduino Pin |
|--------|-------------|
| Anode (long leg) | D11 (PWM pin) |
| Cathode (short leg) | GND (via 220Ω resistor) |

## 🧪 Code Logic

```cpp
int brightness = 0;
int fadeAmount = 15;

analogWrite(ledPin, brightness);
brightness += fadeAmount;

if (brightness <= 0 || brightness >= 255) {
  fadeAmount = -fadeAmount;
}

