def retrieve_items(dungeons):
    dungeons = list(map(int, dungeons))
   
    items_retrieved = 0


    def toggle_dungeons(dungeons):
        return [1 - state for state in dungeons]
   
    for i in range(len(dungeons)):
        if dungeons[i] == 1:
            items_retrieved += 1
            dungeons = toggle_dungeons(dungeons)
   
    return items_retrieved


def main():
    N = int(input("Enter the number of dungeons: ").strip())
   
    dungeons_input = input("Enter the dungeons status without any spaces: ").strip()
   
   
    if len(dungeons_input) != N:
        print("Error: The length of the dungeon states does not match the number of dungeons.")
        return
   
    items_retrieved = retrieve_items(dungeons_input)
   
    print(f"Number of valuable items retrieved: {items_retrieved}")


if __name__ == "__main__":
    main()
