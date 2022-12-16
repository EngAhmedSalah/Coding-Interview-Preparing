<h2><a href="https://leetcode.com/problems/the-maze/">490 The Maze</a></h2><h3>Medium</h3><hr><div><p>There is a ball in a maze with empty spaces and walls. The ball can go through empty spaces by rolling up, down, left or right, but it won't stop rolling until hitting a wall. When the ball stops, it could choose the next direction.

Given the ball's start position, the destination and the maze, determine whether the ball could stop at the destination.

The maze is represented by a binary 2D array. 1 means the wall and 0 means the empty space. You may assume that the borders of the maze are all walls. The start and destination coordinates are represented by row and column indexes.


<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> maze = [[0 , 0 , 1 , 0 , 0],
               [0 , 0 , 0 , 0 , 0],
               [0 , 0 , 0 , 1 , 0],
               [1 , 1 , 0 , 1 , 1],
	       [0 , 0 , 0 , 0 , 0]]
start = (0 , 4)
destination = (4 , 4)
<strong>Output:</strong> true
<strong>Explanation:</strong> One possible way is : left -> down -> left -> down -> right -> down -> right.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> maze = [[0 , 0 , 1 , 0 , 0],
               [0 , 0 , 0 , 0 , 0],
               [0 , 0 , 0 , 1 , 0],
               [1 , 1 , 0 , 1 , 1],
	       [0 , 0 , 0 , 0 , 0]]
start = (0 , 4)
destination = (3 , 2)
<strong>Output:</strong> false
<strong>Explanation:</strong> There is no way for the ball to stop at the destination.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ol>
	<li>There is only one ball and one destination in the maze.</li>
	<li>Both the ball and the destination exist on an empty space, and they will not be at the same position initially.</li>
	<li>The given maze does not contain border (like the red rectangle in the example pictures), but you could assume the border of the maze are all walls.</li>
	<li>The maze contains at least 2 empty spaces, and both the width and height of the maze won't exceed 100.</li>
</ol>