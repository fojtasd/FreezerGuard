# FreezerGuard
A device that ensures that the freezer is always properly closed.

Used parts: Arduino nano, buzzer, reed switch, prototyping board, cables, EFEST IRM 18650 battery, 

# Schematics

![1682764149451](https://user-images.githubusercontent.com/54074456/235298862-23b206b2-58fa-4594-8f9a-ad2c546d3400.jpg)

Arduino nano was used. For my purposes I have created 3 circuits. 
1) Circuit with reed switch for detection absence of a magnetic object.
2) Circuit with connected buzzer for making noice when magnetic object is not present.
3) Circuit for connection to ARDUINO to upload your code.


1. This simple circuit allows the device to detect changes in the surrounding magnetic field, and trigger a digital signal accordingly. When a magnet is brought close to the reed switch, it causes the contacts to close, completing the circuit and sending a signal to the digital pin. In code is mentioned as SENSOR_PIN.

2. In addition to the reed switch, this electrotechnical device also features a buzzer that is connected to another digital pin and is controlled by an Arduino programmer. When the device detects a change in the magnetic field using the reed switch, it sends a signal to the buzzer which plays implemented melody.

There is also connected J5019 charger module, which is PCB board and which provides charging control and protection for battery. Battery 18650 is connected here.

![1682764149447](https://user-images.githubusercontent.com/54074456/235300466-ec190311-f4a8-4495-af94-9ae1cf9c0a21.jpg)
![1682764149433](https://user-images.githubusercontent.com/54074456/235300536-9408c71b-2f94-4414-ab65-c9944e0839b7.jpg)
![1682764149436](https://user-images.githubusercontent.com/54074456/235300607-8183496e-69de-454d-8d65-d406c9c8eb3a.jpg)

The electronic device is enclosed in a plastic box that was created using 3D printing technology.

![1682764149425](https://user-images.githubusercontent.com/54074456/235300630-ff1c4f45-3f5e-4e0a-accc-90f923cb16f5.jpg)

# Result
https://user-images.githubusercontent.com/54074456/235301052-e3a51b07-1ab0-4533-a0c2-43816d364ee2.mp4




