# Cpp-Pattern-Printing

12 pattern-printing programs in **C++** using nested loops. I wrote all of them myself while starting DSA .

## What these programs practice

- Nested `for` loops: one loop for rows, inner loops for spaces and characters
- Finding the rule for each row (how many spaces, how many symbols)
- Using `char` variables with `ch++` and `ch--` to move through the alphabet
- Printing numbers that count up and then back down
- Using `if` conditions inside loops to treat the border differently from the inside (pattern 12)

## The patterns

The examples below show the output for `n = 4` (pattern 3 uses `n = 3` and pattern 12 uses `n = 5`).

**Pattern 1: square of stars** (`pattern_1.cpp`)
```
****
****
****
****
```

**Pattern 2: letters in every row** (`pattern_2.cpp`)
```
A  B  C  D
A  B  C  D
A  B  C  D
A  B  C  D
```

**Pattern 3: numbers in order** (`pattern_3.cpp`, `n = 3`)
```
1    2    3
4    5    6
7    8    9
```

**Pattern 4: star triangle** (`pattern_4.cpp`)
```
* 
* * 
* * * 
* * * * 
```

**Pattern 5: letter triangle, one letter per row** (`pattern_5.cpp`)
```
A
BB
CCC
DDDD
```

**Pattern 6: number triangle** (`pattern_6.cpp`)
```
1
12
123
1234
```

**Pattern 7: reversed letters** (`pattern_7.cpp`)
```
A 
B A 
C B A 
D C B A 
```

**Pattern 8: continuing letters** (`pattern_8.cpp`)
```
A 
B C 
D E F 
G H I J 
```

**Pattern 9: inverted letter triangle, shifted right** (`pattern_9.cpp`)
```
AAAA
 BBB
  CC
   D
```

**Pattern 10: number pyramid** (`pattern_10.cpp`)
```
   1
  121
 12321
1234321
```

**Pattern 11: hollow diamond** (`pattern_11.cpp`)
```
   *
  * *
 *   *
*     *
 *   *
  * *
   *
```

**Pattern 12: hollow square** (`pattern_12.cpp`, `n = 5`)
```
*****
*   *
*   *
*   *
*****
```

## Run any program

```bash
g++ pattern_1.cpp -o pattern_1
./pattern_1
```

On Windows, run `pattern_1.exe` instead of `./pattern_1`.

## Known limitations

- **Pattern 11 has a fixed size.** `n` is set to 4 in the code and doesn't ask the user. Making it take input is the next small change.
- **Letter patterns go past `Z`.** For a large `n`, patterns 2, 5, 7, 8 and 9 keep going into other symbols, since they only add 1 to a `char`.
- **No input checking.** A negative or non-numeric `n` isn't handled.
- Some rows end with a trailing space (for example patterns 4, 7 and 8).

## What I learned

- Every pattern is a table: one row per line of output, with a column for spaces and a column for symbols.
- Counting loops can run upward or downward, and the start and end values decide the shape.
- Hand-tracing a small case (like `n = 3`) before coding saves many failed attempts.

---

Part of my learning journey: [github.com/HINDOL-2007](https://github.com/HINDOL-2007)
