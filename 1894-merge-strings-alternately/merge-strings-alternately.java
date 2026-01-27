class Solution {
    public String mergeAlternately(String s1, String s2) {
        StringBuilder ans=new StringBuilder();
        int i=0,j=0;
        while(i<s1.length() || j<s2.length()){
            if(i<s1.length()){
                ans.append(s1.charAt(i));
                i++;
            }
            if(j<s2.length()){
                ans.append(s2.charAt(j));
                j++;
            }
        }
            return ans.toString();
            }
        }
       
