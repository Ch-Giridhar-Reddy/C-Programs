# C Programming – Practice Questions on Conditional Statements

## Level 1: Basic Conditional Statements (if and if-else)

| **No.** | **Programming Question** |
| --- | --- |
| 1 | Write a C program to check whether a given number is positive or negative. |
| 2 | Write a C program to check whether an integer is even or odd. |
| 3 | Write a C program to determine whether a person is eligible to vote based on age. |
| 4 | Write a C program to find the larger of two numbers. |
| 5 | Write a C program to check whether a given number is divisible by 5. |
| 6 | Write a C program to determine whether a student has passed or failed based on a minimum passing mark of 40. |
| 7 | Write a C program to check whether a given character is a vowel or consonant. Assume the input is an English alphabet. |
| 8 | Write a C program to check whether a given year is a leap year. |
| 9 | Write a C program to check whether a number is divisible by both 3 and 5. |
| 10 | Write a C program to check whether the entered temperature is above the specified threshold of 35°C. |

## Level 2: Multiple Conditions (else-if Ladder)

| **No.** | **Programming Question** |
| --- | --- |
| 11 | Write a C program to find the largest among three numbers. Also handle the case where two or more numbers are equal. |
| 12 | Write a C program to classify a number as positive, negative, or zero. |
| 13 | Write a C program to assign grades A, B, C, D, or F based on a student's marks. |
| 14 | Write a C program to classify a person as child, teenager, adult, or senior citizen based on age. |
| 15 | Write a C program to calculate electricity charges using different unit-consumption slabs. |
| 16 | Write a C program to calculate an employee's bonus based on years of service. |
| 17 | Write a C program to determine whether three sides form an equilateral, isosceles, or scalene triangle, or an invalid triangle. |
| 18 | Write a C program to calculate a discount based on the total shopping amount. |
| 19 | Write a C program to classify Body Mass Index (BMI) into underweight, normal, overweight, or obese categories. |
| 20 | Write a C program to classify an examination result as distinction, first class, second class, pass, or fail. |

## Level 3: Nested Conditional Statements (nested if)

| **No.** | **Programming Question** |
| --- | --- |
| 21 | Write a C program to determine the largest of three numbers using nested if statements. |
| 22 | Write a C program to check whether a student is eligible for a scholarship based on marks and family income. |
| 23 | Write a C program to determine whether a person is eligible for a driving licence based on age and possession of a learner's licence. |
| 24 | Write a C program to check whether a customer is eligible for a bank loan based on salary, age, and credit score. |
| 25 | Write a C program to determine whether a triangle is valid and, if valid, whether it is right-angled. |
| 26 | Write a C program to determine whether a student is eligible to attend an examination based on attendance percentage and medical exemption. |
| 27 | Write a C program to check whether a candidate is eligible for campus placement based on CGPA, backlogs, and aptitude score. |
| 28 | Write a C program to calculate an employee's incentive based on department and performance rating. |
| 29 | Write a C program to check whether a given date is valid, considering the month, number of days, and leap year. |
| 30 | Write a C program to calculate the roots of a quadratic equation and classify them as real and distinct, real and equal, or complex based on the discriminant. |

## Level 4: Switch-Case Statements

| **No.** | **Programming Question** |
| --- | --- |
| 31 | Write a menu-driven C program to perform addition, subtraction, multiplication, and division using switch-case. |
| 32 | Write a C program to display the name of a weekday based on a number from 1 to 7. |
| 33 | Write a C program to display the number of days in a month based on the entered month number and year. |
| 34 | Write a C program to calculate the area of a circle, rectangle, or triangle using a menu-driven approach. |
| 35 | Write a C program to convert temperatures between Celsius and Fahrenheit using a menu. |
| 36 | Write a C program to simulate a basic ATM menu with balance enquiry, withdrawal, and deposit operations. |
| 37 | Write a C program to calculate parking charges based on vehicle type: two-wheeler, car, or bus. |
| 38 | Write a C program to perform unit conversions between metres and kilometres, kilograms and grams, and hours and minutes. |
| 39 | Write a C program to select an LED colour (red, green, or orange) using a menu and display its corresponding traffic signal instruction. |
| 40 | Write a C program to simulate a restaurant billing system that calculates the cost of a selected food item and quantity. |

## Level 5: Real-World Scenario-Based Programming Questions

These problems require students to identify suitable conditions and implement decision-making logic.

### 41. Smart Temperature Monitoring System

A temperature monitoring system classifies the surrounding temperature into the following categories:

