# 🔥 Smart Industrial Overheat Protection System with Manual Reset

An industrial-grade safety system designed using Arduino to monitor temperature using the LM35 sensor, protect motors from overheating, and enforce manual reset logic after cooling. Ideal for showcasing embedded systems skills for companies like Bosch, Siemens, and Tata.

---

## 📸 Project Preview

![System Simulation](Smart Industrial Overheat Protection System.png)

---

## 🔧 Features

- 🧠 LM35 temperature sensing
- ⚠️ Overheat detection at 60°C
- 🔄 Cooling phase with motor fan
- ⏱️ 30-second cooldown (can be set to 5 mins)
- 🔘 Manual reset via push button
- 🖥️ Real-time status on 16x2 LCD
- 🔊 Buzzer + LED indicators

---

## 🧾 Bill of Materials

| Component | Quantity |
|----------|----------|
| Arduino UNO | 1  
| LM35 Temperature Sensor | 1  
| 16x2 LCD Display | 1  
| DC Motor (Fan) | 1  
| Red, Green, Yellow LEDs | 3  
| Buzzer | 1  
| Push Button | 1  
| Potentiometer (10k) | 1  
| Breadboard + Jumpers | As needed  

📎 Full BOM attached: [`bom.csv`](./bom.csv)

---

## 💻 Code

Arduino source file: [`smart_industrial_overheat_protection_system1.ino`](./smart_industrial_overheat_protection_system1.ino)

---

## 📄 Documentation

All system explanation, logic flow, and wiring guide included in:  
📘 [`Smart Industrial Overheat Protection System.pdf`](./Smart%20Industrial%20Overheat%20Protection%20System.pdf)

---

## 🏭 Industry Relevance

This project simulates real-world motor safety systems used in industrial machines, HVAC units, and manufacturing equipment.

✅ Shows understanding of:
- Safety protocols  
- Embedded control systems  
- Manual override logic  
- UI + sensor integration

---

## ✅ How It Works

| Condition | System Response |
|----------|-----------------|
| Temp < 60°C | Green LED ON, motor ON  
| Temp ≥ 60°C | Red LED + buzzer, motor OFF, fan ON  
| Cooldown 30s | Yellow LED ON  
| After cooldown | Waits for manual button reset  
| Button Pressed | System resets to normal state

---

## 📂 Folder Structure

Smart Industrial Overheat Protection System/
├── smart_industrial_overheat_protection_system1.ino
├── Smart Industrial Overheat Protection System.pdf
├── bom.csv
├── Smart Industrial Overheat Protection System.png
---

## 🚀 Try It On

💡 Simulate this project on [Tinkercad Circuits](https://www.tinkercad.com/circuits)  
Perfect for interviews, resumes, or engineering project showcases.

---

## 🙌 Made with Love by

**Parth Pawar**  
🚀 Passionate Embedded & AI Builder  
📍 India  
🔗 [LinkedIn](https://www.linkedin.com/in/parth-pawar-b82628248/) | [GitHub](https://github.com/parth-558)

---

