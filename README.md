# cis165-lab7-
Name: Kamryn Davis

Course section: CIS-165-W099
# Step-by-Step Process
  	bmi.cpp 
    (1)Ask the user for weight in pounds   
  	(2) Ask the user for height in inches 
  	(3) If the height or weight is less than zero or negative make an error message 
    (4) Calculate the BMI
    (5) Use an if else statement to determine the BMI category 
    (6) Display the BMI and its category


     color_mixer.cpp
    (1)Ask the user for the first primary color 
    (2)Ask the user for the second primary color 
    (3)Display a message if the user inputs a color other than a primary color  
    (4)Determine what colors the user inputs 
	(5)Use an if else statement to determine what the two primary colors make 
	(6)Display the result
 
	
# Test Table 
Restored it back to its original values, even though the test table also records other values. Ran it again after restoring it to its assigned values. 


| Program | Value Used | Expected Results | Actual Output | Match or Fix |
| --- | --- | --- | --- |  --- |
| **bmi.cpp** — assigned values | 100,70 | 14.35, Underweight | 14.35, Underweight | Match |
| **bmi.cpp** — changed values | -150, 80 | Error: weight and height must be positive | Error: weight and height must be positive  | Match |
| **color_mixer.cpp** — assigned values |red, blue | purple | purple | Match |
| **color_mixer.cpp** — changed values | orange, yellow | Error: both inputs must be red,blue,or yellow | Error: both inputs must be red,blue,or yellow | Match |

# How To Run The Program 
	1.Copy the code from the file 
  	2.Go to	[OnlineGDB](https://www.onlinegdb.com/) and paste the code 
	3.Make sure the language is C++ and click "Run" 

# Explanation 
**How does the BMI formula use pounds and inches? Why is height * height needed?**
The BMI uses pounds and inches in the formula 703*weight/(height*height). The weight is multiplied by 703 to convert it to the BMI scale and is divided by height squared. height* height is needed for the BMI to be divided by height squared. 
**How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter? Explain how your conditions avoid gaps and handle both endpoints.**
With the conditions set, 18.5 should be considered in the normal range (optimal weight), while 25.0 would be considered overweight. The order of your conditions matters because in the if-else statement, it checks each condition if they have not already matched. They avoid gaps by checking if it is below 18.5, greater than 18.5, or 25.0 or above. 
**Why do you check weight and height before calculating BMI?**
You check the weight and height before calculating BMI because you need to make sure the calculations are valid and not invalid inputs like a negative number or a number less than zero. The calculation would be inaccurate without checking the weight and height first. 
**Why do you classify the unrounded BMI and round only its displayed value?**
It classifies the unrounded BMI to get it so it is accurate when determining its category. Rounding only for displays makes it easier to read when seeing the final result. 
**What does strcmp return for equal text? Why is == not the correct comparison for character-array contents?**
strcmp returns 0 if the text is equal. == is not the correct comparison for character-array contents because it won't reliably tell if the two arrays contain the same word. 
**How do you make each mixture work in either input order and handle two identical primary colors?**
To make each mixture work in either input order, I check both the order of each pair compared to handling two identical primary colors; I check if both pairs are the same. An example could be if both the first and second primary colors are blue. 
**How do you check for an invalid color in either input position?**
To check for an invalid color in either input position, I check if any invalid color or any color that is not a primary color was entered in the first or second input before displaying the mixture results. 
**How do named constants and result variables make your programs easier to read and check?**
Named constants make it easier to read and check so each name is declared and clear throughout the program. It is also easier to read and check, so there is no confusion when having a value that is directly written in the code without a name. Result variables make programs easier by giving the calculations before displaying them in the output. It makes it easier when testing and in case of any errors. 
