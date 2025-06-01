# ME-507 Drone Project

## Overview
An autonomous drone built for the ME-507 mechanical systems design course. This project demonstrates sensor integration and closed-loop motor control using an STM32 microcontroller on a custom PCB.

## Features
- **Custom PCB with STM32F411**
- **Closed-loop motor control using PID**
- **Orientation sensing via BNO055 IMU**
- **Wireless control via Bluetooth (HC-05)**

## Directory Structure

| Folder       | Purpose                                      |
|--------------|----------------------------------------------|
| `Core/`      | Source code                                  |
| `Mechanical/`| CAD and images of physical components        |
| `Electrical/`| Circuit and PCB design                       |
| `docs/`      | BOM and Wiring Diagrams                      |

## Build Instructions
- Recreate and assemble mechanical components using CAD files in `Mechanical/`
- Follow wiring diagram in `Electrical/`
- Open in STM32CubeIDE
- Connect BNO055 via I2C1
- Connect HC-05 via USART2
- Flash using ST-Link

## Authors
- Dane Carroll & Aaron Lubinsky
- Spring 2025, Cal Poly SLO
