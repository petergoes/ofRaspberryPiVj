ofRaspberryPiVj
===============

openFrameworks Application to VJ on the Raspberry Pi

Description
-----------
This is (will become) an application to VJ on the Raspberry Pi, based on coded visuals. Right now it is in it's very early stage of development.

The openFrameworks version this app is based upon is `0.8.0`

Controls
--------
ofRaspberryPiVj is being developed with the Thrustmaster Dual Analog 3 USB game controller in mind. Planned button layout:
<pre>
    ______          ______
    \____/ SL2      \____/ SR2

     ____            ____
     \__/  SL1       \__/  SR1

      DU              B1
      /\              ()
 DL<      >DR    B4()    ()B2
      \/              ()
      DD              B3
           _     _
        AL(_)   (_)AR

     ________    ________
    |________|  |________|
        TL          TR

---------------------------------------------------
| DU - Direction Up     |  SL1 - Shoulder Left  1 |
| DR - Direction Right  |  SL2 - Shoulder Left  2 |
| DD - Direction Down   |  SR1 - Shoulder Right 1 |
| DL - Direction Left   |  SR2 - Shoulder Right 2 |
|-----------------------|-------------------------|
| B1 - Button 1         |  AL  - Analog Left      |
| B2 - Button 2         |  AR  - Analog Right     |
| B3 - Button 3         |  TL  - Trigger Left     |
| B4 - Button 4         |  TR  - Trigger Right    |
---------------------------------------------------
</pre>

Since the game controller is not yet implemented, an keyboard implementation has been made. The keyboard implementation will stay even if the gamme controller has been implemented. The goal is to (eventually) support multiple input devices.