# 🫧 Bubble Sort in C (Ascending Order)

This repository demonstrates the **Bubble Sort algorithm implemented in C** to sort the elements of an array in **ascending order**. Bubble Sort is one of the simplest sorting algorithms and is commonly used for learning the fundamentals of sorting and loops in C programming.

---

## 📌 What is Bubble Sort?

**Bubble Sort** repeatedly compares adjacent elements of an array and swaps them if they are in the wrong order.
This process continues until the array becomes completely sorted.

🔁 Larger elements "bubble up" to the end of the array after each iteration.

---

## ⚙️ Program Features

* 📊 Sorts an array in **ascending order**
* 🔁 Uses **nested loops**
* 🔄 Performs **element swapping**
* 💻 Written in **C programming language**
* 📚 Beginner-friendly sorting logic

---

## 🧠 Algorithm Logic

1. Start from the first element of the array.
2. Compare the current element with the next element.
3. If the current element is greater, **swap them**.
4. Continue this process for the entire array.
5. Repeat the steps until the array is fully sorted.

---

## 💻 C Program

```c
#include<stdio.h>

void main()
{
	int i,temp,j,arr[5]={8,7,6,5,2};
	
	for(i=5;i>0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(j=0;j<5;j++)
	{
		printf("%d",arr[j]);
	}
}
```

---

## 📊 Example

Initial Array:

```
{8, 7, 6, 5, 2}
```

### 🔁 Pass 1

Compare and swap adjacent elements.

```
8 7 6 5 2
↓
7 8 6 5 2
↓
7 6 8 5 2
↓
7 6 5 8 2
↓
7 6 5 2 8
```

Largest element **8 moves to the end**.

---

### 🔁 Pass 2

```
7 6 5 2 8
↓
6 7 5 2 8
↓
6 5 7 2 8
↓
6 5 2 7 8
```

---

### 🔁 Pass 3

```
6 5 2 7 8
↓
5 6 2 7 8
↓
5 2 6 7 8
```

---

### 🔁 Pass 4

```
5 2 6 7 8
↓
2 5 6 7 8
```

---

## ✅ Final Sorted Array

```
2 5 6 7 8
```

---

## ⭐ Why Bubble Sort?

✨ Easy to understand
✨ Good for learning sorting logic
✨ Demonstrates array manipulation
✨ Useful for beginners learning C

---

## 🚀 Repository Purpose

This project is created to help beginners understand:

* 🔹 Array sorting
* 🔹 Nested loops
* 🔹 Swapping values
* 🔹 Basic algorithm design in C

---

⭐ **If you found this helpful, consider giving the repository a star!**
