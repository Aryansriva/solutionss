<strong>Remove All Adjacent Duplicates In string</strong>

You are given a string s consisting of lowercase English letters. A <strong>duplicate removal </strong>consists of choosing two <strong>adjacent</strong> and <strong>equal</strong> letters and removing them.

We repeatedly make <strong>duplicate removals</strong> on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is <strong>unique</strong>.

 

<strong>Example 1:</strong>

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".


<strong>Example 1:</strong>

Input: s = "azxxzy"
Output: "ay"
 

<strong>Constraints:</strong>

<ul>
<li>1 <= s.length <= 105</li>
<li>s consists of lowercase English letters.</li>
</ul>

