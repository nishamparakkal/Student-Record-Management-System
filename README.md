# Student Record Management System

A menu-driven **Student Record Management System** developed in C using **Singly Linked Lists, Dynamic Memory Allocation, and File Handling**.

The project allows users to manage student records through a simple command-line interface.

## Features

- **Add Student** – Add new student records with automatically assigned roll numbers.
- **Delete Student** – Remove a student record using the roll number.
- **Display Records** – View all stored student details.
- **Modify Records** – Update existing student information.
- **Sort Records** – Arrange student records.
- **Reverse List** – Reverse the order of records.
- **Delete All** – Remove all student records.
- **File Handling** – Save and load records using `student.dat`.

## Technologies Used

- C Programming
- Singly Linked Lists
- Dynamic Memory Allocation
- Structures and Pointers
- File Handling
- Modular Programming

## Project Structure

```text
student_record_management_system/
│
├── student.h
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_sort.c
├── stud_save.c
├── stud_load.c
├── rev.c
├── makefile
├── README.md
└── .gitignore
```

## Compilation and Execution

Clone the repository:

```bash
git clone https://github.com/nishamparakkal/Student-Record-Management-System.git
cd Student-Record-Management-System
```

Compile the project:

```bash
make
```

Run the executable:

```bash
./student
```

Alternatively, compile manually using GCC:

```bash
gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_sort.c stud_save.c stud_load.c rev.c -o student
```

## Concepts Practiced

This project was developed to strengthen practical C programming skills, particularly linked-list operations, pointers, memory management, modular code organisation, and persistent data storage.

---

**Language:** C  
**Project Type:** Mini Project
