import re

def check_password_strength(password):
    """Checks password against security criteria."""
    # Criteria: At least 8 chars, 1 uppercase, 1 lowercase, 1 number, 1 special char
    if len(password) < 8:
        return False, "Too short (min 8 characters)."
    if not re.search("[A-Z]", password):
        return False, "Missing an uppercase letter."
    if not re.search("[a-z]", password):
        return False, "Missing a lowercase letter."
    if not re.search("[0-9]", password):
        return False, "Missing a number."
    if not re.search("[!@#$%^&*]", password):
        return False, "Missing a special character (!@#$%^&*)."
    return True, "Strong password!"

# Emulated "do while" loop for the menu
while True:
    print("\n--- Password Manager Menu ---")
    print("1. Check Password Strength")
    print("2. Exit")
    
    choice = input("Select an option: ")

    if choice == '1':
        pwd = input("Enter a password to test: ")
        is_valid, message = check_password_strength(pwd)
        print(f"Result: {message}")
    elif choice == '2':
        print("Exiting program.")
        break  # This exit condition mimics the 'while' part of a do-while loop
    else:
        print("Invalid choice. Please try again.")
