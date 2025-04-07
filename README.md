# PRASEYAN: Smart Device for Hypoglycemia & Respiration Rate Monitoring

PRASEYAN is an intelligent, non-invasive health monitoring system designed to detect hypoglycemia and analyze respiration rate (BrPM) using photoplethysmography (PPG) signals. The system integrates biomedical sensors, embedded hardware, and machine learning to offer a portable solution for real-time health tracking.

🔬 Key Features
Non-Invasive Glucose Monitoring: Uses red LED (700–1300 nm) and a photodiode to estimate blood glucose levels based on optical signal variations. Voltage output below 3V indicates hypoglycemic conditions.

Respiration Rate Estimation (BrPM): PPG signal processing combined with ML models classifies breathing states into resting, light, moderate, and intense activity.

PPG + ECG Integration: Enhanced accuracy in respiration state detection using ECG-derived features.

ML-Based Classification: Real-time prediction of respiration category and glucose condition using trained machine learning models.

IoT Integration: Data can be transmitted to cloud platforms for remote monitoring and visualization.

Data Visualization: Built-in Tableau dashboard for analyzing trends across various user profiles (active vs. sedentary, old vs. young, healthy vs. diseased).

🧠 Technologies Used
Hardware: ESP32-S3, PPG Sensor, Red LED, Op-amp, ECG circuit

Software: Arduino IDE, Python (for ML), TensorFlow Lite

Visualization: Tableau

Data: Biomedical datasets from certified medical sources and in-house experiments

📊 Applications
Early detection of hypoglycemia in diabetic patients

Continuous respiratory health monitoring in fitness and clinical settings

Personalized health trend tracking across age and activity profiles