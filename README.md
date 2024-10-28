# Internet of Things - Nordic Semiconductors


1. Basics of embedded systems software (overview)
2. Short range wireless protocols
3. Nordic Semicondutor software and tools ecosystem


## Lab 1
### Intro to IoT 
Statistic etc, what is IoT?

### Embedded Systems:
System konkretnego zastosowania w przeciwienstwie do komputera.

### Anatomia 
peryferia, miktrokontroller, przetwornik cyfrowo analogowy, interfejsy IO, zasilanie 
- System on Chip (SoC) 
- RAM, Flash memory
- PMIC (power management integrated cirtcut) 
- Network, radio Co-processor
- External Digital/Actuator and analog sensor
- UART, USB
- Buttons/Leds, Actuators, Servo
- External memory
- Converters
- ...

### System on Chip diagram

### Development on an embedded system

### Used circuit
nRF52840 SoC

### Useful materials
Making Embedded Systems O'Reilly

### Links:
- https://www.segger.com/downloads/jlink/
- https://docs.nordicsemi.com/bundle/nrf-connect-vscode/page/index.html
- https://www.nordicsemi.com/Products/Development-tools/nRF-Command-Line-Tools/Download?lang=en#infotabs
- https://www.nordicsemi.com/Products/Development-hardware/nRF52833-DK/Download?lang=en#infotabs

## Lab 2

### Anatomy of an embedded application
Read Input => Process => Send data  => Sleep => Receive data => Process => Write output => Sleep
Read Input and Write output <-> Device drivers
Send data and Receive data <-> Network stacks
Sleep and Process <-> Application logic
1. Super Loop Architecture - App logic is executed sequentially, blocking in any part will block whole, execution context must often go to main to ensure that all subsystems can execute
2. Interrupt - https://en.wikipedia.org/wiki/Interrupt
3. To solve those issues we need to implement Multithreaded Programming

### Why to use RTOS
- MUST BE PREDICTABLE - "All operations must verifiably complete within given time and resource constraints or else fail safe.":
https://en.wikipedia.org/wiki/Real-time_operating_system
Populart RTOS: FreeRTOS, ZephyrOS

### Key features of Zephyr RTOS
- Kernel Services
- Threads: execution context. Each thread has: stack, entry point funtion, priority and {...}. Thread creation can be in compile time (boosts system start time, ) but also at run time ().
- Diagram of Thread life: New => Ready = (scheduler) > Suspended / Waiting  => Running => Terminated
- Threads DO have priorities. Cooperative time slicing diagram -> Preemtive Time Slicing
- TO READ: https://en.wikipedia.org/wiki/Priority_inversion
- Synchronization primitives: semaphores, mutex (has it's own thread)
Sekcje atomowe, locky, zmienne atomowe, semafory, mutex
- Data Passing 
- Device Tree and Device Driver Model
- 

### Links:
- https://www.nordicsemi.com/Products/Development-hardware/nRF52833-DK/Download?lang=en#infotabs
- https://eduinf.waw.pl/inf/prg/009_kurs_avr_old/0027.php
- https://eduinf.waw.pl/inf/prg/010_uc/0000.php

## Lab 3

### IoT Security Primer - Security aspcects in IoT
- 3 filar system Threat Model: confidelity, authentication, integrity
- System it is as strong as it's weakest point.

Security threats - overview:
1. Software attakcs (application, OS or protocol vulnerabilities attacks): DDoS, buffer overlow
2. Non-invasive hardware attacks: physical measures corelated with 
3. Invasive hardware attakcs: 

### Threats to embedded systesms
- Replay attack
- Challenge reponse
- Thrash-can attack

### Quick recap on symmetric, asymetric cryptography, and PKI
- Hash functions
- Message authenticetion code
- Asymetric, Symetric encryption, Diffie Hellman Key Echange
- Digital Signature, Public Key Infrastructure
- Cryptographic Certifications

### Bootloaders and DFU
- What is bootloader and why wdo we need one?
Bootloader is an application that runs before the main application.
Two main functionalities: Replacing the application that is running in the device, ensudre validity and authencity of the application
Its essential.

### Firmware validation and authentication
BitFlip!!!
A bootloader typicalu validates checksum of the application image

### Dual bank (slot) DFU

### Single bank (slot) DFU

### Multi-stage bootloader
First Stage

Second Stage

### Transport methods (to deliver app to device)
- Simple Management Protocol (MPC) - UART, USB (CDC-ACM), BLE
- Bluetooth Mesh
- Zigbee
- Matter - OTA DFU

Firwaware over-the-air (FOTA / OTA)

### Mcuboot and NSIB
- Mcuboot: 
- Nordi Secure Immutable Bootloader (NSIB): 

### ARM Platform Security Architecture

### Links:

## Lab 4

## Lab 5

### Links:

