# Linked List Manipulation
This code implements a linked list data structure to store and manipulate a collection of data entries. The program allows you to display the list, add new entries, and remove entries based on the key value.

## Getting Started
To compile and run the code, follow these steps:

1. Make sure you have a C compiler installed on your system (e.g., GCC).
2. Save the source code to a directory of your liking.
3. Open a terminal or command prompt and navigate to the directory where the source code file is located.
4. Run the following command to compile the code:

   ```bash
   gcc -o program linked_list_manipulation.c
   ```

   This command will generate an executable file named `program`.

5. Run the program:

   ```bash
   ./program
   ```

## Usage
Upon running the program, you will be presented with a menu of commands:

- Enter `1` to display the list of data entries.
- Enter `2` to add a new entry to the list. You will be prompted to input the key, data1, data2, and data3 values for the new entry.
- Enter `3` to remove an entry from the list. You will be prompted to input the key value of the entry to be removed.
- Enter any other value to exit the program.

The program utilizes a linked list data structure to store the data entries. Each entry consists of a key value, data1, data2, and data3 values.

## Implementation Details
The code defines a structure named `linked_data` that represents a single data entry in the linked list. It contains the following fields:

- `next`: A pointer to the next entry in the linked list.
- `key`: An integer representing the key value of the entry.
- `data1`, `data2`, `data3`: Double values representing additional data associated with the entry.

The program uses the `display_list` function to traverse the linked list and print the key and data values of each entry.
The `add_list` function adds a new entry to the end of the linked list. It creates a new `linked_data` structure, assigns the provided key and data values to its fields, and appends it to the end of the list.
The `remove_list` function removes an entry from the linked list based on the provided key value. It traverses the list, searches for the entry with the matching key, updates the previous entry's `next` pointer to skip the entry to be removed, and frees the memory allocated for the removed entry.

## Limitations
- The code assumes that the user will input valid integer and double values when adding new entries or removing entries from the list. Incorrect input may lead to unexpected behavior or errors.
- The code does not handle errors or exceptions that may occur during memory allocation or file I/O operations.
- The linked list implementation does not include features such as sorting or searching. It focuses on basic operations of adding and removing entries.
- The code does not persist the list data beyond the runtime of the program. Any modifications to the list will be lost when the program terminates.

## License
This project is licensed under the MIT License. Feel free to use and modify the code as per your requirements.
