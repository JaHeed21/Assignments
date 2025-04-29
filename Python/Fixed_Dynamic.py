fixed_array = [0] * 5 

def display_array():
    print("Fixed Dynamic Array:", fixed_array)

def update_element(index, value):
    if 0 <= index < len(fixed_array):
        fixed_array[index] = value
    else:
        print("Index out of bounds.")

if __name__ == "__main__":
    display_array()
    update_element(2, 10)
    display_array()
