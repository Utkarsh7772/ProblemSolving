class Solution {
    public String customSortString(String order, String s) {
        StringBuilder ans = new StringBuilder();
        
        for (int left = 0; left < order.length(); left++) {
            char temp = order.charAt(left);
            
            for (int right = 0; right < s.length(); right++) {
        
                if (s.charAt(right) == temp) {
                    ans.append(temp); 
                }
            }
        }
        
        for (int right = 0; right < s.length(); right++) {
            char temp = s.charAt(right);

            if (order.indexOf(temp) == -1) { 
                ans.append(temp);
            }
        }
        
        return ans.toString();
    }
}