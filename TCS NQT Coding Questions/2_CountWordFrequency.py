'''

Q. You are a manager of an inventory you have been asked to write a code to manag the inventory, where you have been asked to keep and track every individual item. ✓ You're supposed to take an input from the user as a string and the and the item names are separated by a space you have to take the input in a single line separated by a space.

write a function countFrequency(s) that takes a string s as input and returns the frequency of each character in the string as a dictionary.

If the input contains any digits or numbers, return "Invalid input".

Example 1: apple banana orange apple

Output: apple 2 banana 1 orange 1

Example 2: apple 10 banana orange

Output: Invalid Input

'''


def CountWordFrequency(string):
    words = string.split()
    frequency = {}

    for word in words:
        if not word.isalpha():  
            return "Invalid Input"

        if word in frequency:
            frequency[word] += 1
        else:
            frequency[word] = 1
    
    result = ""
    for elem, quantity in frequency.items():
        result += f"{elem} {quantity} "
    
    return result.strip()

def main():
    string = input("Enter items: ")
    result = CountWordFrequency(string)
    print(result)

if __name__ == "__main__":
    main()
