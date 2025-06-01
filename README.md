# ME-507 Drone Project

## Overview
An autonomous drone built for the ME-507 embedded systems course. This project demonstrates sensor integration, closed-loop motor control, and real-time system design using an STM32 microcontroller.

## Features
- **Custom PCB with STM32F411**
- **Closed-loop motor control using PID**
- **Orientation sensing via BNO055 IMU**
- **Wireless control via Bluetooth (HC-05)**


## Directory Structure

| Folder       | Purpose                                      |
|--------------|----------------------------------------------|
| `Core/`      | Source code and hardware abstraction         |
| `test/`      | Unit tests                                   |
| `mechanical/`| CAD, STL, and images of physical components  |
| `schematics/`| Circuit and PCB design                       |
| `docs/`      | Reports, BOM, system architecture            |

## Build Instructions
- Open in STM32CubeIDE or build using `make`
- Connect BNO055 via I2C1
- Flash using ST-Link

## Authors
- Dane Carroll and Aaron Lubinsky
- Spring 2025
