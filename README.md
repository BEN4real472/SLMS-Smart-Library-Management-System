# SLMS - Smart Library Management System

The Smart Library Management System (SLMS) is a C++ console-based application developed to demonstrate object-oriented programming principles, including inheritance, encapsulation and polymorphism.

The system provides different functionality for Members, Librarians and Administrators while using separate classes to organise library operations and system rules.

## Main Features

- Member, Librarian and Administrator login
- Role-specific dashboards
- View book details
- Borrow books
- Return books
- Reserve books
- View library rules
- Maximum borrowing limit of 5 books
- Reservation expiry period of 3 days
- Late return penalty
- Invalid menu choice handling
- System startup and shutdown functionality

## Object-Oriented Programming

The project demonstrates the following OOP principles:

### Inheritance

`Member`, `Librarian` and `Administrator` are derived from the `User` base class. This allows common user information and behaviour to be shared between the different user roles.

### Encapsulation

Class data and behaviour are organised within separate classes. Access to class data is controlled through class methods, helping to keep the system modular and maintainable.

### Polymorphism

The `User` class provides common behaviour that can be overridden by derived user classes. This allows Members, Librarians and Administrators to provide role-specific behaviour through the same base-class interface.

## Main Classes

The system contains the following main classes:

- `User` - base class for system users
- `Member` - provides member-specific library operations
- `Librarian` - provides librarian-specific operations
- `Administrator` - provides administrator-specific operations
- `Book` - represents library book information and status
- `LibraryRules` - manages library rules and restrictions
- `LibrarySystem` - coordinates the operation of the library system

## Project Structure

```text
SLMS-Smart-Library-Management-System/
|
|-- include/
|   |-- Administrator.h
|   |-- Book.h
|   |-- Librarian.h
|   |-- LibraryRules.h
|   |-- LibrarySystem.h
|   |-- Member.h
|   `-- User.h
|
|-- src/
|   |-- Administrator.cpp
|   |-- Book.cpp
|   |-- Librarian.cpp
|   |-- LibraryRules.cpp
|   |-- LibrarySystem.cpp
|   |-- Member.cpp
|   `-- User.cpp
|
|-- main.cpp
|-- README.md
|-- SLMS.sln
|-- SLMS.vcxproj
`-- SLMS.vcxproj.filters
```

## Running the Smart Library Management System

### Visual Studio

Open `SLMS.sln` in Visual Studio.

Build the solution and run the program using **Local Windows Debugger**.

### Command Line

Compile the program:

```bash
g++ -Iinclude main.cpp src/*.cpp -o slms
```

Run the system:

```bash
./slms
```

## Example Main Menu

When the application starts, the following main menu is displayed:

```text
===== MAIN MENU =====
1. Member Login
2. Librarian Login
3. Administrator Login
4. View Library Rules
5. View Book Details
6. Exit
```

## Testing

The system has been tested to verify its main operations, including user login, role-specific functionality, library rules, book operations, invalid menu selections and system shutdown.

## Technologies Used

- C++
- Object-Oriented Programming
- Microsoft Visual Studio
- Git
- GitHub
