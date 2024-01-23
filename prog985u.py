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
  for j in range(low, high): # doesn't include high
    if A[j] < pivot:
      i = i + 1
      temp = A[i]
      A[i] = A[j]
      A[j] = temp

  temp = A[i + 1]
  A[i + 1] = A[high]
  A[high] = temp
  return i + 1