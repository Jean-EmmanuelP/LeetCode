class Solution
{
    // Time: O(n) --> n is the number of character in the string
    // Space: O(n) --> adding n element in the stack
    private static final Map<Character, Character> map = Map.of('(', ')',
                                                                '{', '}',
                                                                '[', ']');
    public boolean isValid(String s) 
    {
        Stack<Character> stack = new Stack<>();
        for (char c : s.toCharArray())
        {
            if (map.containsKey(c))
                stack.push(c);
            else
            {
                if (stack.isEmpty())
                    return (false);
                char open = stack.pop();
                if (map.get(open) != c)
                    return (false);
            }
        }
    }
    return (stack.isEmpty());
}