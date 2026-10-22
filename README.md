# C Programming 

A collection of foundational **C programming scripts** focusing on essential logic building, control structures, arithmetic validation, loops, and conditional formatting. These exercises target core algorithmic thinking, making them a great reference repository for interview and basic logic development preparation.

## 📑 Repository Structure

Each program targets a distinct algorithmic requirement:

| Program File Name | Core Logic Focus | Brief Description |
| :--- | :--- | :--- |
| **`01_division.c`** | Error Handling & Division | Safeguards division with a check against divide-by-zero errors. |
| **`02_display_string.c`** | Static Iteration Loops | Implements a primitive standard `for` loop to print text sequentially 5 times. |
| **`03_reverse_countdown.c`** | Reverse Loop Countdown | Utilizes a conditional `while` countdown statement from 5 to 1. |
| **`04_check_divisibility.c`** | Modulo Divisibility Checked | Defines a macro mapping structural custom `BOOL` to check modulo base-5. |
| **`05_print_asterisks_fixed.c`** | Variable Dynamic Iteration | Loops dynamically to display a horizontal series of stars derived from initializations. |
| **`06_print_asterisks_while.c`** | `while` Driven Star Printing | Implements standard dynamic bounding loops using user-driven tracking parameters. |
| **`07_print_asterisks_for.c`** | `for` Driven Star Printing | Re-engineers dynamic iteration to systematically clean up counter initialization limits. |
| **`08_conditional_check.c`** | Integer Bound Conditionals | Validates input conditions inside branching threshold filters. |
| **`09_dynamic_frequency.c`** | Nested Data Loops & Absolute Values | normalizes negative frequencies and repeats a targeted scalar data array dynamically. |
| **`10_check_even_odd.c`** | Boolean Bit & Modulo Operations | Determines integer states across standardized conditional functional blocks. |

---

## 💻 Detailed Program Overview

### 1. Basic Division with Error Handling (`01_division.c`)
* **Logic Summary:** Evaluates standard arithmetic fractions while containing explicit conditional filters to ensure divisor values do not equal zero [cite: 1].
* **Input Parameters:** Predetermined static assignment tracking fields (`15`, `5`) [cite: 1].
* **Exceptional Outputs:** Returns `-1` if error limits flag division operations as mathematically undefined [cite: 1].

### 2. Static Iteration Control (`02_display_string.c`)
* **Logic Summary:** Employs an exact structural loop tracking index threshold boundaries (`1` through `5`) to reproduce structural outputs [cite: 2].
* **Key Printout:** Renders `"Marvellous"` consecutively onto system console streams [cite: 2].

### 3. Reverse Bounded Countdowns (`03_reverse_countdown.c`)
* **Logic Summary:** Performs programmatic index reduction decrement tracking starting systematically at maximum boundaries until termination rules evaluate to true [cite: 3].
* **Key Range Output:** Continuously scales values down to render indices sequence from `5` to `1` [cite: 3].

### 4. Custom Boolean Base-5 Checkers (`04_check_divisibility.c`)
* **Logic Summary:** Tracks standard runtime inputs via standard modulo definitions matching exact remainder expectations (`% 5 == 0`) [cite: 4].
* **Architectural Definition:** Constructs functional logic bindings using primitive macro expressions (`#define TRUE 1`, `#define FALSE 0`) to manage evaluation state [cite: 4].

### 5. Static Bound Star Matrices (`05_print_asterisks_fixed.c`)
* **Logic Summary:** Evaluates local context properties, passing them directly to standard function signatures to govern total runtime iteration counts [cite: 5].
* **Default Output Constraints:** Sets default parameters to generate 10 horizontal character sequences [cite: 5].

### 6. Dynamic Standard `while` Matrices (`06_print_asterisks_while.c`)
* **Logic Summary:** Leverages scalable user input streams via address bindings (`&iValue`) to feed index condition loops [cite: 6].
* **Loop Strategy:** Uses a sequential zero-indexed `while` loop format to produce formatted star configurations on demand [cite: 6].

### 7. Explicit `for` Boundary Sequences (`07_print_asterisks_for.c`)
* **Logic Summary:** Evaluates equivalent formatting layouts mapped inside clean standard index configurations (`for(iCnt=1;iCnt<=iNo;iCnt++)`) [cite: 7].

### 8. Scaled Conditional Filter Mapping (`08_conditional_check.c`)
* **Logic Summary:** Routes run-time choices down specific paths using threshold parameters [cite: 8].
* **String Selection Branching:** Outputs `"Hello"` if value fields sit below index 10; otherwise invokes backup streams printing `"Demo"` [cite: 8].

### 9. Normalized Matrix Frequency Injections (`09_dynamic_frequency.c`)
* **Logic Summary:** Validates both numeric targets alongside frequency matrices simultaneously [cite: 9]. 
* **Negative Correction Safeguards:** Checks frequency inputs and utilizes mathematical sign inversions (`iFrequency = -iFrequency`) to preserve execution bounds against negative infinite loops [cite: 9].

### 10. Modular Even/Odd Structural Parsers (`10_check_even_odd.c`)
* **Logic Summary:** Directs logical parameters through standard base-2 binary parity verification blocks (`% 2 == 0`) [cite: 10].
* **System Integration:** Maps outcomes cleanly to macro constants, returning final execution results back to main process handlers [cite: 10].

---

## 🚀 Getting Started & Compiling

Follow these steps to compile and run any code file locally on your system using a standard C compiler (such as `gcc`).

### Prerequisites
Make sure you have a working C compiler installed:
* **Linux/Ubuntu:** `sudo apt install build-essential`
* **macOS:** `xcode-select --install`
* **Windows:** Install [MinGW](https://www.mingw-w64.org/) or use a terminal like Git Bash / WSL.

### Compilation Command
Open your terminal inside the repository path and execute:
```bash
gcc program_name.c -o Myexe
```
*(Replace `program_name.c` with any specific filename, e.g., `04_check_divisibility.c`)*

### Execution Command
Run the compiled binary executable target file directly from your terminal:
```bash
# On Linux and macOS
./program_name

# On Windows Command Prompt / PowerShell
program_name.exe
```

---

## 🛠️ Code Conventions Utilized
* **Hungarian Notation Prefixes:** Variables use typed structural identifier indicators (e.g., `iValue` for integers [cite: 4, 6], `bRet` for Booleans [cite: 4, 10], `iCnt` for calculation loop trackers [cite: 6, 7]).
* **Standard Return Code Exit Architectures:** Utilizes structural definitions (`return 0` [cite: 1, 2, 3, 4, 5] and `EXIT_SUCCESS` [cite: 6, 7, 8, 9, 10]) to confirm successful program completion.
