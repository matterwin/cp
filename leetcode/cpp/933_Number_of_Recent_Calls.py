from collections import deque

class RecentCounter:
    def __init__(self):
        self.q = deque()

    def ping(self, t: int) -> int:
        self.q.append(t)

        start = t - 3000

        while self.q and self.q[0] < start:
            self.q.popleft()

        return len(self.q)
