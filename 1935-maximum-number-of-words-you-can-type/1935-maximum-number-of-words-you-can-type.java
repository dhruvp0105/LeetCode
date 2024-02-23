class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        int count = 0;
        String[] arr = text.split(" ");
        for(int i=0;i<arr.length; i++){
            boolean b= false;
            char[] chararr = brokenLetters.toCharArray();
            for(int j = 0; j<chararr.length; j++){
                char c = chararr[j];
                if(arr[i].contains(c+"")){
                    b = true;
                    break;
                }
            }
            if(b == false){
                count++;
            }
            
        }
        return count;
    }
}