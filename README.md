# Student Planner

A beginner C++ command-line student planner built from CSC-120 fundamentals.

## Current features

- Add one assignment
- Store course, assignment title, and due date
- View the saved assignment
- Search by course or assignment title
- Mark an assignment complete or incomplete
- Delete the assignment
- Repeat the menu until choosing Exit
- Handle invalid menu choices

## Current limitations

This version stores one assignment in memory while the program is running. Save-to-file support and multiple assignments are planned for later versions.

## Built with

- C++
- `iostream`
- `string`
- Basic variables and character values
- `if` statements
- `while` loops
- Console input and output

## Running the program

Open the project in Visual Studio or another C++ compiler, build the project, and run the console application.

Choose an option from the menu and follow the prompts.

## Example output

Example interaction (selected screens; the menu clears between actions on Windows):

```text
Choose an option: 1
Course name: CSC-120
Assignment title: Lab 1
Due date: 11/05/2026
Assignment added successfully.

Choose an option: 2
========================================
           ALL ASSIGNMENTS
========================================
Course: CSC-120
Assignment: Lab 1
Due date: 11/05/2026
Completed?: N
```

This version stores only one assignment at a time and does not yet save data to a file.

## Planned upgrades

- Store multiple assignments
- Add assignment numbers
- Save and load assignments from a file
- Sort assignments by due date
- Add functions and classes
