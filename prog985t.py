def split_list(a_list):
  half = len(a_list)//2
  return a_list[:half], a_list[half:]

def Mergesort(A):
  if len(A) > 1:
    L, R = split_list(A)
    L = Mergesort(L)
    R = Mergesort(R)
    A = Merge(A, L, R)

  return A
  
def Merge(A, L, R):
  i = 0 # Index for left subarray
  j = 0 # Index for right subarray
  k = 0 # Index for merged array
  while i < len(L) and j < len(R):
    if L[i] < R[j]:
      A[k] = L[i]
      i = i + 1
    else:
      A[k] = R[j]
      j = j + 1
      
    k = k + 1

  while i < len(L): # Copy remaining elements of L
    A[k] = L[i]
    i = i + 1
    k = k + 1

  while j < len(R): # Copy remaining elements of R
    A[k] = R[j]
    j = j + 1
    k = k + 1

  return A