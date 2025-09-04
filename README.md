# ⭐ C Pattern Printing Program – Middle Cross

This C program prompts the user for a number **n** and then prints a **star pattern** based on the given input size.  
The pattern forms a **cross-shaped design** inside an `n x n` grid.

---

## 📖 Overview

- The program generates a **square grid** of size `n x n`.  
- The **middle row** is completely filled with stars (`*`).  
- The **middle column** contains stars in every row (except the middle row, where stars are already printed).  

This creates a **cross-like pattern** in the console.

---

## 🎯 Purpose

The purpose of this program is to **demonstrate nested loops** in C and how they can be used to generate specific console-based patterns.

Key highlights of the pattern:

- A **horizontal line** of stars in the middle row.  
- A **vertical line** of stars in the middle column.  
- All other positions are filled with spaces.  

---

## ⚙️ Functionality

### 1. **User Input**
- The program asks the user to input an integer `n`.  
- This integer represents the **size of the square grid**.

### 2. **Pattern Generation**
- A nested loop runs through each row and column.  
- Stars are placed at:
  - Every position in the **middle row**.  
  - The **middle column** of every row. 

### 📝 Notes

The program assumes n is a positive integer.

Works best for odd values of n, since the middle row and column are clearly defined.

For even values of n, the program will still run, but the "middle" will be ambiguous (two rows/columns in the center)

### 👨‍💻 Author

Created with ❤️ in C by Mayank Kumar Shah
