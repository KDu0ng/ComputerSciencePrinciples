class Number:
  def __init__(self, id, score):
    self.id = id
    self.score = score
      
  def __lt__(self, other):
    return self.score < other.score
