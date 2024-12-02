import { describe, test, expect } from "bun:test"
import { mergeNodes } from "./index"

export class ListNode {
  val: number
  next: ListNode | null
  constructor(val?: number, next?: ListNode | null) {
    this.val = (val === undefined ? 0 : val)
    this.next = (next === undefined ? null : next)
  }
}

let head = [0, 3, 1, 0, 4, 5, 2, 0].reduceRight((prev, cur) => new ListNode(cur, prev), null)
export let head2 = [0, 1, 0, 3, 0, 2, 2, 0].reduceRight((prev, cur) => new ListNode(cur, prev), null)

let expected = [4, 11].reduceRight((prev, cur) => new ListNode(cur, prev), null)
let expected2 = [1, 3, 4].reduceRight((prev, cur) => new ListNode(cur, prev), null)

describe("Testcases", () => {
  test("Case 1", () => {
    expect(mergeNodes(head)).toEqual(expected);
  });
  test("Case 2", () => {
    expect(mergeNodes(head2)).toEqual(expected2);
  });
});
