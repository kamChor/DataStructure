Excellent base, Ritul 👏
You’ve already got a strong technical foundation in that README — it just needs some **polish, structure, and visual hierarchy** to make it look **GitHub-ready and professional**, like something students or developers would star and refer back to often.

Here’s an improved, **visually enhanced, SEO-optimized**, and **well-formatted version** of your README 👇

---

# 🧮 Data Structures & Sorting Algorithms — Cheat Sheet

A **comprehensive reference guide** for time and space complexities of the most commonly used **data structures and sorting algorithms** in computer science.
Perfect for quick revision before interviews, exams, or competitive programming.

---

## ⚙️ Data Structure Operations Cheat Sheet

> **Note:** For most cases, *best-case* operations are `O(1)` (constant time).

<table>
<tr>
<th rowspan="2">📦 Data Structure</th>
<th colspan="4">Average Case — ⏱️ Time Complexity</th>
<th colspan="4">Worst Case — ⚠️ Time Complexity</th>
<th>💾 Space Complexity</th>
</tr>

<tr>
<td><strong>Access</strong></td>
<td><strong>Search</strong></td>
<td><strong>Insert</strong></td>
<td><strong>Delete</strong></td>
<td><strong>Access</strong></td>
<td><strong>Search</strong></td>
<td><strong>Insert</strong></td>
<td><strong>Delete</strong></td>
<td><strong>Worst</strong></td>
</tr>

<tr>
<td><strong>Array</strong></td>
<td>O(1)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
</tr>

<tr>
<td><strong>Singly Linked List</strong></td>
<td>θ(n)</td>
<td>θ(n)</td>
<td>θ(1)</td>
<td>θ(1)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(n)</td>
</tr>

<tr>
<td><strong>Stack</strong></td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(n)</td>
</tr>

<tr>
<td><strong>Queue</strong></td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(n)</td>
</tr>

<tr>
<td><strong>Binary Tree</strong></td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
</tr>

<tr>
<td><strong>Binary Search Tree (BST)</strong></td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
</tr>

<tr>
<td><strong>Balanced BST (AVL, Red-Black Tree)</strong></td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(log n)</td>
<td>O(log n)</td>
</tr>
</table>

---

## 🌀 Sorting Algorithms Cheat Sheet

Here’s a summary of **time and space complexities**, **stability**, and **classification** of major sorting algorithms.

<table>
<tr>
<th rowspan="2">🔢 Algorithm</th>
<th colspan="3">⏱️ Time Complexity</th>
<th>💾 Space</th>
<th rowspan="2">🧩 Stable?</th>
<th rowspan="2">⚙️ Type</th>
<th rowspan="2">📘 Remarks</th>
</tr>

<tr>
<th>Best</th>
<th>Average</th>
<th>Worst</th>
<th>Worst</th>
</tr>

<tr>
<td><strong>Bubble Sort</strong></td>
<td>O(n)</td>
<td>O(n²)</td>
<td>O(n²)</td>
<td>O(1)</td>
<td>✅ Yes</td>
<td>Comparison</td>
<td>Simple but inefficient; mostly for educational use.</td>
</tr>

<tr>
<td><strong>Insertion Sort</strong></td>
<td>O(n)</td>
<td>O(n²)</td>
<td>O(n²)</td>
<td>O(1)</td>
<td>✅ Yes</td>
<td>Comparison</td>
<td>Efficient for small or nearly sorted datasets.</td>
</tr>

<tr>
<td><strong>Selection Sort</strong></td>
<td>O(n²)</td>
<td>O(n²)</td>
<td>O(n²)</td>
<td>O(1)</td>
<td>❌ No</td>
<td>Comparison</td>
<td>Always scans entire array even if sorted.</td>
</tr>

<tr>
<td><strong>Merge Sort</strong></td>
<td>O(n log n)</td>
<td>O(n log n)</td>
<td>O(n log n)</td>
<td>O(n)</td>
<td>✅ Yes</td>
<td>Comparison</td>
<td>Optimal for linked lists; requires O(n) space for arrays.</td>
</tr>

<tr>
<td><strong>Heap Sort</strong></td>
<td>O(n log n)</td>
<td>O(n log n)</td>
<td>O(n log n)</td>
<td>O(1)</td>
<td>❌ No</td>
<td>Comparison</td>
<td>Efficient and in-place but not stable.</td>
</tr>

<tr>
<td><strong>Quick Sort</strong></td>
<td>O(n log n)</td>
<td>O(n log n)</td>
<td>O(n²)</td>
<td>O(log n)</td>
<td>❌ No</td>
<td>Comparison</td>
<td>Use random pivot to avoid worst case; very efficient in practice.</td>
</tr>

<tr>
<td><strong>Tree Sort</strong></td>
<td>O(n log n)</td>
<td>O(n log n)</td>
<td>O(n²)</td>
<td>O(n)</td>
<td>✅ Yes</td>
<td>Comparison</td>
<td>Uses BST with inorder traversal; depends on tree balance.</td>
</tr>

<tr>
<td><strong>Counting Sort</strong></td>
<td>O(n + k)</td>
<td>O(n + k)</td>
<td>O(n + k)</td>
<td>O(k)</td>
<td>✅ Yes</td>
<td>Linear</td>
<td>Best for small integer ranges (0 ≤ k ≤ n).</td>
</tr>

<tr>
<td><strong>Bucket Sort</strong></td>
<td>O(n + k)</td>
<td>O(n + k)</td>
<td>O(n²)</td>
<td>O(n)</td>
<td>✅ Yes*</td>
<td>Linear</td>
<td>Stable only if the sub-sort used is stable.</td>
</tr>

<tr>
<td><strong>Radix Sort</strong></td>
<td>O(d n)</td>
<td>O(d n)</td>
<td>O(d n)</td>
<td>O(d + n)</td>
<td>✅ Yes</td>
<td>Linear</td>
<td>Often uses Counting Sort as a subroutine; stable.</td>
</tr>
</table>

---

## 🧩 Quick Reference Summary

| Category                        | Fastest (Avg) | Most Space Efficient | Stable          | Notes                               |
| ------------------------------- | ------------- | -------------------- | --------------- | ----------------------------------- |
| **Comparison Sorts**            | Quick Sort    | Heap Sort            | Merge/Insertion | Trade-off between speed & stability |
| **Non-Comparison Sorts**        | Radix Sort    | Counting Sort        | All             | Great for integers or fixed keys    |
| **Data Structure Access (Avg)** | Array (O(1))  | Stack/Queue (O(1))   | –               | Depends on structure type           |

---

## 🧠 How to Use

You can use this as:

* 🧾 A **C Programming Reference**
* 📚 A **DSA Revision Sheet**
* 🎯 An **Interview Prep Guide**

---

## 📎 Contribute

Found something to add or improve?
You’re welcome to contribute!

```bash
# Fork the repo
git clone https://github.com/yourusername/data-structure-cheatsheet.git
cd data-structure-cheatsheet
```
