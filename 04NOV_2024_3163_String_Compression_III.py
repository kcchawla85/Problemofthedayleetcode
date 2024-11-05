#https://leetcode.com/problems/string-compression-iii/solutions/6004708/beats-100-simple-explained-step-by-step-most-common-interview-string
class Solution:
    def compressedString(self, word: str) -> str:
        # Handle empty string case
        if not word:
            return ""
        
        # Initialize result array and tracking variables
        comp = []              # Array to store compressed string parts

        current_char = word[0] # Track the current character being counted
        count = 1             # Count occurrences of current character
        
        # Iterate through string starting from second character
        for c in word[1:]:
            if c == current_char:
                # If same character continues
                if count == 9:
                    # When count reaches 9, append current run and reset count
                    # This handles the case where same character appears more than 9 times
                    comp.append("9")
                    comp.append(current_char)
                    count = 1
                else:
                    # Increment count for consecutive same characters
                    count += 1
            else:
                # When different character is encountered:
                # 1. Append count of previous character
                comp.append(str(count))
                # 2. Append the previous character
                comp.append(current_char)
                # 3. Update current_char to new character
                current_char = c
                # 4. Reset count for new character
                count = 1
        
        # Handle the last run of characters
        comp.append(str(count))
        comp.append(current_char)
        
        # Join all parts into final compressed string
        return ''.join(comp)
