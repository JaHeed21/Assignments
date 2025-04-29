# Empty list; can change size dynamically at runtime
dynamic_list = []

def add_element(value):
    dynamic_list.append(value)
    print(f"Added {value}: {dynamic_list}")

def remove_element(value):
    if value in dynamic_list:
        dynamic_list.remove(value)
        print(f"Removed {value}: {dynamic_list}")
    else:
        print(f"{value} not found.")

if __name__ == "__main__":
    add_element(5)
    add_element(10)
    remove_element(5)
    add_element(15)
