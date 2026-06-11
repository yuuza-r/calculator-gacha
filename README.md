# 🎲 Trust Me Bro Calculator

A calculator that *usually* gives the correct answer... but not always.

This project was created just for fun and demonstrates how a seemingly normal calculator can occasionally decide to be creative with its results.

## ✨ Features

* Supports basic arithmetic operations:

  * Addition (`+`)
  * Subtraction (`-`)
  * Multiplication (`*`)
  * Division (`/`)
* Handles division by zero.
* Has a **50% chance** of giving the correct answer.
* Has a **50% chance** of adding a random number (1–10) to the correct result and pretending everything is fine.

## 🤔 How It Works

After performing the requested calculation:

1. The program generates a random number.
2. If the number is `0`, the calculator returns the correct result.
3. If the number is `1`, it secretly adds a random value between `1` and `10` to the answer.

In other words:

> Sometimes it's a calculator.
>
> Sometimes it's a storyteller.

## 📷 Example

### Correct Mode

Input:

```text
10 + 5
```

Output:

```text
15
```

### Chaos Mode

Input:

```text
10 + 5
```

Output:

```text
22
```

The calculator refuses to explain itself.

## ⚠️ Disclaimer

This software is **not suitable** for:

* Mathematics exams
* Engineering projects
* Financial calculations
* Space missions
* Any situation where accuracy matters

This software is suitable for:

* Making your friends confused
* Learning basic C++
* Creating trust issues with calculators

## 🚀 Compilation

Using g++:

```bash
g++ main.cpp -o calculator
./calculator
```

## 📜 License

Feel free to use, modify, and share this project.

If the calculator gives the wrong answer, that's a feature, not a bug.
