""" A program that prints an integer representing the maximum possible sum.
"""

def main():
    """
    A program that prints an integer representing the maximum possible sum.
    """
    
    # Read the number of test cases from input
    for _ in range(int(input())):  
        
        # Read the length of the sequence
        n = int(input())  
        
        # Read the sequence and convert it into a list of integers
        a = list(map(int, input().strip().split()))  
        
        # Initialize the answer with the sum of the original sequence
        ans = sum(a)  
        
        # While the sequence has more than one element
        while n > 1:  
            
            # Reduce the length of the sequence by 1
            n -= 1  
            
            # Compute the new sequence using the difference operation:
            # Each element becomes the difference between two consecutive elements.
            # Example: If a = [5, -3], new a = [-3 - 5] = [-8].
            a = [a[i+1] - a[i] for i in range(n)]  
            
            # Update the answer with the maximum sum found so far.
            # Using `abs(sum(a))` ensures we consider both positive and negative sums.
            ans = max(ans, abs(sum(a)))  

        # Print the maximum possible sum after performing all operations
        print(ans)  


if __name__ == "__main__":
    main()
