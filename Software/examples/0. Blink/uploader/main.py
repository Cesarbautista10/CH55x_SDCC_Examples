from uploader import Programmer
import sys

def main():
    if len(sys.argv) != 3:
        print("Use: python my_code.py file.bin [flash|verify|erase]")
        sys.exit(1)

    filename = sys.argv[1]
    action = sys.argv[2]

    programmer = Programmer()

    try:
        programmer.detect()
        
        if action == "flash":
            programmer.erase()
            bytes_written = programmer.flash_bin(filename)
            programmer.exit()
            print(f"{bytes_written} bytes written to the flash memory.")
        elif action == "verify":
            bytes_verified = programmer.verify_bin(filename)
            print(f"{bytes_verified} bytes verified.")
        elif action == "erase":
            programmer.erase()
        else:
            print("Invalid action. Valid actions are: flash, verify, erase.")
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()
