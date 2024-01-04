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