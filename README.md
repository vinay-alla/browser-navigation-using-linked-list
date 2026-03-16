# browser-navigation-using-linked-list
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
A C program that simulates browser back navigation using a stack implemented with a linked list. The project allows users to visit webpages, go back, view current page, and display browsing history through a menu-driven interface.
# Browser Back Navigation System
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
A simple **C program** that simulates how a web browser handles **back navigation** using a **Stack implemented with a Linked List**.

This project demonstrates the practical use of **Data Structures** to manage browsing history.

---

## Features
--->
- Visit a new webpage
- Go back to the previous page
- View the current page
- Display complete browsing history
- Clear browsing history
- Menu-driven user interface
-------->
---

## Data Structure Used

Stack (Implemented using Linked List)

Each webpage visited is pushed onto the stack.

When the user presses **Back**, the most recent page is popped from the stack.

This follows the **LIFO (Last In First Out)** principle.

---

## Program Menu

1.Visit a Webpage

2.Go Back

3.Current Page

4.Display History

5.Clear History

6.Exit

---

## How It Works

1. When a user visits a webpage, it is pushed onto the stack.
2. The **top of the stack represents the current page**.
3. When the user clicks **Back**, the current page is removed from the stack.
4. The previous page becomes the new current page.

---

## Example Output

Browser Back Navigation System

Visit a Webpage

Go Back

Current Page

Display History

Clear History

Exit

Enter choice: 1
Enter URL: google.com

Visited: google.com

---

## How to Run

### Compile

gcc browser_navigation.c -o browser


---

## Learning Concepts

This project demonstrates:

- Linked Lists
- Stack Data Structure
- Dynamic Memory Allocation
- Menu Driven Programs
- Basic Memory Management in C

---


## Future Improvements

- Add **Forward navigation**
- Store browsing history in a **file**
- Implement **GUI version**
- Use **Doubly Linked List**

---

⭐ If you like this project, consider giving it a **star** on GitHub!
