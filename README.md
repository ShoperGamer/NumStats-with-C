
# NumStats

โปรแกรมคำนวณผลรวมและค่าเฉลี่ยของชุดตัวเลข

## เกี่ยวกับโปรเจกต์

`NumStats` เป็นโปรแกรมภาษา C อย่างง่ายที่ช่วยให้ผู้ใช้สามารถป้อนชุดตัวเลข และโปรแกรมจะทำการคำนวณ **ผลรวม** และ **ค่าเฉลี่ย** ของตัวเลขเหล่านั้น เหมาะสำหรับการเรียนรู้พื้นฐานการเขียนโปรแกรมภาษา C รวมถึงการจัดการ input/output และการวนซ้ำ

## คุณสมบัติ

-   รับจำนวนตัวเลขที่ต้องการจากผู้ใช้
-   รับค่าตัวเลขแต่ละตัวจากผู้ใช้
-   คำนวณผลรวมของตัวเลขทั้งหมด
-   คำนวณค่าเฉลี่ยของตัวเลขทั้งหมด
-   แสดงผลลัพธ์ผลรวมและค่าเฉลี่ย (ทศนิยม 2 ตำแหน่ง)

## การติดตั้งและการใช้งาน

### ข้อกำหนดเบื้องต้น

-   คอมไพเลอร์ C (เช่น GCC)

### วิธีคอมไพล์และรัน

1.  บันทึกโค้ดด้านบนเป็นไฟล์ `.c` (เช่น `numstats.c`)
2.  เปิด Terminal หรือ Command Prompt
3.  นำทางไปยังไดเรกทอรีที่คุณบันทึกไฟล์
4.  คอมไพล์โค้ดโดยใช้ GCC:
    
    Bash
    
    ```
    gcc numstats.c -o numstats
    
    ```
    
5.  รันโปรแกรม:
    
    Bash
    
    ```
    ./numstats
    
    ```
    

## ตัวอย่างการใช้งาน

```
input = 3
1 number =  10
2 number =  20
3 number =  30
total = 60.00
avg = 20.00
```


----------

# NumStats

A program to calculate the sum and average of a set of numbers.

## About The Project

`NumStats` is a simple C program that allows users to input a series of numbers, and the program will calculate their **sum** and **average**. It's ideal for learning basic C programming concepts, including input/output handling and looping.

## Features

-   Asks the user for the count of numbers they wish to input.
-   Takes each number as input from the user.
-   Calculates the sum of all numbers.
-   Calculates the average of all numbers.
-   Displays the total sum and average (formatted to two decimal places).

## Installation and Usage

### Prerequisites

-   A C compiler (e.g., GCC)

### How to Compile and Run

1.  Save the code above as a `.c` file (e.g., `numstats.c`).
2.  Open your Terminal or Command Prompt.
3.  Navigate to the directory where you saved the file.
4.  Compile the code using GCC:
    
    Bash
    
    ```
    gcc numstats.c -o numstats
    
    ```
    
5.  Run the program:
    
    Bash
    
    ```
    ./numstats
    
    ```
    

## Example Usage

```
input = 3
1 number =  10
2 number =  20
3 number =  30
total = 60.00
avg = 20.00

```

