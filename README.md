# Mercury Smart Shelf 🗃️

An Arduino controller application for Smart Shelves

### 🔧 Installation 

We are using [CLion](https://www.jetbrains.com/clion/) with [PlatformIO](https://platformio.org/) for dev work. 
If you want to use another IDE, make sure that it is compatible with PlatformIO to be able to successfully developed 
for the Arduino device. Otherwise, you would have to build your own CMake files. 

It is important to notice that you will need an Arduino One alike device as well as an HX711
amplifier and a load cell to be able to use this package.

### 📋 Setup diagrams 

The following diagram shows how the Arduino is connected with the HX711 and the load cell: 

<img src="https://github.com/Mercury-Smartstores/Mercury-Smart-Shelf/blob/main/readme-assets/arduino_loadcell_setup.png?raw=true" alt="Arduino + Load cells setup diagram" width="250" height="370" /> 

The main idea for this setup is to recreate a Smart Shelf to be used as a [Mercury](https://github.com/Mercury-Smartstores)
Shelves Module:

<img src="https://github.com/Mercury-Smartstores/Mercury-Smart-Shelf/blob/main/readme-assets/smart_shelves_diagram?raw=true" alt="Mercury Shelves Module" /> 

### 📦 Deploying

To deploy this program you only need to connect your Arduino One alike device to your computer, setting up
the devices as it was depicted in the previous diagram and upload the code to the Arduino device to be able to track
measurements in your computer of the Shelf.

Make sure that the first time you deploy the program you update the load cell dividers to calibrate
the system. 

### 📄 License
This repository is licensed under the [MIT License](LICENSE).

### ♦️ About Mercury

This repository contains the code for a package from the Mercury infrastructure.
If you want to know more about Mercury check out the [Mercury Organization](https://github.com/Mercury-Smartstores).