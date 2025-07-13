# 🔧 Smart Industrial Overheat Protection System with Manual Reset

A real-world industrial safety system built using **Arduino** and **Tinkercad** to monitor temperature, prevent motor overheating, and enforce **manual reset after critical shutdown** — inspired by standards in companies like **Bosch**, **Siemens**, and **Tata**.

---

## 🎬 Project Demo (GIF)

![Project Demo](smart_overheat_demo.gif)

> 🔥 Demonstrates automatic fan + buzzer trigger, LCD update, and reset logic when temperature exceeds 60°C.

---

## 📸 Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

> Built using Tinkercad | Includes LM35, Relay, Fan (DC), LCD, Buzzer, LEDs, Reset Button

---

## 🔗 Live Simulation

👉 [Open in Tinkercad](https://www.tinkercad.com/things/cbpRQqKQLIC)

> You can test the project logic live — simulate overheat and reset cycle.

---

## 🎯 Project Purpose

This project is designed for **industrial motor safety**. Overheating motors can cause breakdowns, fires, or downtime. This system:

- 📡 Monitors real-time temperature with LM35 sensor  
- 🚨 Shuts down motor + triggers fan and buzzer at 60°C  
- 📺 Displays status and temperature on LCD  
- 🟡 Waits for cooling period  
- 🔘 Requires **manual reset** by an operator — like real safety-critical systems

---

## 🔧 Features

- ✅ Temperature monitoring (LM35)
- ✅ LCD display (16x2)
- ✅ Fan + buzzer control
- ✅ Green / Red / Yellow LED indication
- ✅ Manual reset using push button
- ✅ Clean circuit and code

---

## 📦 Components Used

| Component             | Quantity |
|----------------------|----------|
| Arduino UNO          | 1        |
| LM35 Temp Sensor     | 1        |
| DC Motor (Fan)       | 1        |
| 16x2 LCD Display     | 1        |
| Buzzer               | 1        |
| Push Button          | 1        |
| Red, Green, Yellow LEDs | 3     |
| Potentiometer (for LCD) | 1     |
| Relay (SPDT)         | 1        |
| Breadboard & Wires   | As needed |

📁 [BOM File](bom.csv)

---

## ⚙️ How It Works

1. System monitors temperature in real-time
2. At **> 60°C**:
   - Fan ON
   - Buzzer & Red LED ON
   - Motor OFF
   - LCD shows **Overheat!**
3. After **cool-down period**
4. Manual reset button must be pressed to restart system

---

## 🧠 System Flow

[LM35] → [Arduino UNO] → [LCD Display]
→ [Relay + Motor Control]
→ [LEDs: Green, Yellow, Red]
→ [Buzzer]
→ [Manual Reset Button]

yaml
Copy
Edit

🟢 Normal | 🔴 Overheat | 🟡 Cooling | 🔘 Manual Reset

---

## 💻 Source Code

📄 [`smart_industrial_overheat_protection_system1.ino`](smart_industrial_overheat_protection_system1.ino)

Includes full logic with state handling, temperature thresholds, delay simulation, and LCD interface.

---

## 📄 Documentation

📘 Full design explanation, working principle, and circuit:
[`Smart-Industrial-Overheat-Protection-System.pdf`](Smart-Industrial-Overheat-Protection-System.pdf)

---

## 🏭 Real-World Application

✅ Industrial motor panels  
✅ CNC or gearbox protection  
✅ Smart factory HVAC  
✅ Preventive maintenance in automation setups

---

## 🧰 Tools Used

- Arduino IDE  
- Tinkercad Circuits  
- C Programming  
- Embedded systems logic  
- Sensor integration (LM35)  
- Manual control safety reset

---

## 👨‍💻 Author

**Parth Pawar**  
🔗 [GitHub](https://github.com/parth-558)  
🔗 [LinkedIn](https://www.linkedin.com/in/parth-pawar-b82628248/)

---

## 🏷️ Tags
> arduino, lm35, motor-protection, embedded-system, industrial, safety, iot, tinkercad, temperature, lcd

> ⭐ Project Level: Intermediate  
> ⚙️ Difficulty: 4/5  
> 💼 Built for Industry Safety Use-Cases
