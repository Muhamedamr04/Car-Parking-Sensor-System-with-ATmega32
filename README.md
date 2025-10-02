# 🚗 Car Parking Sensor System | ATmega32

## 📌 Project Overview
This project simulates a **Car Parking Sensor System** using an **ATmega32 microcontroller**.  
It helps drivers detect obstacles while parking by combining **ultrasonic sensing, LEDs, a buzzer, and an LCD display** to provide real-time distance feedback.

---

## 🎯 Features
- **Ultrasonic Distance Measurement**  
  Detects the distance between the car and obstacles using an **HC-SR04 sensor**.  

- **LCD Display**  
  Shows the measured distance in centimeters. Displays **“Stop”** when the obstacle is ≤ 5 cm.  

- **LED Indicators**  
  RGB LEDs light up progressively as the distance decreases.  

- **Buzzer Alerts**  
  Triggers when the obstacle is too close, giving an audible warning.  

---

## ⚙️ Hardware Components
- ATmega32 Microcontroller (16 MHz)  
- HC-SR04 Ultrasonic Sensor  
- 16x2 LCD Display (4-bit mode)  
- Red, Green, and Blue LEDs  
- Buzzer  

---

## 🔌 Pin Configuration
- **Ultrasonic Sensor**  
  - Trigger → PD7  
  - Echo → PD6  

- **LCD Display (4-bit mode)**  
  - RS → PA1  
  - E → PA2  
  - D4 → PA3  
  - D5 → PA4  
  - D6 → PA5  
  - D7 → PA6  

- **LEDs**  
  - Red → PC0  
  - Green → PC1  
  - Blue → PC2  

- **Buzzer**  
  - PC5  

---

## 🛠️ Software & Drivers
- Language: **Embedded C**  
- MCU: **ATmega32 (AVR)**  
- Drivers Implemented:  
  - GPIO Driver  
  - ICU Driver (for ultrasonic timing)  
  - LCD Driver (4-bit mode)  
  - Buzzer Driver  
  - Ultrasonic Driver  

---

## 📖 How It Works
1. The **ultrasonic sensor** emits sound waves and measures the time for the echo to return.  
2. The **ICU driver** calculates the distance based on the pulse width.  
3. The **LCD** displays the measured distance.  
4. The **LEDs** light up according to distance ranges.  
5. The **buzzer** sounds if the obstacle is ≤ 5 cm, and the LCD shows **“Stop”**.  

---

## 🚀 Learning Outcomes
- Implementing a **layered driver architecture** in embedded systems.  
- Using the **ICU driver** for precise timing and pulse measurement.  
- Integrating multiple peripherals into a complete system.  
- Strengthening **Embedded C programming** and **hardware-software interfacing** skills.  

---

## 📹 Demo Video
[Click here to watch the demo]([https://youtu.be/bhtyP1ZBiJg](https://www.linkedin.com/posts/moamr04_embeddedsystems-avr-ultrasonicsensor-activity-7379508713767714816-6Lwm?utm_source=social_share_send&utm_medium=member_desktop_web&rcm=ACoAAETVuYEB4Qeqhcj92reIoQuR05DbOfhIkgU))

---

## 🙏 Acknowledgment
Special thanks to **Edges For Training Team** for guidance and support during this project.  

