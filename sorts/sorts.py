def bubblesort(list):
  for i in range(0, len(list) - 1):
    for n in range(0, len(list) - i - 1):
      if list[n] < list[n + 1]:
        temp = list[n]
        list[n] = list[n + 1]
        list[n + 1] = temp
  return list

def selectionsort(list):
  for i in range(0, len(list) - 1):
    maxindex = i;
    for n in range(i + 1, len(list)):
      if list[n] > list[maxindex]:
        maxindex = n

    temp = list[i]
    list[i] = list[maxindex]
    list[maxindex] = temp
  return list

def insertionsort(list):
  for i in range(1, len(list)):
    key = list[i]
    j = i - 1
    while (j >= 0 and list[j] < key):
      list[j + 1] = list[j]
      j = j - 1
    list[j + 1] = key
  return list

def pythonsort(list):
  return sorted(list, reverse = True)

def Quicksort(A, low=0, high=None):
  if high is None:
    high = len(A) - 1

  if low < high:
    pivot = Partition(A, low, high)
    Quicksort(A, low, pivot - 1)
    Quicksort(A, pivot + 1, high)

  return A

def Partition(A, low, high):
  pivot = A[high]
  i = low - 1
  for j in range(low, high):
    if A[j] < pivot:
      i = i + 1
      temp = A[i]
      A[i] = A[j]
      A[j] = temp

  temp = A[i + 1]
  A[i + 1] = A[high]
  A[high] = temp
  return i + 1