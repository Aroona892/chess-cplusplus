# ♟️ Chess Game (C++ - PF Project)

This is a console-based Chess Game developed using **C++** for the Programming Fundamentals course. It supports all major rules of chess including valid piece movements, turn-based gameplay, and board state updates.

---

## 🧠 Key Features

- ✅ Two-player chess game (played via terminal)
- ♟️ Implements all standard pieces: King, Queen, Rook, Knight, Bishop, Pawn
- 🔁 Turn-based logic with board display after each move
- 🚫 Move validation to restrict illegal steps
- ❌ Detects check and checkmate conditions
- 🧱 Uses OOP principles:
  - Inheritance (base `Piece` class, derived classes like `Rook`, `Bishop`)
  - Polymorphism for move logic
  - Encapsulation for game state handling

---

## 🛠 Language & Tools

- C++
- Console I/O
- Object-Oriented Design

---

## 📁 Files

- `main.cpp` — Game loop and interface
- `board.cpp / board.h` — Board representation
- `pieces/` — Individual classes for each chess piece
- `utils.cpp` — Validation functions

---

## 🚀 How to Run

### Compile
```bash
g++ main.cpp board.cpp pieces/*.cpp -o chess
