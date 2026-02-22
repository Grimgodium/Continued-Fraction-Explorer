# Continued-Fraction-Explorer
# Investigating Irrationality through Continued Fractions

## Project Overview
This project explores the computational nature of irrational numbers, specifically focusing on the **Golden Ratio (phi)** and **pi**. Utilizing a high-performance matrix exponentiation algorithm ( O(log n) ), the program generates Fibonacci ratios to approximate phi and expands them into continued fractions to observe their convergence patterns.

## Mathematical Context
The Golden Ratio $\phi$ is theoretically the "most irrational" number because its continued fraction consists entirely of ones. This leads to the slowest possible convergence among irrational numbers. This project "stress-tests" this property against other constants like pi.

## Technical Implementation
- **Algorithm**: Matrix Exponentiation for rapid Fibonacci term generation.
- **Precision**: Utilizes `long double` for extended floating-point precision.
- **Language**: C++ (Standard 17 or higher).

## How to Run
```bash
g++ -O3 main.cpp -o explorer
./explorer
```
