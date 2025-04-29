
class FixedHeapArray:
    def __init__(self, size):
        self.size = size
        self.array = [0] * size  # Allocate at runtime with fixed size
        print(f"Fixed Heap Dynamic Array of size {size} created.")

    def update(self, index, value):
        if 0 <= index < self.size:
            self.array[index] = value
            print(f"Updated index {index} to {value}: {self.array}")
        else:
            print("Index out of bounds.")

if __name__ == "__main__":
    heap_array = FixedHeapArray(4)
    heap_array.update(1, 20)
    heap_array.update(3, 40)
