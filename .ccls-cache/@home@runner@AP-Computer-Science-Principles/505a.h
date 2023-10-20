int points(int books) {
  if (books > 6) {
    return 75 + (books - 6) * 20;
  } else if (books > 3) {
    return 30 + (books - 3) * 15;
  } else {
    return books * 10;
  }
}

double avg(int point[]) {
  int sum = 0;
  for (int c = 0; c < sizeof(point)/sizeof(int); c++) {
    sum += point[c];
  }
  return sum / (double) (sizeof(point)/sizeof(int));
}