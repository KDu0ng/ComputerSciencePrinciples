import sorts
import time
from SortingAlgorithms import Number

def main():
  try:
    data = []
    with open("sorts/prog408a.dat", 'r') as f:
      lines = f.readlines()
      for lcv in range(0, len(lines), 2):
        id = int(lines[lcv])
        score = int(lines[lcv+1])

        data.append(Number(id, score))
    pass

    print("Original List\nID   Score")
    for n in data:
      print(f"{n.id}  {n.score}")

    start = time.perf_counter()
    print("\nBubblesort\nID   Score")
    sort = sorts.bubblesort(data.copy())
    for n in sort:
      print(f"{n.id}  {n.score}")

    end = time.perf_counter()
    print(f"Sorting time: {end - start} seconds")

    start = time.perf_counter()
    print("\nSelection Sort\nID   Score")
    sort = sorts.selectionsort(data.copy())
    for n in sort:
      print(f"{n.id}  {n.score}")
      
    end = time.perf_counter()
    print(f"Sorting time: {end - start} seconds")

    start = time.perf_counter()
    print("\nInsertion Sort\nID   Score")
    sort = sorts.insertionsort(data.copy())
    for n in sort:
      print(f"{n.id}  {n.score}")
      
    end = time.perf_counter()
    print(f"Sorting time: {end - start} seconds")

    start = time.perf_counter()
    print("\nPython Sort\nID   Score")
    sort = sorts.pythonsort(data.copy())
    for n in sort:
      print(f"{n.id}  {n.score}")
      
    end = time.perf_counter()
    print(f"Sorting time: {end - start} seconds")
      
  except Exception as e:
    print("Error:", e)
  pass


if __name__ == "__main__":
  main()
#python sorts/sort.py