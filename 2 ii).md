# 2 ii) Dry run of the algorithm

The algorithm reads numbers until the sentinel value -1 is entered, since the number of elements is not known in advance. It is repeated here so the trace can be followed:

```
START
  READ number
  IF number = -1 THEN
      DISPLAY "No numbers entered"
      STOP
  ENDIF
  SET largest = number
  READ number
  WHILE number != -1 DO
      IF number > largest THEN
          SET largest = number
      ENDIF
      READ number
  ENDWHILE
  DISPLAY "The largest number is", largest
STOP
```

Using the following input\: 12, 45, 7, 63, 29, -1;

The first number read is 12. It is not -1, so largest is set to 12. The next number, 45, is read. It is not the sentinel, so the loop body runs. Since 45 is greater than 12, largest becomes 45. Then 7 is read. It is not greater than 45, so largest stays at 45. Next, 63 is read, and because 63 is greater than 45, largest becomes 63. Then 29 is read. It is less than 63, so largest remains 63. Finally -1 is read, the loop condition number != -1 is false, and the loop ends. The program displays "The largest number is 63".

The same trace as a table:

```
number read   number != -1   number > largest   largest
12            (first read)   (not tested)       12
45            true           true               45
7             true           false              45
63            true           true               63
29            true           false              63
-1            false          (loop exits)       63
```

Output: The largest number is 63

## special cases
If the only input is -1, the first test catches it and the program displays "No numbers entered" without going into the loop. If the input is 5 followed by -1, largest is set to 5, the loop is skipped, and 5 is displayed. If the input is 9, 9, 9, -1, the condition 9 > 9 is never true, so largest stays at 9, which is correct. The algorithm handles all of these properly.
