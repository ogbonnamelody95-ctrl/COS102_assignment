# COS 102 - Lab Assignment

- `question1.c`: Program to check if a triangle is right-angled given two angles.
- `question2.c`: Program to check if a given integer is a palindrome.
- `Makefile`: Build script to compile both programs easily.
- `README.md`: Project documentation.

## How to Compile & Run in VS Code

### Option 1: Direct Terminal Compilation
Open terminal in VS Code (`Ctrl + ` ` or `Cmd + ` `) and run:

```bash
# Question 1
gcc question1.c -o question1
./question1

# Question 2
gcc question2.c -o question2
./question2
```

### Option 2: Using Makefile
```bash
make all      # Compiles both files
./question1   # Run Question 1
./question2   # Run Question 2
```
