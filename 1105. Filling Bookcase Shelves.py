class Solution:
    def minHeightShelves(self, books: List[List[int]], shelfWidth: int) -> int:
        n = len(books)
        dp = [[float('inf') for _ in range(shelfWidth+1)]for _ in range(n+1)]
        def solve(curr,currWidth,height):
            if curr >= n:
                return height
            if dp[curr][currWidth] != float('inf'):
                return dp[curr][currWidth]
            book_width = books[curr][0]
            book_height = books[curr][1]
            keep = float('inf')
            if book_width <= currWidth:
                keep = solve(curr+1,currWidth-book_width,max(height,book_height))
            skip = height+solve(curr+1,shelfWidth-book_width,book_height)
            dp[curr][currWidth] = min(keep,skip)
            return dp[curr][currWidth]

        return solve(0,shelfWidth,0)
