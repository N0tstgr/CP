package Binaryin2d;

import java.util.Arrays;

public class Binaryin2d {
    public static void main(String[] args) {
        int[][] arr = {{1,2,3,4,},
                       {5,6,7,8},
                      {9,10,22,54},
                    {523,343,676,985}};
        int target = 985;
        int[] ans = Binary(arr,target);
        System.out.println(Arrays.toString(ans));

    }
    public static int[] Binary(int[][] arr, int target){
        int row = 0;
        int col = arr.length-1;
        int i = 0;
        while(row<arr.length && col>=0){
            if(arr[row][col]==target){
                return new int[]{row,col};
            }
            if(arr[row][col]<target){
                row++;
            }
            else{
                col--;
            }
        }
        return new int[]{-1, -1};
    }
}

