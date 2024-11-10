class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = result = 0
        seen = {}
        for i, letter in enumerate(s):
            if seen.get(letter, -1) >= start:
                start = seen[letter] + 1
            result = max(result, i - start + 1)
            seen[letter] = i
        return result
        