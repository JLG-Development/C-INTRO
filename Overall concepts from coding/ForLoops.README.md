@author JLG_DEVELOPMENT

This is a readme explain the thought process and the purpose of ForLoops.cpp
This program has multiple methods in it primarily 

****MATH****

Most of the triangles were fairly easy to create. I will not touch on those methods since they are fairly simple and easy to understand. 

ProperPyramid(line 95) was the first in a serious of more math involved pyramids.
The main issue i had with this was the layers going down add by 3 vers by 1 as they would in a right triangle.
This was fairly easy to solve using nested for loops.

The first nested loop obviously controls the printing of each layer, one at a time.
Because the integer controling this forloop increments and layers increase in size at a fixed rate,
I was able to notice a pattern, as most do with math. 
First layer is 1, then 3, then 5. For simplicity we will say each layer is represented by a number on the x access, or an iteration in the
for loop. Thus the first layer printed digits would be equal to the loop vairable * 2 - 1. I will provided data showing this.

-Layer 1 is represented by 1 in the loop vairable and prints 1 digit. This makes the equation loop variable * 2 - 1 true
-Layer 2 is represented by 2 in the loop variable and prints 3 digits. Also true.
-Layer 3 is represented by 3 in the loop variable and prints 5 digits. Also true.

And so on.

This equation for the decending pattern is also used by the following.
    -upsideDownPyramid();
    -diamond();
    -wavePattern();
    -pascalTriangle

Some were slightly modified to allow the certain modification such as a design on the end of each line. This is compensenated in
the equation by - 2 (ie print two leed unicode characters to allow for the two on the end of each line.). Making the equation look like
(loop variable * 2) - 1 - 2

All spacing to the left of the designs in controlled by a seperate for loop in each method, self denoting by the loop variable
labled spaces. It basically prints a right triangle of spaces to the terminal for formating for upsidedown pyramid structures. The inverse is
true for upward facing pyramid structures. Pretty self explanotory equation.  

For upwards facing pyramid structures:
What ever the SCALE (how many layers) of the pyramid may be, we subtract 1 from that value. 
In other terms the for loop will run 1 less time that the others.
We then subtract (outer for loop variable) from (SCALE - 1). This way as the outer for loop variable increments we progressively print
less spaces.

For upsidedown pyramid structures formatting:
Same concept except we compensate for running the space for loop1 less time in the main for loop by running it back wards.
So instead of (SCALE - 1) - loop variable, we have SCALE - loop variable, which automatically doesnt run the first time because
0 is not less than 0.

numPyramid()
I just broke the equation for the regular pyramids in half and printed the two halves of the lines in two seperate for loops. 
This way the numbers could ascend and descend.
More explanation in the comments of the code.

+--------------------------------------------------------------------+
****ADDITIONAL NOTES****

The constants PASCAL_SCALE & NUM_PYRAMID_SCALE should not be set for more than 9 or less than 1.

HAVE FUN!!!



