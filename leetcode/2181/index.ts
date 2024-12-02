import { ListNode } from "./index.test";

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

export function mergeNodes(head: ListNode | null): ListNode | null {
  let dummy = new ListNode();
  dummy.next = head;
  let current = dummy;
  let prev: ListNode | null = null;
  while (current.next) {
    prev = current;
    if (current.next.val === 0) {
      current = current.next;
    }
    if (current.next) {
      current.val += current.next.val;
      current.next = current.next.next;
    }
  }
  if (prev) {
    prev.next = null;
  }
  return head;
};


