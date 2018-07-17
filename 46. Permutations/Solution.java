public class Solution {
    private List<List<Integer>> result = new ArrayList<List<Integer>>();
    private int length;
    public List<List<Integer>> permute(int[] nums) {
        length = nums.length;
        List<Integer> select = new ArrayList<Integer>();
        helper(select,nums,0);
        return result;
    }
    //s代表已取出的数，nums则是有所有数的池子，pos代表要取第几个位置的数
    public void helper(List<Integer> s,int[] nums,int pos){
        //跳出条件是已取了池子里所有的数，完成一次排列
        if(pos == length){
            result.add(new ArrayList<Integer>(s));
            return;
        }
        for(int i=0;i<nums.length;i++){
            int num = nums[i];
            //取过的数不再取    
            if(s.contains(num)){
                continue;
            }
            s.add(num);
            helper(s,nums,pos+1);
            //重要！！遍历过此节点后，要回溯到上一步，因此要把加入到结果中的此点去除掉！
            s.remove(s.size()-1);
        }
    }
}