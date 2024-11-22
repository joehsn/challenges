#!/usr/bin/env node

/**
 * Checks that every element in the array is the same.
 * @param {Array<number>} array
 * @returns {Boolean}
 */
const isSame = (array: number[]): boolean => {
  if (array.length < 2) {
    return true;
  };
  let element = array[0];
  for (let index = 1; index < array.length; index++) {
    if (array[index] !== element) {
      return false;
    }
  }
  return true;
};

/**
 * Switchs the value between 1 or 0.
 */
const switchValue = (value: number) => value === 1 ? 0 : 1;

/**
 * Return the maximum number of rows that have all values equal after some number of flips.
 */
export function maxEqualRowsAfterFlips(matrix: number[][]): number {
  const flips: number[] = [];
  for (let row = 0; row < matrix.length; row++) {
    let count: number = 0;
    for (let col = 0; col < matrix[row].length; col++) {
      let index = col % matrix.length;
      if (!isSame(matrix[index])) {
        matrix[index][row] = switchValue(matrix[index][row]);
        count++;
      }
    }
    flips.push(count);
  }
  return Math.max(...flips);
};
