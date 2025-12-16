# Perceptron-Pass-Fail-Prediction

 Perceptron Pass/Fail Prediction

This project implements a **Perceptron Learning Algorithm** to predict whether a student will **Pass or Fail** based on:

- Study Hours
- Attendance Percentage

This project is part of **Module 2 – Artificial Intelligence & Machine Learning** training.

---

## 📌 Problem Statement

Predict whether a student will pass or fail based on the following conditions:

- Minimum **8 hours of study**
- Minimum **80% attendance**

The perceptron is trained using a sample dataset and then used to predict results for new inputs.

---

## 📊 Dataset Used

| Study Hours | Attendance (%) | Pass/Fail |
|------------|---------------|-----------|
| 2 | 50 | 0 |
| 5 | 60 | 0 |
| 8 | 85 | 1 |
| 6 | 80 | 1 |
| 1 | 30 | 0 |
| 9 | 90 | 1 |

- **1 → Pass**
- **0 → Fail**

---

## 🧠 Algorithm Used

- Perceptron Learning Algorithm
- Binary Classification
- Step (Threshold) Activation Function

---

## ⚙️ Implementation Details

- Programming Language: **C**
- Compiler: **GCC (MinGW)**
- Platform: **Windows**
- Features are normalized for better learning
- Weights and bias are updated after each epoch
- Final predictions are displayed for training data
- User can enter new test data for prediction

---

## ▶️ How to Run the Program

### 1️⃣ Compile the Code
```bash
gcc perceptron.c -o perceptron.exe
2️⃣ Run the Program
bash
Copy code
perceptron.exe

---

🧪 Sample Output

Displays weights and bias after each epoch

Shows final predictions on training data

Accepts new user input:

Study hours

Attendance percentage

Outputs PASS (1) or FAIL (0)

---

✅ Conclusion

This project demonstrates how a simple perceptron model can be used to solve a real-world classification problem. It helps in understanding the fundamentals of machine learning such as weights, bias, training epochs, and prediction.

