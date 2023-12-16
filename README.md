# Traffic-sim-8051MC
Traffic Simulation using 8051 Microcontroller



8051 Microcontroller

1) Introduced by Intel in 1971 as a System on Chip (SoC).
      Belongs to the MCS-51 family, which includes 8031 and 8052 variants.

2) Family Variants:
      8031: A scaled-down version of the 8051.
      8052: An enhanced version of the 8051 with additional features.
      Microcontroller Specifications:

3) 8-bit microcontroller with an 8-bit data bus.
      Features a 16-bit address bus.
      Capable of addressing a 64K (2^16) byte code memory space and a separate 64K byte data memory space.
      
4) Special Function Registers (SFR):
      Includes registers like the Accumulator, B register, and various control registers.
      Total of 34 8-bit general-purpose registers.
      
5) Processing Unit:
      The Arithmetic Logic Unit (ALU) performs one 8-bit operation at a time.
   
6) Memory:
      Contains 4 kB of ROM memory to store program code.
      Offers 128 bytes of internal RAM for variables.
      
7) Additional Features:
      Includes 16-bit timers for various timing functions.
      Provides 32 I/O (Input/Output) lines for external connections.
      Incorporates 6 interrupt sources for handling priority-based tasks.


![8051](https://github.com/punith-h-gowda/Traffic-sim-8051MC/assets/113229976/9eee3e61-dc7a-4ce1-8860-5a3a199ff754)

Required components:
1) 8051 Development Board with Programmer AT89S52 Micro Controller
   
   ![8051 controller](https://github.com/punith-h-gowda/Traffic-sim-8051MC/assets/113229976/b411cf58-4e2a-40d3-9f76-59966f6187bc)
   
8051 Board:
• DIP 40 Pin ZIF (Zero Insertion Force) Socket. For Easy Insert/Remove of IC

• ZIF Socket Protect Your Microcontroller From Damage

• 8051 Development Board Support AT89S51, AT89S52, P89V51RD2, etc. 40-Pin DIP Chip.

• USB Programmer can be used for both 8051 & AVR IC (2in1)

• AVR 8051 USB ISP Programmer Supports ATmega 8/328, 16, 32 & many others including 8051 with the same Programmer. See List of Supported IC in Description

• On-board MAX232 Interface Circuit for Easy Communication with a PC & other RS232 serial devices (GPS modules, GSM Modems, etc)

• High-Quality FR-4(1.6 mm) PCB

• On-Board 5 mm Power Plug-in DC Jack

• On-Board 5V regulator (LM7805) circuit.

• On-Board Power ON-OFF switch.

• On-Board power indication RED LED.

• On-Board GREEN USER LED connected to P2.0 through jumper JP3.

• On-Board Input User Switch P3.3 through jumper JP2.

• On-Board Input External Interrupt Switch (INT1) at P3.3 through jumper JP2.

• On-board Quartz Crystal 11.05892 MHz

• Port Extensions for all PORT with Detailed Pin Labeling for Easy Identification of Pin

• External Pull-Up resistors for Port 0

• On-board ISP connector for loading HEX file into Microcontroller like AT89S51/52 etc.

• Vcc bus (5V and 12V) & GND bus provided to Give POWER Supply to the External Peripheral.

• Four 3mm mounting Holes for easy mounting

• On-board Reset button

3) USB Programmer:
   
![USPcontroller](https://github.com/punith-h-gowda/Traffic-sim-8051MC/assets/113229976/89b88d9b-68ab-46ed-8bb8-5edc195da5f6)

AVR 8051 USB ISP Programmer:

First of all USB AVR and AT89Sxx ISP (In-System Programming) Programmer is a low-cost USB based programmer. There is no need to take out the target microcontroller from the development Board. This programmer will work with a wide variety of Atmel AVR and AT89Sxxxx microcontrollers. This is quite compact, but the design is really elegant. The USB interface is achieved by using an atmega8 processor and the rest is done in firmware.

• Allows Read/Write the Microcontroller Flash, EEPROM, Fuse Bit, and Lock Bits

• Support Windows OS (XP to 10), Mac OS X, and Linux

• SCK Option to Support Targets With Low Clock Speed (<1.5 MHz).

• 5 KB/sec Maximum Write Speed.

• The programmer can provide a 5V supply for Target Microcontroller, so No Need for Any External Supply.

• Two Status LEDs | Green LED : Power Supply Indicator | RED LED : For Programmer Busy

• 6 pin Polarized ISP Interface for Easy Connection.


3) Leds and 7 Segment Display
   
A seven-segment LED is a digital display module specialized to display numerical information. Light-emitting diodes (LEDs) arranged in the shape of numbers offer an easily visible display.

![7seg display](https://github.com/punith-h-gowda/Traffic-sim-8051MC/assets/113229976/b42ce669-fc0e-44c7-95d7-d2457182ebd5)

7-segment Display Truth Table

![7seg truth table](https://github.com/punith-h-gowda/Traffic-sim-8051MC/assets/113229976/79772665-2267-40c5-b027-acf858d22869)


Design calculation for LEDS

Port 0.0 ----- Red light 1

Port 0.1 ----- Yellow light 1

Port 0.2 ----- Green light 1

Port 0.3 ----- Red light 1

Port 0.4 ----- Yellow light 1

Port 0.5 ----- Green light 1

Port 2.0 ----- Red light 1

Port 2.1 ----- Yellow light 1

Port 2.2 ----- Green light 1

 LED Truth table
 
 ![led truth table](https://github.com/punith-h-gowda/Traffic-sim-8051MC/assets/113229976/40a686ad-c86a-4888-89e8-289f6b614624)

Traffic Light Control System Using 8051 Microcontroller

The pins of the various input output ports of the microcontroller are connected directly to the given leds. The 8051 is programmed in a manner that the respective Leds glow by setting the required bit using assembly language and a certain amount of delay is provided depending on the user .

Figure shows a simple arrangement and port connection for microcontroller based Traffic Light control.
The 8051 microcontroller is a popular microcontroller used in industries for various applications. Such as Traffic light control, temperature control etc. In this project, 8051

Design:

![best](https://github.com/punith-h-gowda/Traffic-sim-8051MC/assets/113229976/4c5414f1-ec5a-439e-b17d-f00898954be3)




   

