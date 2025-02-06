# [1726. Tuple with Same Product](https://leetcode.com/problems/tuple-with-same-product/description/)

## Algorithm

1. Create a map to store the product of all pairs of numbers.
2. Iterate through the array and calculate the product of all pairs of numbers.
3. If the product is already in the map, increment the count.
4. If the product is not in the map, add it to the map with a count of 1.
5. Return the count of all products that have more than one pair of numbers times `8` (since there are `8` permutations of a tuple).

## Psuedocode

```plaintext
FUNCTION tupleSameProduct(nums)
    PRODUCTS = MAP()
    COUNT = 0
    FOR i = 0:len(nums)-1
        FOR j = i+1:len(nums)
            PRODUCT = nums[i] * nums[j]
            IF PRODUCTS[PRODUCT]
                PRODUCTS[PRODUCT]++
            ELSE
                PRODUCTS[PRODUCT] = 1
            END IF
        END FOR
    END FOR
END FUNCTION
```

## Complexity Analysis

The runtime complexity of this algorithm is `O(N^2)`. The space complexity is `O(N)`.
