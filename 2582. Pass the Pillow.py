class Solution:
    def passThePillow(self, n: int, time: int) -> int:
        # (n-1) is the number of steps to complete one pass
        # Example -> 1->2->3->4->5 ,here for n = 5 ,it took only n-1 = 4 steps

        # number of passes completed
        passes = time // (n-1)
        # number of steps left
        turnsLeft = time % (n-1)
        # if we have returned to the start after completed the possible passes
        if passes % 2 == 0:
            return turnsLeft+1
        # if we are at the end after completed the possible passes
        else:
            return n - turnsLeft
