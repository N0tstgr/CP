//this is not correct you have to correct it
class Solution {
    public int[] runningSum(int[] nums) {
        int i = 0;
        int size = nums.length;
        int[] runningsum = new int[size];
        while(i<nums.length){
            number[i] = nums[i];
            runningsum[i]  = number[i] +  nums[i];
            i++;
        }
        return runningsum;
    }
}
