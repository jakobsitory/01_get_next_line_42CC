# Get Next Line
The **Get Next Line** project is a challenge within the 42 School curriculum aimed at deepening students' understanding of file I/O, dynamic memory allocation, and efficient handling of buffer management in C. The goal is to create a function that reads a line from a file descriptor, returning it one line at a time, regardless of how the lines are separated.

## **Task**

The task was to implement the `get_next_line` function, which reads and returns the next line from a file descriptor. The function needs to handle edge cases such as:

- Reading from files, standard input, or other file descriptors.
- Managing dynamic memory allocation to accommodate lines of varying lengths.
- Handling different buffer sizes and ensuring that all scenarios are managed efficiently without memory leaks.

**Key objectives included:**
- Designing a function that returns a line of text terminated by a newline character (`\n`), the end of the file (EOF), or an error.
- Ensuring the function handles multiple file descriptors simultaneously, maintaining the state of each descriptor separately.
- Implementing efficient memory management to avoid memory leaks and ensure that the function performs well even with large files or varying buffer sizes.

## **Key Achievements**
- Efficient Multi-Descriptor Management: Successfully implemented the get_next_line function to handle multiple file descriptors concurrently, ensuring accurate and efficient state management for each descriptor.
- Optimized Memory and Buffer Management: Developed a dynamic memory allocation strategy and efficient buffer handling, ensuring performance and reliability across different input scenarios, including large files and varying buffer sizes.
- Robust and Modular Code: Created a modular and reusable codebase with comprehensive error handling, making the function stable, maintainable, and adaptable for future projects.

## Installation

To install the Project, follow these steps:
1. Clone the repository: **`git clone git@github.com:jakobsitory/01_get_next_line_42CC.git`**
2. Navigate to the project directory: **`01_get_next_line_42CC`**
4. Build the project: **`make`**

## **Usage**
1. Install francinette to test the function: **https://github.com/xicodomingues/francinette"**
2. Open project directory and run **`francinette'** to run extensive tests