| **Temperature** | **Display** |
| --- | --- |
| Below 20°C | Cold |
| 20°C–30°C | Normal |
| Above 30°C–40°C | Hot |
| Above 40°C | Critical |

Write a C program that accepts the temperature as input and displays the corresponding status.

### 42. Smart Traffic Signal System

A traffic light controller accepts a colour code:

- R – Stop

- G – Go

- O – Wait

Write a C program using switch-case to display the corresponding instruction. Display an error message for invalid inputs.

### 43. Electricity Billing System

An electricity board charges consumers based on the following illustrative tariff:

| **Units consumed** | **Rate** |
| --- | --- |
| First 100 units | ₹3 per unit |
| Next 100 units | ₹5 per unit |
| Above 200 units | ₹8 per unit |

Write a C program that accepts total units consumed and calculates the electricity bill using cumulative slab billing.

### 44. Student Scholarship Eligibility System

A college provides scholarships under the following conditions:

- Marks ≥ 85% and annual family income ≤ ₹2,00,000: 100% scholarship

- Marks ≥ 75% and annual family income ≤ ₹3,00,000: 50% scholarship

- Marks ≥ 60% and annual family income ≤ ₹4,00,000: 25% scholarship

- Otherwise: No scholarship

Write a C program to determine scholarship eligibility and percentage.

### 45. Bank ATM Withdrawal System

An ATM allows a customer to withdraw money subject to the following conditions:

- Withdrawal amount must be positive.

- Amount must be a multiple of ₹100.

- Withdrawal amount must not exceed the available balance.

- Maximum amount per transaction is ₹20,000.

Write a C program to validate the transaction and display the remaining balance after a successful withdrawal.

### 46. Smart Irrigation System

An agricultural irrigation controller uses soil moisture readings:

| **Soil moisture** | **Action** |
| --- | --- |
| Below 30% | Turn ON water pump |
| 30%–60% | Maintain normal condition |
| Above 60% | Turn OFF water pump |

Write a C program to accept soil moisture percentage and display the required action. Validate that moisture is between 0% and 100%.

### 47. Online Shopping Discount System

An online store offers discounts based on purchase amount:

| **Purchase amount** | **Discount** |
| --- | --- |
| Below ₹1,000 | No discount |
| ₹1,000–₹4,999.99 | 5% |
| ₹5,000–₹9,999.99 | 10% |
| ₹10,000 and above | 15% |

Write a C program to calculate the discount and final payable amount.

### 48. Smart Parking Management System

A parking area charges vehicles according to type and duration:

| **Vehicle type** | **Hourly charge** |
| --- | --- |
| Two-wheeler | ₹10 |
| Car | ₹30 |
| Bus | ₹50 |

Write a C program to accept vehicle type and number of hours, validate the inputs, and calculate total parking charges.

### 49. Employee Performance Evaluation System

A company evaluates employees using a performance score out of 100:

- 90–100: Outstanding

- 75–89: Excellent

- 60–74: Good

- 40–59: Needs Improvement

- Below 40: Poor

Write a C program to accept the score, validate the range, and display the performance category.

### 50. Smart Home Security System

A security system uses three inputs:

- Door sensor: 0 = Closed, 1 = Open

- Motion sensor: 0 = No motion, 1 = Motion detected

- Security mode: 0 = Disarmed, 1 = Armed

Write a C program that activates the alarm when the security system is armed and either the door is open or motion is detected. Otherwise, display "System Safe".

## Additional Challenging Programming Questions

| **No.** | **Problem Statement** |
| --- | --- |
| 51 | Write a C program to find the second-largest among three distinct integers without using arrays or sorting. |
| 52 | Write a C program to determine whether a character is an uppercase letter, lowercase letter, digit, or special character. |
| 53 | Write a C program to check whether a given three-digit integer is an Armstrong number without using loops. |
| 54 | Write a C program to check whether a given three-digit integer is a palindrome without using loops. |
| 55 | Write a C program to determine whether three given angles can form a triangle and classify it as acute, right, or obtuse. |
| 56 | Write a C program to calculate income tax using predefined tax slabs and progressive tax calculation. |
| 57 | Write a C program to determine whether a given point (x, y) lies in the first, second, third, or fourth quadrant, or on an axis. |
| 58 | Write a C program to determine whether the entered time is valid in 24-hour format and categorize it as morning, afternoon, evening, or night. |
| 59 | Write a C program to identify the nature of roots of a quadratic equation using the discriminant and handle the case where the coefficient of x² is zero. |
| 60 | Write a C program to implement a basic calculator using the conditional (?:) operator, including protection against division by zero. |
