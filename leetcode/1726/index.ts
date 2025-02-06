/**
 * @url: https://leetcode.com/problems/tuple-with-same-product/description/
 */
function tupleSameProduct(nums: number[]): number {
  let map = new Map<number, string[]>();
  let n = nums.length;
  let count = 0;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      let product = nums[i] * nums[j];
      if (map.has(product)) {
        count += map.get(product)?.length || 0;
        map.get(product)?.push(`${i},${j}`);
      } else {
        map.set(product, [`${i},${j}`]);
      }
    }
  }
  return count * 8;
}

export default tupleSameProduct;
