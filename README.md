# Starchase 🌟

A **Pacman-inspired arcade game** built in **C++** for the terminal.
The game is designed using **object-oriented programming principles** and features player movement, obstacles, score tracking, and persistent high-score storage.

Starchase offers a simple but engaging command-line gaming experience where the player navigates through obstacles, collects points, and aims for the highest score.

---

## 🎮 Features

* Pacman-inspired terminal gameplay
* Smooth keyboard-based player movement
* Obstacles such as asteroids and boulders
* Real-time score tracking
* High-score saving using file handling
* Modular OOP-based code structure
* Build automation using Makefile

---

## 🛠 Technologies Used

* **C++**
* **Object-Oriented Programming**
* **File Handling**
* **Makefile**
* **Ubuntu / WSL**
* **VS Code**

---

## 📁 Project Structure

```text
Starchase/
├── main.cpp
├── game.cpp
├── game.h
├── star.cpp
├── star.h
├── asteroid.cpp
├── asteroid.h
├── boulder.cpp
├── boulder.h
├── highscore.cpp
├── highscore.h
├── termfuncs.cpp
├── termfuncs.h
├── Makefile
├── highscore.dat
├── README.md
```

---

## 🚀 How to Run

### Run in VS Code (WSL Environment)

1. Open **VS Code**
2. Open the project folder
3. Ensure VS Code is running in **WSL mode**

   * Bottom-left corner should show **WSL: Ubuntu**
4. Open terminal
   **Terminal → New Terminal**
5. Run:

```bash
make
./starchase
```

To remove generated files:

```bash
make clean
```

---

### Run in Ubuntu / WSL Terminal

```bash
cd /mnt/c/Users/HP/Downloads/Starchase
make
./starchase
```

To clean:

```bash
make clean
```

---

## 📥 Clone Repository

```bash
git clone https://github.com/mahimasree-07/Starchase.git
cd Starchase
make
./starchase
```

---

## 💡 Concepts Demonstrated

* Classes and Objects
* Header / source file separation
* Modular programming
* File I/O
* Terminal-based UI logic
* Build system using Makefile

---

## 🔮 Future Improvements

* Multiple levels
* Enemy AI movement
* Better terminal graphics
* Power-ups and bonus points
* Pause / restart functionality
* Difficulty modes

---

