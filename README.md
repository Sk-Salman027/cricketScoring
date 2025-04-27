## Cricket Scoring

### Problem statement
<p>You are given a string representing a sequence of deliveries in a cricket match. Each character in the string represents the outcome of one legal delivery. Your task is to calculate the total score, number of wickets, number of fours, number of sixes, and total overs bowled (in standard cricket notation).</p>
<p>The possible outcomes of a delivery are: • '0' to '6': Runs scored from a ball. • 'W': Wicket (a batsman is out).</p>
<p>Assume: • There are no extras (like no balls, wides, etc.). • Each character represents a legal delivery. • An over consists of 6 legal deliveries.</p>

### Input Format
<p>A single line containing a string S of characters, where each character is either a digit from '0' to '6', or 'W'.</p>


### Constraints
```c
•   1 ≤ length of S ≤ 300
•   S only contains characters from '0' to '6' and 'W'
```
### Output Format

<p>Total Run: X Wicket: Y Four: Z Six: A Over: B.C</p>
<p>Where: • X is the total number of runs, • Y is the number of wickets, • Z is the number of fours, • A is the number of sixes, • B.C is the number of overs bowled (B = full overs, C = remaining balls).</p>


### Sample Input 0

```c
00201W66143W0
```
### Sample Output 0

```c
Total Run: 23
Wicket: 2
Four: 1
Six: 2
Over: 2.1
```