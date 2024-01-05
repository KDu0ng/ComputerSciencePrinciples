import time

def linear(nums, num):
  for index in range(0, len(nums)):
    if nums[index] == num:
      return index;
  return -1;

def binary(nums, num):
  low = 0
  high = len(nums) - 1
  while low <= high:
    mid = int(low + (high - low)/2)
    if nums[mid] == num:
      return mid
    elif nums[mid] < int(num):
      low = mid + 1
    else:
      high = mid - 1
  return -1


def main():
  try:
    nums = []
    with open("data/prog408b.dat", 'r') as f:
      for line in f:
        nums.append(int(line))
    pass

    num = int(input("Enter the number to search: "))

    start = time.perf_counter()
    index = linear(nums, num)
    end = time.perf_counter()
    if index == -1:
      index = "Number not found"

    print(f"Linear Search (Unsorted): Number found at index {index}\nSearch time: {end-start} seconds")

    nums.sort()
    start = time.perf_counter()
    index = linear(nums, num)
    end = time.perf_counter()
    if index == -1:
      index = "Number not found"

    print(f"\nLinear Search (Sorted): Number found at index {index}\nSearch time: {end-start} seconds")
    
    start = time.perf_counter()
    index = binary(nums, num)
    end = time.perf_counter()
    if index == -1:
      index = "Number not found"
    
    print(f"\nBinary Search: Number found at index {index}\nSearch time: {end-start} seconds")
    
  
  except Exception as e:
    print("Error:", e)
  pass


if __name__ == "__main__":
  main()

#python search.py