import { expect, test } from "bun:test";
import tupleSameProduct from ".";

test("Testcases", () => {
  expect(tupleSameProduct([2,3,4,6])).toBe(8);
  expect(tupleSameProduct([1,2,4,5,10])).toBe(16);
});
