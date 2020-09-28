from cs50 import get_int

# Prompt for user input untill input is in the range of 1 to 8
while True:
    height = get_int("Height: ")
    if height >= 1 and height <= 8:
        break

# Outer loop changes row
for temp in range(height):

    # Inner loops to print out individual rows

    # Prints initial spaces
    for i in range(temp, height - 1):
        print(" ", end="")

    # Prints initial #
    for i in range(temp+1):
        print("#", end="")

    # Gives indent
    print("  ", end="")

    # Prints final #
    for i in range(temp+1):
        print("#", end="")

    # Print new line after each row
    print()