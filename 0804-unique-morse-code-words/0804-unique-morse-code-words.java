class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        HashSet<String> hSet=new HashSet<>();
        
        String[] morse=new String[]{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(String word:words){
            StringBuilder builder = new StringBuilder();
            for(char ch:word.toCharArray()){
                builder.append(morse[ch-'a']);
            }
            
            hSet.add(builder.toString());
        }
        
        return hSet.size();
    }
}