*This project has been created as part of the 42 curriculum by bmorvai.*

---

## Description

This project implements a sorting algorithm using two stacks and a limited set of operations. The goal is to sort a stack of integers with the minimum number of moves.

Development began with the fundamental building blocks: implementing the stacks and all operations capable of pushing elements between them. From this simple mechanic, everything else emerged.

After coding the operations, the stack initialization system was built — taking command-line arguments, converting them to integers, and validating them. A dedicated checker handles all error cases: duplicates, integer overflow, and non-numeric input.

---

## Algorithm — Butterfly Sort

A lesser-known method, studied from the work of a fellow student and through a Russian YouTube video with auto-generated subtitles, which presented its own unique challenges.

The unsorted data is first **indexed** by value. A sliding **range window** — sized according to the total dataset — then targets elements for pushing to stack B. The push counter increases with each push.

The crux of the method: elements with an index equal to or below the current push count are pushed *and rotated* to the far side of index 0, while elements slightly above (the margin determined by dataset size, see `chunk_size`) are pushed without rotation. Index 0 becomes an origin point — a cornerstone — and through statistical tendency, the data in stack B forms two wings around it: a butterfly.

Since maximum values always cluster near the edges of the wings, locating them and pushing them back to stack A is a low-cost operation that reconstructs the stack in ascending order.

---

## Instructions

```bash
make
./push_swap 3 1 2 5 4
./push_swap "3 1 2 5 4"
```

---

## Resources

- [gannemar — Russian language explanation](https://www.youtube.com/watch?v=GA9aKzl86nA&t=220s) *(auto-subtitled)*
- yyakuben — assistance with clarifying the algorithm
- Claude AI — assistance with concepts and implementation

---
