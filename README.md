💡 **Traffic Light Control System using 8051 Microcontroller**  
An embedded systems mini project developed using Embedded C in Keil uVision and simulated in Proteus Design Suite.

🚀 **Project Overview**  
This project demonstrates a basic traffic light control system using the 8051 microcontroller. Three LEDs (Red, Yellow, Green) are used to simulate real-world traffic signals with timed delays.

The project was created to understand:

-> 8051 port operations  
-> LED interfacing  
-> Time delay generation using loops  
-> Embedded C programming logic  
-> Real-world traffic signal simulation  

🛠️ **Tools and Technologies**  
-> Embedded C  
-> Keil uVision  
-> Proteus Design Suite  
-> AT89C51 / 8051 Microcontroller  

📂 **Repository Contents**  
-> traffic.c – Source code  
-> tech.hex – Compiled output file  
-> Traffic.pdsprj – Proteus simulation project  

⚙️ **Working Principle**  
Three LEDs are connected to Port 1 pins of the 8051 microcontroller:

-> RED (P1.0) → Stop signal (1 sec ON)  
-> YELLOW (P1.1) → Wait signal (0.5 sec ON)  
-> GREEN (P1.2) → Go signal (1 sec ON)  

The microcontroller cycles through these states continuously to simulate a real traffic light system.

🎯 **Learning Outcomes**  
-> Understanding of microcontroller I/O ports  
-> LED control using Embedded C  
-> Timing control using delay loops  
-> Real-world system simulation using Proteus  
-> Basic embedded system design concepts  
