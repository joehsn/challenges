import { test, expect } from "bun:test";
import { maxEqualRowsAfterFlips } from "./index";

test("Case 1", () => {
  expect(maxEqualRowsAfterFlips([[0, 1], [1, 1]])).toBe(1);
});

test("Case 2", () => {
  expect(maxEqualRowsAfterFlips([[0, 1], [1, 0]])).toBe(2);
});

test("Case 3", () => {
  expect(maxEqualRowsAfterFlips([[0, 0, 0], [0, 0, 1], [1, 1, 0]])).toBe(2);
});

test("Case 4", () => {
  expect(maxEqualRowsAfterFlips([
    [1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1],
    [1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0],
    [1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1],
    [1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0],
    [1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1]
  ])).toBe(2);
});
