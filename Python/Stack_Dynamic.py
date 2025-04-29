
def create_list(size):
    # Local list, created dynamically inside function (stack allocation)
    local_list = [i for i in range(size)]
    print(f"Stack Dynamic List inside function: {local_list}")
    return local_list

if __name__ == "__main__":
    create_list(5)
    create_list(10)
