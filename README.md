# dTBI2_arduino

This code provides fixes the original code found in Saikumar et al. Nat Protoc. 2021 Jan;16(1):263-282 Our code updates eliminate the following issues: triggering of the Arduino without button depression, triggering of multiple pulses with a single button depression, and relay chatter during Arduino boot see Figure S1. Furthermore, the updated code takes into account hardware changes made in the second-generation dTBI2 device from the Barber Lab. Code should be uploaded into the dTBI2 device using the Arduino IDE.

Most aspects of the code should not require user modification. However, to change the the injury duration (pause + crush time), you can alter code line 24, which reads delay(250). Adjusting this value changes pulse signal duration which is defined here in milliseconds.
