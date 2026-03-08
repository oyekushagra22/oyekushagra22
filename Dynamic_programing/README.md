<h1 align="center">Dynamic Programming Notes</h1>

<p align="center">
Learning and documenting <b>Dynamic Programming patterns, concepts, and problems</b> for coding interviews and FAANG-level preparation.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/DSA-Dynamic%20Programming-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Language-C++-green?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Focus-Problem%20Solving-orange?style=for-the-badge"/>
</p>

---

# 📚 About This Repository

This repository documents my **Dynamic Programming (DP) learning journey**, where I solve problems, write notes, and explain the reasoning behind solutions.

The goal is to:

- Build strong **problem-solving intuition**
- Understand **Dynamic Programming patterns deeply**
- Practice **coding interview problems**
- Prepare for **software engineering interviews**
- Maintain structured notes for **quick revision**

Instead of memorizing solutions, the focus is on **understanding how Dynamic Programming works internally**.

---

# 🧠 What is Dynamic Programming?

Dynamic Programming is an algorithmic technique used to solve problems by:

- Breaking them into **smaller subproblems**
- Solving each subproblem **only once**
- Storing results to **avoid recomputation**

DP is useful when problems have two main properties.

---

## 1️⃣ Overlapping Subproblems

The same subproblem appears multiple times.

Example:


Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)


Without DP, the same calculations repeat many times.

---

## 2️⃣ Optimal Substructure

The optimal solution can be built using **optimal solutions of smaller subproblems**.

Example:


dp[n] = dp[n-1] + dp[n-2]


---

# 🔁 DP Approaches

Dynamic Programming can be implemented in two main ways.

---

## Top-Down (Memoization)

Uses recursion with caching.


solve(n):
if result already computed:
return cached result
compute result
store result
return result


This approach avoids recomputation.

---

## Bottom-Up (Tabulation)

Builds the solution starting from the **smallest subproblems**.

Example:


dp[0] = base case
dp[1] = base case

for i in range(2, n):
dp[i] = transition


---

# 🧠 The 4-Step DP Thinking Process

Whenever you encounter a Dynamic Programming problem, follow these steps.

---

## 1️⃣ Define the State

Clearly define what the DP array represents.

Example:


dp[i] = minimum cost to reach step i


or


dp[i] = maximum money we can rob from houses 0..i


---

## 2️⃣ Find the Recurrence / Transition

Determine how the current state depends on previous states.

Example:


dp[i] = max(dp[i-1], nums[i] + dp[i-2])


Meaning:

- Skip current house
- Rob current house

Choose the maximum.

---

## 3️⃣ Define Base Cases

Base cases represent the **smallest solvable subproblems**.

Example:


dp[0] = nums[0]
dp[1] = max(nums[0], nums[1])


---

## 4️⃣ Build the DP Table

Compute results from **smaller states → larger states**.

Example:


for i in range(2, n):
dp[i] = transition(dp[i-1], dp[i-2])


---

# 🛣️ Learning Roadmap (Basic → Advanced)

This repository follows a structured path from **fundamentals to advanced DP topics**.

---

# 🟢 Stage 1 — Fundamentals

Focus on understanding **core DP intuition**.

| Problem | Concept |
|------|------|
| Fibonacci | Basic DP recurrence | 
| Climbing Stairs | Fibonacci pattern |
| House Robber | Take / Skip decision DP |
| Coin Change | Minimum optimization DP |
| Min Cost Climbing Stairs | Cost optimization |

These problems build the **foundation for Dynamic Programming**.

---

# 🟡 Stage 2 — Intermediate DP

These problems introduce **more complex state transitions**.

| Problem | Pattern |
|------|------|
| Longest Increasing Subsequence | Sequence DP |
| Longest Common Subsequence | String DP |
| Unique Paths | Grid DP |
| Partition Equal Subset Sum | Knapsack Pattern |
| Edit Distance | String transformation DP |

---

# 🔴 Stage 3 — Advanced DP

Advanced problems commonly asked in **top tech interviews**.

| Topic | Description |
|------|------|
| Knapsack DP | Resource optimization problems |
| Interval DP | Problems involving ranges |
| DP on Trees | Tree-based DP problems |
| Bitmask DP | Used when n ≤ 20 |
| Digit DP | Counting numbers with constraints |
| Advanced Sequence DP | Hard interview problems |

---

# 🧠 Key DP Patterns

Most Dynamic Programming interview questions fall into a few patterns.

- Fibonacci Pattern
- 1D Dynamic Programming
- 2D Grid DP
- Knapsack Problems
- Sequence DP
- String DP
- Partition DP
- DP on Trees
- Bitmask DP

Recognizing these patterns helps solve problems faster.

---

# 🎯 Goals

✔ Master Dynamic Programming concepts  
✔ Practice interview-level problems  
✔ Improve algorithmic thinking  
✔ Prepare for top tech company interviews  

---

# ⭐ If you find this repository helpful

Consider giving it a **star ⭐**.

It motivates me to continue documenting more problems and concepts.
