class Solution {
    public int largestAltitude(int[] gain) {
        int altitude=0;
        int highest=0;
        for(int i=0;i<gain.length;i++){
                int g=gain[i];
                altitude+=g;
            if(altitude>highest){
                highest=altitude;
            }
        }
        return highest;
    }
}