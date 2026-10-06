# AI-Based ESP32-CAM Smart Object Detection & Alert System

## Project Description

This project demonstrates an AI-based embedded object detection and alert system using ESP32-CAM.

The AI model provides an object class and confidence score. The ESP32-CAM uses this AI result to decide whether an alert should be generated.

## Working

Camera / AI Model
↓
Object Classification
↓
Confidence Score
↓
Confidence ≥ 0.80?
↓
YES → LED + Buzzer ON
NO → LED + Buzzer OFF

## Hardware

- ESP32-CAM
- LED
- Buzzer
- USB-to-TTL programmer
- Power supply

## Software

- Arduino IDE
- ESP32 board package
- AI/TinyML or Edge Impulse model

## AI Component

The AI model performs object classification and provides a confidence score.

A confidence threshold of 0.80 is used before activating the alert. This helps reduce false alerts caused by low-confidence predictions.

## QA Process

GitHub Issues were used to identify and track project problems.

The QA workflow was:

1. Identify the problem
2. Record the issue
3. Analyze the root cause
4. Discuss the corrective action
5. Implement the correction
6. Test the result
7. Close the issue

## QA Issues

1. False alert at low confidence — Resolved
2. Alert remains ON after target disappears — Resolved
3. AI result is difficult to trace — Resolved
4. Changes are difficult to trace — Resolved

## Project Planning

Project tasks and progress are documented in `PROJECT_PLANNING.md`.

## Learning Outcome

- Learned to use GitHub for embedded project management.
- Learned to document QA issues using GitHub Issues.
- Learned to perform root-cause analysis.
- Learned to use comments for collaboration.
- Learned to use commits for traceability.
- Understood how AI inference can be connected to embedded hardware control.
